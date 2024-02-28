FROM ubuntu:22.04

WORKDIR /build

# Install dependencies for MariaDB build
RUN apt-get update
RUN apt-get install -yq --no-install-recommends libmariadb-dev devscripts equivs ccache ninja-build curl
RUN curl -LO https://github.com/MariaDB/server/raw/HEAD/debian/control
RUN mk-build-deps -r -i control -t 'apt-get -y -o Debug::pkgProblemResolver=yes --no-install-recommends'

# Install the required python lib for ann-benchmarks in advance. 
# We do NOT install the whole ann-benchmarks in docker but instead keep it in mounted volume to allow local customization to benchmark configuration.
RUN apt-get install -yq python3-numpy python3-scipy python3-pip build-essential git
# Ann-benchmarks requires python 3.10, but higher version should also work
RUN python3 -c 'import sys; exit(sys.version_info < (3,10))'
RUN curl -LO https://github.com/HugoWenTD/ann-benchmarks/raw/mariadb/requirements.txt
RUN pip3 install -r requirements.txt
RUN pip3 install mariadb

# Prepare scripts and variables
ENV MARIADB_SOURCE_PATH=/build/server_source
ENV ANN_WORKSPACE=/build/ann-workspace
ENV MARIADB_BUILD_PATH=/build/ann-workspace/server_build
ENV MARIADB_INSTALL_PATH=/build/server_install

# Prepare a simple script for MariaDB install + benchmark
WORKDIR /build
RUN echo '#!/bin/bash' > nobuild-run.sh
RUN echo 'cmake --install $MARIADB_BUILD_PATH --prefix $MARIADB_INSTALL_PATH > /dev/null 2>&1' >> nobuild-run.sh
RUN echo '$MARIADB_SOURCE_PATH/support-files/ann-benchmark/run-local.sh --ann-workspace $ANN_WORKSPACE --installed-dir $MARIADB_INSTALL_PATH' >> nobuild-run.sh
RUN chmod +x nobuild-run.sh

# Prepare a simple script for MariaDB build + install + benchmark
WORKDIR /build
RUN echo '#!/bin/bash' > run.sh
RUN echo '$MARIADB_SOURCE_PATH/support-files/ann-benchmark/server-vector-build.sh --source-dir $MARIADB_SOURCE_PATH --build-dir $MARIADB_BUILD_PATH ' >> run.sh
RUN echo '/build//nobuild-run.sh' >> run.sh
RUN chmod +x run.sh

# Make sure the user always has permission to update the built and installed dir
RUN chmod 777 /build
RUN mkdir /build/server_install && chmod 777 /build/server_install

WORKDIR /build
