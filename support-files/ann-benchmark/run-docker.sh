#!/bin/bash
set -e

SCRIPT_DIR=$(dirname "$(readlink -m "$0")")

display_help() {
  echo "Usage   : $(basename "$0") [-h] --ann-workspace <dir> --source-dir <dir> [--no-rebuild]"
  echo "Example : $(basename "$0") --ann-workspace server/ann-workspace --source-dir server"
  echo
  echo "A small benchmarking script for testing vector ANN search. Execute it during development to build"
  echo "MariaDB source code and run ann-benchmarks with docker."
  echo "All MariaDB built artifacts, ann-benchmarks source code and benchmarking results are under "
  echo "--ann-workspace dir, which supports incremental build, customization of ann-benchmark "
  echo "configuration."
  echo
  echo "This script requires you have docker installed locally and network connectivity to install dependencies."
  echo
  echo "If you have built MariaDB locally and have python 3.10+ on your development env, you can also choose to "
  echo "use `run-local.sh` instead, to build and run the ann-benchmark without docker."
  echo
  echo "Mandatory arguments:"
  echo "  --ann-workspace <dir>      workspace path for running the script and save outputs"
  echo "  --source-dir <dir>         directory path containing the MariaDB server source code"
  echo
  echo "optional arguments:"
  echo "  -h, --help                 display this help and exit"
  echo "  --no-rebuild               no rebuild of MariaDB source code, run ann benchmark against"
  echo "                             previous build artifacts."
  echo
}

while :
do
  case "$1" in
    -h | --help)
      display_help
      exit 0
      ;;
    --source-dir)
      shift
      if [[ $# -gt 0 ]]; then
        MARIADB_SOURCE_DIR=$(readlink -m $1)
      else
        echo -e "Error: Missing value for --source-dir\n" >&2
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
    --no-rebuild)
      NO_REBUILD=true
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

# Verify mandatory argument --source-dir
if [[ -z "$MARIADB_SOURCE_DIR" ]]; then
  echo -e "Error: Missing mandatory argument --source-dir\n" >&2
  display_help
  exit 1
fi

# Verify mandatory argument --ann-workspace
if [[ -z "$WORK_DIR" ]]; then
  echo -e "Error: Missing mandatory argument --ann-workspace\n" >&2
  display_help
  exit 1
fi

# Check if WORK_DIR exists, and create it if it doesn't
if [ ! -d "$WORK_DIR" ]; then
  mkdir -p "$WORK_DIR" || { echo -e "Error: Failed to create directory '$WORK_DIR'.\n"; exit 1; }
fi

IMAGE_NAME="mariadb-ann-benchmark"

# Check if the Docker image exists.
if [[ "$(docker images -q $IMAGE_NAME:latest 2> /dev/null)" == "" ]]; then
  echo "Docker image $SCRIPT_DIR not found. Rebuilding..."
  docker build -t mariadb-ann-benchmark $SCRIPT_DIR
else
  echo "Docker image found."
fi

# Run Ann-benchmark in docker container
if [ "$NO_REBUILD" == true ]; then
  docker run -it --rm --user $(id -u):$(id -g) -v $MARIADB_SOURCE_DIR:/build/server_source -v $WORK_DIR:/build/ann-workspace mariadb-ann-benchmark /build/nobuild-run.sh
else
  docker run -it --rm --user $(id -u):$(id -g) -v $MARIADB_SOURCE_DIR:/build/server_source -v $WORK_DIR:/build/ann-workspace mariadb-ann-benchmark /build/run.sh
fi
