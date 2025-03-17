
cmake_minimum_required(VERSION 3.28)

project("gdextension_example")

add_library("gdextension_example" MODULE)
target_sources("gdextension_example" PRIVATE
    "src/gdexample.cpp" "src/gdexample.hpp"
    "src/register_types.cpp" "src/register_types.hpp"
)


add_subdirectory("godot-cpp")

target_link_libraries("gdextension_example" PRIVATE "godot::cpp")


string(TOLOWER "${CMAKE_SYSTEM_NAME}" CMAKE_SYSTEM_NAME_LOWER)
string(TOLOWER "${CMAKE_SYSTEM_PROCESSOR}" CMAKE_SYSTEM_PROCESSOR_LOWER)

set_target_properties("gdextension_example" PROPERTIES OUTPUT_NAME "gdextension_example.${CMAKE_SYSTEM_NAME_LOWER}.${CMAKE_SYSTEM_PROCESSOR_LOWER}")
