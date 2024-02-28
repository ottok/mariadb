#!/bin/bash
set -e

# This script is designed to run `cmake` with specific flags to build vector
# development branch and execute `cmake --build`.
#
# It runs in ANN benchmarking Docker containter and Gitlab CI job.
# But you can also execute it manually if you have all dependencies installed.
#

display_help() {
  echo "Usage   : $(basename "$0") [-h] --source-dir <dir> --build-dir <dir>"
  echo "Example : $(basename "$0") --source-dir server --build-dir server/build"
  echo
  echo "Scripts for build the server for vector support."
  echo "Some plugins were skipped to make the build pass."
  echo
  echo "Mandatory arguments:"
  echo "  --source-dir <dir>      directory path containing the MariaDB server source code"
  echo "  --build-dir <dir>       directory path to run build"
  echo
  echo "optional arguments:"
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
    --build-dir)
      shift
      if [[ $# -gt 0 ]]; then
        MARIADB_BUILD_DIR=$(readlink -m $1)
      else
        echo -e "Error: Missing value for --build-dir\n" >&2
        exit 1
      fi
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

# Verify mandatory argument --build-dir
if [[ -z "$MARIADB_BUILD_DIR" ]]; then
  echo -e "Error: Missing mandatory argument --build-dir\n" >&2
  display_help
  exit 1
fi

# Using CCache to improve incremental build
CCACHE_PATH=${MARIADB_BUILD_DIR}/ccache
mkdir -p $CCACHE_PATH
export CCACHE_DIR=$CCACHE_PATH

cd $MARIADB_BUILD_DIR

# Skip building some of the engine/plugins as not necessary or does not build with current vector branch
cmake $MARIADB_SOURCE_DIR -G Ninja -DCMAKE_CXX_COMPILER_LAUNCHER=ccache -DCMAKE_C_COMPILER_LAUNCHER=ccache -DWITH_SSL=system -DPLUGIN_COLUMNSTORE=NO -DPLUGIN_ROCKSDB=NO -DPLUGIN_S3=NO -DPLUGIN_MROONGA=NO -DPLUGIN_CONNECT=NO -DPLUGIN_MROONGA=NO -DPLUGIN_TOKUDB=NO -DPLUGIN_PERFSCHEMA=NO -DWITH_WSREP=OFF -DPLUGIN_SPIDER=NO

cmake --build .
