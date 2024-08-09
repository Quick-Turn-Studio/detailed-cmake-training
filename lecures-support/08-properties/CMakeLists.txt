cmake_minimum_required(VERSION 3.22)
project(Properties)

set(CMAKE_DEBUG_POSTFIX "-d")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin")

add_subdirectory(app)
add_subdirectory(lib)