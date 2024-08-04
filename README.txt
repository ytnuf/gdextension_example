
An example project that uses GDExtension.

This is adapted from the official example code: https://docs.godotengine.org/en/stable/tutorials/scripting/gdextension/gdextension_cpp_example.html
But the project uses CMake instead of Scons.

To build you would need:
- git (as godot-cpp is a git submodule)
- CMake
- A backend build system (e.g. Ninja)
- Compiler toolset (e.g. GCC)

To build run these two commands:
cmake -B build
cmake --build build

If done correctly, you should have a shared library in the build directory.
(Do note that the demo project expects the gdextension library to be in the build/ folder)

Once done, you can run the demo via the project.godot file.
