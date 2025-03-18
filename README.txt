
An example project that uses GDExtension.

This is adapted from the official example code: https://docs.godotengine.org/en/stable/tutorials/scripting/gdextension/gdextension_cpp_example.html
But the project uses CMake instead of Scons.

To build you would need:
- git (as godot-cpp is a git submodule)
- CMake
- Python
- A backend build system (e.g. Ninja)
- Compiler toolset (e.g. GCC)

To build run these two commands:
cmake -B build
cmake --build build

If done correctly, you should have a shared library in the build directory.
(Do note that the demo project expects the gdextension library to be in the build/ folder)

Once done, you can run the demo via the project.godot file.


Note that this project is a very minimal example, that doesn't handle many things that would will need in a real project.

For another example project that shows how one can use package manager, cmake presets, cross-compilation, sanitisers, compiler warnings, etc:
https://github.com/ytnuf/gdextension_example_bullet_shower
