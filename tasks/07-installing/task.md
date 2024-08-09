# Task 8

Use result from Task 5 (still in tasks/02-project-structure)

1. Add custom target that will run installation
2. Remember about setting CMAKE_INSTALL_PREFIX, eg. for "./install-dir"
3. Change File Parser part as shared library and make application runnable from installation directory
4. Bonus: deal with RPATH, so try to run from installation directory

You can use
* install(TARGET ...)
* install(FILES ...)
* PUBLIC_HEADERS property

Documentation:
* [install()](https://cmake.org/cmake/help/latest/command/install.html)