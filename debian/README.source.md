# README for Debian package maintainers and contributors

This documentation describes how to contribute to the official Debian and Ubuntu
packages of MariaDB. The packaging in Debian repositories is not identical to
the packaging in mariadb.org repositories, but whatever is in Debian
repositories will eventually be upstreamed.


## Git repository structure

This Debian packaging source code in directory `debian/` is maintained on branch
`debian/latest` (naming following DEP-14) as part of a fork of the upstream
repository. This structure is compatible with git-buildpackage and is
preconfigured with `debian/gbp.conf` so the git-buildpackage commands don't need
extra parameters most of the time.

To understand what each git-buildpackage command in this README exactly does,
run them with `--verbose` and read the respective man pages for details.


## Getting the Debian packaging source code

To get the Debian packaging source code and have the upstream remote alongside
it, simply run:

    gbp clone vcs-git:mariadb --add-upstreamvcs

Alternatively, run this to define precisely one upstream branch to be tracked:

    gbp clone vcs-git:mariadb \
      --postclone="git remote add -t 11.4 -f upstreamvcs https://github.com/MariaDB/server.git"

Using the `vcs-git:`prefix will automatically resolve the git repository
location, which for most packages is on salsa.debian.org. To build the package
one needs all three Debian branches (`debian/latest`, `upstream/latest`and
`pristine-tar`). Using `gbp clone` and `gbp pull` ensures all three branches are
automatically fetched.

The command above also automatically adds the upstream repository as an extra
remote, and fetches the latest upstream `11.4` branch commits and tags. The
upstream development branch is not a requirement to build the Debian package,
but is recommended for making collaboration with upstream easy.

The repository structure and use of `gbp pq` makes it easy to cherry-pick
commits between upstream and downstream Debian, ensuring improvements downstream
in Debian and upstream in the original project are shared frictionlessly.


## Updating an existing local git repository

If you have an existing local repository created in this way, you can update it
by simply running:

    gbp pull

The above does not pull the upstreamvcs remote, so additionally run:

    git pull --all --verbose

The recommended tool to inspect what branches and tags you have and what their
state is on various remotes is:

    gitk --all &


## Contributing to the Debian packaging

First clone the Debian packaging repository using git-buildpackage as described
above. Then open https://salsa.debian.org/mariadb-team/mariadb-server and press
"Fork". This is needed for Salsa to understand that your repository has the same
origin. In your fork, note the git SSH address, e.g.
`git@salsa.debian.org:otto/mariadb-server.git`, and add it as new remote (replace
'otto' with your own Salsa username):

    git remote add otto git@salsa.debian.org:otto/mariadb-server.git

Alternatively you can do this fully from the command line with:

    salsa fork debian/mariadb-server --verbose

Do your code changes, commit and push to your repository:

    git checkout -b bugfix/123456-fix-something
    git commit # or `git citool`
    git push --set-upstream otto

If made further modifications, and need to update your submission, run:

    git commit -a --amend # or `git citool --amend`
    git push -fv

Finally open a Merge Request on salsa.debian.org. If your submission is high
enough quality, the maintainer is likely to approve it and include your
improvement in the revision of the Debian package. The link to open an MR will
automatically display on the command-line after each `git push` run.

There is no need to update the `debian/changelog` file in the commit. It will be
done automatically by the maintainer before next upload to Debian. There is also
no need to submit multiple Merge Requests targeting different branches with the
same change. Just submit the change for the `debian/latest` branch, and the
maintainer will cherry-pick it to other branches as needed.

The Debian packaging repository will only accept changes in the `debian/`
subdirectory. Any fix for upstream code should be ideally contributed directly to
upstream and carried in Debian alone only in special cases.


## Adding a patch to the Debian packaging

The Debian packaging consists of the pristine upstream source code combined with
the `debian/` subdirectory where all Debian packaging code resides. As the
upstream source code needs to stay untouched, so any modification of upstream
code must be done as a patch in the `debian/patches/` subdirectory, which is
then applied on upstream source code at build-time.

Instead of manually fiddling with patch files, the recommended way to update
them is using `gbp pq`. Start by switching to the temporary patches-applied
branch by running:

    gbp pq switch --force
    # Make changes, build, test
    git commit --all --amend # or `git citool --amend`

If your terminal prompt shows the git branch, you will see it change from e.g.
`debian/latest` to `patch-queue/debian/latest`. On this branch do whatever
modification you want. You may also use `git cherry-pick -x` to pick upstream
commits, and have their origin automatically annotated.

While still on this branch, build the sources and Debian package and test that
everything works. When done, convert the commit to a correctly formatted
patch file by running:

    gbp pq export --drop --commit
    git commit --amend # or `git citool --amend` to write actual details

If your terminal prompt shows the git branch, you will see it have changed back
to `debian/latest`. The updates you committed in `debian/patches/...` can be
sent as a Merge Request on Salsa to the Debian package. The commit done on the
`patch-queue/debian/latest` can be sent upstream as-is.


## Contributing upstream

This Debian packaging repository and the upstream git repository can happily
co-exist as separate branches in the same git repository. To contribute
upstream, start by opening the upstream project GitHub page, press "Fork" and
add it as yet another git remote to this repository just like in the section
above.

Make git commits, or cherry-pick a commit that is already on a `gbp pq` branch,
push them to your GitHub fork and open a Pull Request on the upstream
repository.


## Download upstream release tarball, and import using both git tag and tarball

To check for new upstream releases run:

    git fetch --verbose upstreamvcs
    # Note latest release tag, e.g. 11.4.5
    # Download upstream release tarball, and merge using both git tag and tarball
    gbp import-orig --uscan
    gbp dch --distribution=UNRELEASED \
      --commit --commit-msg="Update changelog and refresh patches after %(version)s import" \
      -- debian
    # Add 'New upstream version' to changelog if it didn't go there automatically
    # Import latest debian/patches on previous version so it can be rebased on latest
    gbp pq import --force --time-machine=10
    git rebase -i debian/latest
    gbp pq export --drop
    git commit --all --amend # or `git citool --amend` to write actual details
    # Note: remember to manually strip '1:' and '-1' from commit message title as
    # the '%(version)s' output is the Debian version and not upstream version!

If the upstream version is not detected correctly, you can pass to `gbp dch` the
extra parameter `--new-version=11.4.5`.

If rebasing the patch queue causes merge conflicts, run `git mergetool` to
visually resolve them. You can also browse the upstream changes on a particular
file easily with `gitk path/to/file`.

When adding DEP3 metadata fields to patches, put them as the last lines in the
git commit message on the `pq` branch. In the `debian/patches/*`files the
first three lines need to be exactly `From`, `Date` and `Subject`,
just like in `git am` managed patches.

Remember that if you did more than just refreshed patches, you should save those
changes in separate git commits. Remember to build the package, run autopkgtests
and conduct other appropriate testing. For git-buildpackage the basic command is:

      gbp buildpackage

Alternatively you can use Debcraft and run git-buildpackage inside hermetic
containers created by it:

    debcraft validate
    debcraft build
    debcraft test

You can also do manual testing and run `apt install <package>` in a `debcraft
shell` session. Rinse and repeat until the Debian packaging has been properly
updated in response to the changes in the new upstream version.

After testing enough locally, push to your fork and open Merge Request on Salsa
for review (replace 'otto' with your own Salsa username):

    gbp push --verbose otto

Note that git-buildpackage will automatically push all three branches
(`debian/latest`, `upstream/latest` and `pristine-tar`) and upstream tags to
your fork so it can run the CI. However, merging the MR will only merge one
branch (`debian/latest`) so the Debian maintainer will need to push the other
branches to the Debian packaging git repository manually with `git push`. It is
not a problem though, as the upstream import is mechanical for the
`upstream/latest` and `pristine-tar` branches and thus not a topic to be debated
 in a code review. Only the `debian/latest` branch has changes that warrant
 a review and potentially new revisions.


## Uploading a new release

**You need to be a Debian Developer to be able to upload to Debian.**

Before the upload, remember to ensure that the `debian/changelog` is
up-to-date:

    gbp dch --release --commit

Create a source package with your preferred tool. In Debcraft, one would issue:

    debcraft release

Do the final checks and sign and upload with:

    debsign *.changes
    dput ftp-master *.changes

After upload remember to monitor your email for the acknowledgement email from
Debian systems. Once the upload has been accepted, remember to run:

    gbp tag --verbose
    gbp push --verbose


## Building the packages

The easiest way to build this package is in a Ubuntu sid (unstable) container.
Example commands:

    podman run --interactive --network host --tty --rm --shm-size=1G --volume=$PWD:/tmp/build --workdir=/tmp/build debian:sid bash

This will start a session, where you are as the root user in the path
`/tmp/build` inside the container. Here you can `cd` into the source directory,
install dependencies and start the build. Note that when you exit the session,
everything will be lost apart from the files you had inside the mounted volume
in `/tmp/build`.

    cd <source directory>
    mk-build-deps -r -i debian/control -t "apt-get -y -o Debug::pkgProblemResolver=yes --no-install-recommends"
    gbp buildpackage

If the build fails, the easiest way to clean up before a new run is

    git clean -fdx && git reset --hard


### Build options

If you want to skip the mysql-test-run step (which takes a lot of time) set
the following environment variable:

    export DEB_BUILD_OPTIONS="nocheck"

If you want to run the build in parallel on 2 CPUs and have verbose output:

    export DEB_BUILD_OPTIONS="parallel=2 verbose"

The options above can also be combined freely to get desired behavior.


# Quality assurance tips

Ensure most packaging files are formatted correctly:

    wrap-and-sort -vast

Check man pages for syntax errors:

    LC_ALL=en_US.UTF-8 MANROFFSEQ='' MANWIDTH=80 man --warnings -E UTF-8 -l -Tutf8 -Z mariadb.1 >/dev/null

Find spelling errors:

    find * -type f | xargs spellintian


# Debugging tips

## Debug mariadb-test-run failures

If the test suite is failing on Launchpad or some other CI system where you
don't have access to the build artifacts, you can extend the debian/rules file
to print out valuable information with the commands:

    cd $(BUILDDIR)/mysql-test && find var/log/ -ls || true
    cd $(BUILDDIR)/mysql-test && cat var/log/*.err || true
    cd $(BUILDDIR)/mysql-test && tail -n 1000 var/log/*.log || true

The `cd` is required on every line since it is a Makefile and the actual command
needs to run in the correct directory. Also, the `|| true` at the end ensures
the build will complete and not abort if any of those debug steps fail.

## Debugging with gdb

If the `mariadb-test-run` fails on a `mariadbd` crash it should produce a core
dump file, from which a full stack trace can be produced with:

    cd $(BUILDDIR)/mysql-test && gdb --batch --ex 'thr a a bt' var/log/*/mysqld.1/core || true

To attach `gdb` on a running process and get a stack trace run:

    gdb -p $(pgrep -x mariadbd) /usr/sbin/mariadbd
    set height 0
    set logging file /tmp/mysqld.log
    set logging on
    thread apply all backtrace full

The readability of the stack traces depends on if symbols are available on the
system. In Debian and Ubuntu all (C/C++) software is automatically built with
debug symbols, but to save disk space they are distributed in separate packages
(usually with `-dbg` or `-dbgsym` suffix) which users need to install in the
rare case stack traces are needed. See the Debian and Ubuntu documentation on
how to enable the repository that has the debug symbol packages.

* https://wiki.ubuntu.com/Debug%20Symbol%20Packages
* https://wiki.debian.org/HowToGetABacktrace

## Debug build

A debug build can be created using the following build flags:

    -DCMAKE_BUILD_TYPE=Debug \
    -DMYSQL_MAINTAINER_MODE=OFF \

The latter flag ensures a build does not stop on warnings but continues to the
end.

A 'mariadbd' binary from a debug build can be started with argument '--debug' to
be verbose about what is going on in the server. Debug binaries should not be
used in production as they are slower than normal binaries.

Core dumps and stack traces can be produced on any build running with
`--core-file --stack-trace` and *debug builds are not needed to run `gdb`*.

## Debugging a running server

Linux distros come standard with tools like `strace` and `lsof` which can also
be used to inspect what processes are doing (no need for debug build). For
example to see what `mariadbd` is writing to the database files can be viewed
with:

    strace -ffp $(pgrep -x mariadbd) -e pwrite,write,fsync,fdatasync,sync,send,sendto,sendmsg
    lsof -a -p $(pgrep -x mariadbd) | grep "/var/lib/mysql"

## Compare changes between builds

Diffoscope can be used to investigate small changes between recent builds:

    docker run --rm -t -w $(pwd) -v $(pwd):$(pwd) registry.salsa.debian.org/reproducible-builds/diffoscope --html-dir report mariadb-server-1.deb mariadb-server-2.deb
    firefox report/index.html

## Test autopkgtest locally

If Debian CI fails (or Ubuntu CI) one might need to debug the autopkgtests
manually. The easiest way to do it is to start a Docker container that has
access to the packaging source directory via a local mount:

    laptop$ docker run -it -v ${PWD}:/build -w /build debian:sid bash
    container$ apt update && apt install -y autopkgtest
    container$ autopkgtest --no-built-binaries --shell-fail -- null

Edit the files in `debian/tests` in your favorite code editor and re-run the
`autopkgtest -- null` until the tests are passing. When the autopkgtests work
the container can be shut down and the valid `debian/tests` committed in git.

If you want to iterate on a single test, use `--test-name`, e.g.
`autopkgtest --no-built-binaries --test-name=configuration-tracing -- null`.

If you don't want to use the MariaDB binaries from Debian Sid but instead build
them from the source tree to be used in autopkgtest directly, simply omit
`--no-built-binaries` from the `autopkgtest` command.

For more information please read:
* https://manpages.debian.org/unstable/autopkgtest/autopkgtest.1.en.html
* https://salsa.debian.org/ci-team/autopkgtest/-/tree/master/doc

## Debug installation/upgrade

To see what exactly the Debian maintainer scripts run, they can be made verbose with:

    export DEBIAN_SCRIPT_DEBUG=1
    apt install ...

The source files of the Debian maintainer scripts are not the final ones, as the
package building stage may make changes and additions to them. To view a
maintainer script in the final form on an installed system run:

    cat /var/lib/dpkg/info/mariadb-server.postinst

To review the my.cnf status run:

    find /etc/mysql/ -ls
    update-alternatives --display my.cnf

## Debug apt Depends/Conflicts/Breaks

It can be quite frustrating to debug situations where `apt` (or `apt-get`) fails
on an install or upgrade with an error message like:

    The following packages have unmet dependencies:
     mariadb-client : Depends: mariadb-client-10.5 but 1:10.5.12 is to be installed
     mariadb-server : Depends: mariadb-server-10.5 but 1:10.5.12 is to be installed
     mariadb-test : Depends: mariadb-client-10.5 but 1:10.5.12 is to be installed
                    Depends: mariadb-server-10.5 but 1:10.5.12 is to be installed
    E: Unable to correct problems, you have held broken packages.

To make apt show debug information on what it tried to resolve and how it failed
enable debug features by adding a file in `/etc/apt/apt.conf.d/` with:

   Debug::pkgProblemResolver 1;
   Debug::pkgDepCache::AutoInstall 1;
   Debug::pkgDepCache::Marker 1;

>lternatively append options directly to `apt` commands:

    apt dist-upgrade -o Debug::pkgProblemResolver=1

It can be also quite annoying to rebuild the entire package to debug small
changes in the `debian/control` file. To have a much faster change->test->change
cycle one can simply instruct `apt` to use a custom `Packages` file to read the
`control` data.

First ensure `apt` forgets all repositories:

    rm /etc/apt/sources.list
    apt clean
    apt update

Download a Packages file for so it can be edited:

    curl -O http://ftp.debian.org/debian/dists/sid/main/binary-amd64/Packages.xz
    unxz Packages.xz
    cp Packages Packages.orig

Open the file in an editor, scroll down to the MariadB packages and make any
changes you want and then test them:

    nano Packages
    apt install --with-source ./Packages -s mariadb-server -o Debug::pkgDepCache::Marker=1 -o Debug::pkgDepCache::AutoInstall=1 -o Debug::pkgProblemResolver=1

The example uses maximum verbosity but it is naturally not mandatory. When the
solution has been found, compare to the original and transfer the changes into
the actual debian/control in the MariaDB packaging:

    diff -u Packages.orig Packages

## Test install/upgrade with local package repository

Normally the fastest way to test that the built *.deb files install and upgrade
properly is simply to run `apt` directly on them inside a container that has
access to the .deb files via a local mount:

    laptop$ docker run -it -v ${PWD}:/build -w /build debian:sid bash
    container$ apt update && apt install ./*.deb

Some bugs however occur only when apt does various dependency resolving and can
only be tested with an installation from an actual apt repository. The fastest
way to get a directory with deb files served via a local repository is to run:

    apt install apt-utils
    apt-ftparchive packages . > Packages
    apt-ftparchive release . > Release
    echo 'deb [trusted=yes] file:/build/mariadb-bionic ./' >> /etc/apt/sources.list
    apt update
    apt install mariadb-server

The example above assumes that the .deb files are in path `/build`.

## Check Breaks/Replaces

MariaDB is not only a massive package by itself, it also has several parallel
major releases at any given time and also other variants (MySQL, Percona Server)
the packaging might interact with.

The standard Salsa-CI pipeline checks Breaks/Replaces for what is currently in
the Debian repositories, but to check Breaks/Replaces across all known
repositories one needs to run:

    docker run -it -v ${PWD}:/build -w /build debian:sid bash
    apt update
    apt install --yes python3-junit.xml python3-debian apt-file
    curl -O https://salsa.debian.org/salsa-ci-team/pipeline/-/raw/master/images/scripts/check_for_missing_breaks_replaces.py
    chmod +x check_for_missing_breaks_replaces.py
    apt install --no-install-recommends --yes gpg gpg-agent dirmngr ca-certificates curl debian-archive-keyring
    curl -sS https://mariadb.org/mariadb_release_signing_key.asc -o /etc/apt/trusted.gpg.d/mariadb.asc
    gpg --list-keys # Initialize default keyring
    gpg --no-default-keyring --keyring gnupg-ring:/etc/apt/trusted.gpg.d/mariadb.gpg --keyserver hkps://keyserver.ubuntu.com:443 --recv-keys 871920D1991BC93C 3B4FE6ACC0B21F32 CBF8D6FD518E17E1 7638D0442B90D010 8C718D3B5072E1F5 9334A25F8507EFA5 CBCB082A1BB943DB 467B942D3A79BD29 B7B3B788A8D3785C
    chmod 644 /etc/apt/trusted.gpg.d/mariadb.gpg
    cat > /etc/apt/sources.list.d/mariadb.list <<EOF
    deb http://deb.debian.org/debian trixie main
    deb http://deb.debian.org/debian bookworm main
    deb http://deb.debian.org/debian bullseye main
    deb http://deb.debian.org/debian buster main
    deb http://archive.debian.org/debian stretch main
    deb [trusted=yes] http://archive.debian.org/debian jessie main
    deb http://archive.ubuntu.com/ubuntu/ jammy main restricted universe multiverse
    deb http://archive.ubuntu.com/ubuntu/ focal main restricted universe multiverse
    deb http://archive.ubuntu.com/ubuntu/ bionic main restricted universe multiverse
    deb http://archive.ubuntu.com/ubuntu/ xenial main restricted universe multiverse
    deb http://archive.ubuntu.com/ubuntu/ trusty main restricted universe multiverse
    deb https://archive.mariadb.org/mariadb-11.6/repo/debian bookworm main
    deb https://archive.mariadb.org/mariadb-11.5/repo/debian bookworm main
    deb https://archive.mariadb.org/mariadb-11.4/repo/debian bookworm main
    deb https://archive.mariadb.org/mariadb-11.3/repo/debian bookworm main
    deb https://archive.mariadb.org/mariadb-11.2/repo/debian bookworm main
    deb https://archive.mariadb.org/mariadb-11.1/repo/debian bookworm main
    deb https://archive.mariadb.org/mariadb-11.0/repo/debian bookworm main
    deb https://archive.mariadb.org/mariadb-10.11/repo/debian bullseye main
    deb https://archive.mariadb.org/mariadb-10.10/repo/debian bullseye main
    deb https://archive.mariadb.org/mariadb-10.9/repo/debian bullseye main
    deb https://archive.mariadb.org/mariadb-10.8/repo/debian bullseye main
    deb https://archive.mariadb.org/mariadb-10.7/repo/debian bullseye main
    deb https://archive.mariadb.org/mariadb-10.6/repo/debian buster main
    deb https://archive.mariadb.org/mariadb-10.5/repo/debian buster main
    deb https://archive.mariadb.org/mariadb-10.4/repo/debian buster main
    deb https://archive.mariadb.org/mariadb-10.3/repo/debian buster main
    deb https://archive.mariadb.org/mariadb-10.2/repo/debian buster main
    deb https://archive.mariadb.org/mariadb-10.1/repo/debian stretch main
    deb [trusted=yes] https://archive.mariadb.org/mariadb-10.0/repo/debian jessie main
    deb [trusted=yes] https://archive.mariadb.org/mariadb-5.5/repo/debian wheezy main
    deb https://repo.mysql.com/apt/ubuntu/ jammy mysql-8.0
    deb https://repo.mysql.com/apt/ubuntu/ focal mysql-8.0
    deb https://repo.mysql.com/apt/debian/ buster mysql-8.0
    deb https://repo.mysql.com/apt/debian/ buster mysql-5.7
    deb https://repo.mysql.com/apt/debian/ buster mysql-5.6
    deb https://repo.mysql.com/apt/debian/ buster mysql-cluster-8.0
    deb https://repo.mysql.com/apt/debian/ buster mysql-cluster-7.6
    deb https://repo.mysql.com/apt/debian/ buster mysql-cluster-7.5
    deb https://repo.mysql.com/apt/debian/ buster mysql-tools
    deb https://repo.percona.com/apt/ bullseye main
    deb https://repo.percona.com/apt/ buster main
    deb https://repo.percona.com/apt/ stretch main
    deb https://repo.percona.com/apt/ jessie main
    deb https://repo.percona.com/apt/ wheezy main
    EOF
    apt-file update
    ./check_for_missing_breaks_replaces.py --changes-file mariadb_*.changes --debug

## Check reverse dependencies

When making changes to the MariaDB packaging in Debian and Ubuntu, keep in mind
that there are hundreds of packages that depend on MariaDB. Most of them can be
found by running:

    apt rdepends 'default-mysql*' 'default-libmysql*' 'mariadb*' 'libmariadb*'

The separate command/package 'apt-rdepends' can also check for reverse
build-dependencies.

Please be diligent in all changes to not wreak havoc in Debian.
