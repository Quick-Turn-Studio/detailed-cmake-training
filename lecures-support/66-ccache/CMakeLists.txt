cmake_minimum_required(VERSION 3.28)
project(CCache LANGUAGES CXX)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(UseCCache)

add_subdirectory(src)