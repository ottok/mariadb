#!/bin/bash
set -e

display_help() {
  echo "Usage   : $(basename "$0") [-h] --installed-dir <dir> --ann-workspace <dir> [--skip-init-db] [--dataset]"
  echo "Example : $(basename "$0") --ann-workspace server/ann-workspace --installed-dir server/build/installed"
  echo
  echo "A small benchmarking script for testing vector ANN search. Run it in CI system on every commit, "
  echo "or execute it locally."
  echo
  echo "This script requires you have python3.10+ installed locally and have built and have a directory "
  echo "contains installed MariaDB server. For Ubuntu 22.04, dependencies need to be installed:"
  echo "    apt-get install -y python3-numpy python3-scipy python3-pip build-essential git libmariadb-dev"
  echo "    pip3 install mariadb"
  echo
  echo "If you don't have the build or python locally, you can choose to use `run-docker.sh` instead, "
  echo "to build and run the ann-benchmark insider docker container."
  echo
  echo "Mandatory arguments:"
  echo "  --installed-dir <dir>      directory path containing the installation of MariaDB server"
  echo "  --ann-workspace <dir>      workspace path for running the script and save outputs"
  echo
  echo "optional arguments:"
  echo "  --skip-init-db             skip re-init the database to allow database customization"
  echo
  echo "  --dataset                  dataset to run for the search, default is 'random-xs-20-euclidean'"
  echo "                             See all supported datasets in ann-benchmarks:"
  echo "                             https://github.com/erikbern/ann-benchmarks/blob/main/ann_benchmarks/datasets.py"
  echo "                             Note that big dataset could take much longer to run and consume more memory."
  echo
  echo "  -h, --help                 display this help and exit"
  echo
}

while :
do
  case "$1" in
    -h | --help)
      display_help
      exit 0
      ;;
    --installed-dir)
      shift
      if [[ $# -gt 0 ]]; then
        MARIADB_INSTALL_DIR=$(readlink -m $1)
      else
        echo -e "Error: Missing value for --installed-dir\n" >&2
        exit 1
      fi
      shift
      ;;
    --ann-workspace)
      shift
      if [[ $# -gt 0 ]]; then
        WORK_DIR=$(readlink -m $1)
      else
        echo -e "Error: Missing value for --ann-workspace\n" >&2
        exit 1
      fi
      shift
      ;;
    --dataset)
      shift
      if [[ $# -gt 0 ]]; then
        DATASET=$1
      else
        echo -e "Error: Missing value for --dataset\n" >&2
        exit 1
      fi
      shift
      ;;
    --skip-init-db)
      DO_INIT_MARIADB="0"
      shift
      ;;
    -*)
      echo -e "Error: Unknown option: $1\n" >&2
      display_help
      exit 1
      ;;
    *)  # No more options
      break
      ;;
  esac
done

# Verify mandatory argument MARIADB_INSTALL_DIR
if [[ -z "$MARIADB_INSTALL_DIR" ]]; then
  echo -e "Error: Missing mandatory argument --installed-dir\n" >&2
  display_help
  exit 1
fi

# Verify mariadbd exists in MARIADB_INSTALL_DIR
if ! [ -f "$MARIADB_INSTALL_DIR/bin/mariadbd" ]; then
  echo -e "mariadbd does not exist under $MARIADB_INSTALL_DIR/bin. Please make sure the MariaDB installation path is correct.\n"
  exit 1
fi

# Verify mariadb-install-db exists in MARIADB_INSTALL_DIR
if ! [ -f "$MARIADB_INSTALL_DIR/scripts/mariadb-install-db" ]; then
  echo -e "mariadb-install-db does not exist under $MARIADB_INSTALL_DIR/scripts. Please make sure the MariaDB installation path is correct.\n"
  exit 1
fi

# Verify mandatory argument WORK_DIR
if [[ -z "$WORK_DIR" ]]; then
  echo -e "Error: Missing mandatory argument --ann-workspace\n" >&2
  display_help
  exit 1
fi

# Check if WORK_DIR exists, and create it if it doesn't
if [ ! -d "$WORK_DIR" ]; then
  mkdir -p "$WORK_DIR" || { echo -e "Error: Failed to create directory '$WORK_DIR'.\n"; exit 1; }
fi

# Check permissions for WORK_DIR
if [ ! -r "$WORK_DIR" ] || [ ! -w "$WORK_DIR" ] || [ ! -x "$WORK_DIR" ]; then
  echo -e "Error: You don't have full permissions for --ann-workspace directory '$WORK_DIR'.\n"
  exit 1
fi

# Set default dataset
if [[ -z "$DATASET" ]]; then
  DATASET="random-xs-20-euclidean"
fi

# Set default dataset
if [[ -z "$DO_INIT_MARIADB" ]]; then
  DO_INIT_MARIADB="1"
fi


ANN_SOURCE_DIR=$WORK_DIR/ann-benchmarks
MARIADB_DB_WORKSPACE=$WORK_DIR/mariadb-data

mkdir -p $WORK_DIR
cd $WORK_DIR

# Download ann-benchmarks in the target folder and install dependencies
function install_ann_benchmarks() {
  target_dir=$1
  
  # Check if Python 3.10 or newer is available, required by ann-benchmarks
  if ! python3 -c 'import sys; exit(sys.version_info < (3,10))'; then
      echo -e "Python is required but not found. Please install Python 3.10 or higher to proceed.\n"
      exit 1
  fi
  
  ann_git_repo="https://github.com/HugoWenTD/ann-benchmarks.git"
  ann_git_branch="mariadb"
  
  echo -e "Downloading ann-benchmark...\n"
  if [ ! -d "$target_dir" ]; then
      # Only clone ann-benchmarks repository if it doesn't exist
      git clone --branch "$ann_git_branch" "$ann_git_repo" --depth 1 "$target_dir" || {
          echo -e "Failed to clone ann-benchmarks repository. Please check your internet connection and try again.\n"
          exit 1
      }
      # Existing benchmark results for various algorithms in the repository may cause confusion:
      # https://github.com/erikbern/ann-benchmarks/tree/main/results
      # Deleting these irrelevant images to prevent confusion.
      rm -rf $target_dir/results/*
  else
      # Do not overwrite the script to allow user customization
      echo -e "[WARN] ann-benchmarks repository already exists. Skipping cloning. Remove $target_dir if you want it to be re-initialized.\n"
  fi
  
  echo -e "Installing ann-benchmark dependencies...\n"
  if ! pip3 install -q -r $target_dir/requirements.txt; then
      echo -e "Failed to install dependencies. Please make sure pip is installed and try again.\n"
      exit 1
  fi
}

# Prepare ann-benchmarks
install_ann_benchmarks $ANN_SOURCE_DIR
cd $ANN_SOURCE_DIR

# Env variables as arguments for ann-benchmarks run
export MARIADB_INSTALL_DIR=$MARIADB_INSTALL_DIR
export MARIADB_DB_WORKSPACE=$MARIADB_DB_WORKSPACE
export DO_INIT_MARIADB=$DO_INIT_MARIADB

# Remove previous results if there's any
rm -rf results/$DATASET

echo -e "Starting ann-benchmark...\n"
python3 -u run.py  --algorithm mariadb --dataset $DATASET --local

echo -e "\nAnn-benchmark exporting data...\n"
python3 -u data_export.py --out results/res.csv

echo -e "\nAnn-benchmark plotting...\n"
python3 -u plot.py --dataset $DATASET
# For this version we use the recall rate and QPS provided by the tool for eveluation of the performance.
# Note that QPS nuber could be different on different instance type.
echo -e "\nAnn-benchmark plot done, the last two colunms in above output for 'recall rate' and 'QPS'. ^^^ \n"
echo -e "\n[COMPLETED]\n"

