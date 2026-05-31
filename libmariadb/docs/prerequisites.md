## Prerequisites for building Connector/C from Source

### Windows
* Visual Studio 2013 or newer (older versions of Visual Studio may also work but have not been tested).
* cmake 2.8.12 or newer, available from the [Cmake Website](http://www.cmake.org)
* for Connector/C 2.x: OpenSSL libraries and include files.
* for Connector/C 3.0 remote-io plugin: [Curl libraries and include files](https://curl.haxx.se)

### Linux / Mac OS X
The following is a list of tools that are required for building MariaDB Connector/C on Linux and Mac OS X. Most, if not all, of these will exist as packages in your distribution's package repositories, so check there first.
* gcc 3.4.6 or newer C compiler
* TLS/SSL libraries and include files
** OpenSSL 1.0.1 or newer or
** GnuTLS 3.4 or newer
* cmake 2.8.12 or newer, available from the [[http://www.cmake.org|CMake website]].
* for Connector/C 3.0 remote-io plugin:  [Curl libraries and include files](https://curl.haxx.se)
* For GSSAPI plugin: [Kerberos V5 libraries](http://web.mit.edu/kerberos/dist)
* For generating man pages (requires Connector/C 3.3.6 or later): [Pandoc](https://pandoc.org)

On Linux you can get those programs with your package manager. On Mac OS X you will need Xcode and to install the remaining programs with [Fink](http://www.finkproject.org) or [MacPorts](http://www.macports.org/).