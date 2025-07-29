cmake_minimum_required(VERSION 3.31)

set(SOURCE_FILES
        Vector3.cpp
)

set(HEADER_FILE )

add_library(VectorUtilities STATIC ${SOURCE_FILES} )