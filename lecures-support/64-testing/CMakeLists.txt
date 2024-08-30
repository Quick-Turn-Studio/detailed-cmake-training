cmake_minimum_required(VERSION 3.28)
project(StructuredProjectExample LANGUAGES CXX VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

enable_testing()

set(TEST_REPORT_DIRECTORY ${CMAKE_BINARY_DIR}/test-reports)

add_custom_target(RunAllTests
        COMMAND ${CMAKE_COMMAND} --build . --target all
        COMMAND ${CMAKE_COMMAND} -E make_directory ${TEST_REPORT_DIRECTORY}
        COMMAND ${CMAKE_COMMAND} --build . --target test
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

add_subdirectory(external EXCLUDE_FROM_ALL)
add_subdirectory(src)
