#!/bin/sh

set -x
set -e

# Debug what repositories are available to begin with
grep -r "^deb " /etc/apt/sources.*

# Enable the same repositories that were available at build time in
# registry.salsa.debian.org/salsa-ci-team/pipeline/base:bullseye
. /etc/os-release
cat << EOF > /etc/apt/sources.list.d/base-$VERSION_CODENAME-repos.list
deb http://deb.debian.org/debian $VERSION_CODENAME main
deb http://deb.debian.org/debian-security $VERSION_CODENAME-security main
deb http://deb.debian.org/debian $VERSION_CODENAME-updates main
EOF

apt-get update

# Ref
# bullseye piuparts test runner environment is missing the bullseye-updates apt repository: https://salsa.debian.org/salsa-ci-team/pipeline/-/issues/292
# piuparts: doesn't install dependencies from experimental or -backports: https://salsa.debian.org/salsa-ci-team/pipeline/-/issues/58
# autopkgtest: doesn't install dependencies from experimental or backports: https://salsa.debian.org/salsa-ci-team/pipeline/-/issues/85
