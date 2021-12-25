# **cpptemplate**

cpptemplate is basic repository template for every C++ project.
It contains many overlapping technologies that allows you to remove what you don't need
instead of editing.

You should run "cmake .. && cmake --build ." (or "cmake .. && cmake --build . --target dev")
within build/ directory to build.
Sources are stored in src/ where each target is in appropriate folder, headers in include/,
libraries in libs/, tests in test/ and documentation in docs/.

## Content:
- CMake meta-build system
- g++ and clang compiler flags
  - C++17 standard
  - extended warnings, warnings are errors
  - adress, leak, thread, memory and undefined behavior sanitizers
- libraries templates
  - Qt5 and Boost
  - Vulkan and OpenGL
  - GTest and GMock
- code analysis tools:
  - cppcheck
  - clang-tidy
  - clang-format
- Doxygen documentation generator
- .gitignore and README.md
