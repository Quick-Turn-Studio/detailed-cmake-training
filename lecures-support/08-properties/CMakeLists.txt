cmake_minimum_required(VERSION 3.28)
project(Properties)

set(CMAKE_DEBUG_POSTFIX "-d")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")

add_subdirectory(app)
add_subdirectory(lib)
