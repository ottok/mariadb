# Vendored dependencies

## PCRE2 10.44

PCRE2 10.44 was manually fetched from
https://github.com/PCRE2Project/pcre2/releases/download/pcre2-10.44/pcre2-10.44.zip,
which is the same URL the MariaDB build uses when built with
`-DWITH_PCRE=bundled`.

The following files were manually removed:
dpkg-source: error: unwanted binary file: debian/vendor/pcre2-10.44/testdata/grepinputC.bz2
dpkg-source: error: unwanted binary file: debian/vendor/pcre2-10.44/testdata/testbtables
dpkg-source: error: unwanted binary file: debian/vendor/pcre2-10.44/testdata/grepbinary
dpkg-source: error: unwanted binary file: debian/vendor/pcre2-10.44/testdata/grepinputC.gz

Reverting to the vendored version is necessary to restore the behavior of 10.44,
as the latest PCRE2 10.45 introduced a backwards incompatible behavior change.

See https://jira.mariadb.org/browse/MDEV-36078 and
https://bugs.debian.org/cgi-bin/bugreport.cgi?bug=1095286 for details.
