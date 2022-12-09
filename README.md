# **cpptemplate**
cpptemplate is a basic repository template for every C/C++ project.

## Content:
- CMake meta-build system preconfigured:
  - Set project structure (in filesystem)
  - Different compilation and linkage flags for different operating systems,
    compilers and build configurations
  - Code analysis tools' configurations: cppcheck, clang-tidy and clang-format
  - ```dev``` target
- Usage examples:
  - Executable, static and shared libraires
  - Preset compilation and linkage flags, C/C++ standards
  - Some libraries are included
- Configuration for Doxygen documentation generator
- .gitignore

## Building
To build the project you should run
```cmake . -DCMAKE_BUILD_TYPE=<BUILD_TYPE> && cmake --build . --target <TARGET> --config <BUILD_TYPE>```
within the project's root directory,
where ```<BUILD_TYPE>``` is either ```Debug``` or ```Release```
and ```<TARGET>``` is the target you are going to build.
All the output will be placed to ```build/```.

Sources and headers of each target are stored in ```src/``` directory
in the folder with the name of the the target.
External includes are stored in ```include/```,
external libraries (static or shared) in ```libs/```,
and documentation in ```docs/``` directory.

There are examples of an executable, a static and a shared libraries
in ```src/``` folder.

## License
cpptemplate is released into public domain.
