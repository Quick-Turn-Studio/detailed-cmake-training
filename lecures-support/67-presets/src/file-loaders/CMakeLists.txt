set(LIB_NAME FileOperations)

project(${LIB_NAME})

aux_source_directory(. SRC_FILES)

if(SHARED_LIBRARY)
    add_library(${LIB_NAME} SHARED ${SRC_FILES})
else()
    add_library(${LIB_NAME} STATIC ${SRC_FILES})
endif()

target_include_directories(${LIB_NAME} INTERFACE .)

