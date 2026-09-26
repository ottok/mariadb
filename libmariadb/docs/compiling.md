## Compiling MariaDB Connector/C

After successful configuration, Connector/C can now be compiled.

### Compiling on Windows

If no CMake generator was specified, CMake creates by default build files for Visual Studio.
You can now either build Connector/C inside Visual Studio

`devenv mariadb_connector_c.sln`

or via command line

`cmake --build . --config RelWithDebInfo`

### Compiling on Unix
By default CMake creates build files for GNU make. On some system GNU make is renamed to `gmake`.
You can now build Connector/C with

`shell>make`

or

`cmake --build . --config Release`

