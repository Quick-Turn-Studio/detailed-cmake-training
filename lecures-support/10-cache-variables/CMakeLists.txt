cmake_minimum_required(VERSION 3.28)

project(CacheVariables)

message("PR_BUILD_TESTS value is: $CACHE{PR_BUILD_TESTS}")

set(PR_BUILD_TESTS ON CACHE BOOL "Comment that GUI tool display")

message("PR_BUILD_TESTS value is: $CACHE{PR_BUILD_TESTS}")

if ($CACHE{PR_BUILD_TESTS})
    message("We build tests")
else()
    message("We skip all tests")
endif()


