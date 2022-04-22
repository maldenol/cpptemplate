# **cpptemplate**

cpptemplate is basic repository template for every C++ project.  
It contains many overlapping technologies that allows you to remove what you don't need
instead of editing.

You should run "cmake . && cmake --build ." (or "cmake . && cmake --build . --target dev")
within root directory to build. All the output will be placed at bin/ directory.

Sources and headers are stored in src/ where each target is located in appropriate folder,
includes in include/,
libraries (static and shared) in libs/,
tests in test/
and documentation in docs/.

There are examples of executable, static and shared library in src/ folder.

## Content:
- CMake meta-build system
- g++ and clang compiler flags
  - C++17 standard
  - extended warnings, warnings are errors
  - address, undefined behavior and thread (cannot be used with address) sanitizers
- libraries templates
  - Qt5 and Boost
  - Vulkan and OpenGL
  - GTest and GMock
- code analysis tools:
  - cppcheck
  - clang-tidy
  - clang-format
- Doxygen documentation generator
- .gitignore
- README.md
