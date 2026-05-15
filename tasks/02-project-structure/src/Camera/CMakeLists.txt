set(LIB_NAME Camera)

aux_source_directory(. SRC_FILES)
add_library(${LIB_NAME} STATIC ${SRC_FILES})
add_library(namespace::${LIB_NAME} ALIAS ${LIB_NAME})
target_link_libraries(${LIB_NAME} PRIVATE nlohmann_json::nlohmann_json)

target_include_directories(${LIB_NAME} INTERFACE .)

set_target_properties(${LIB_NAME} PROPERTIES
        DEBUG_POSTFIX "-debug"
        CMAKE_CXX_STANDARD 20
)

get_target_property(PROPERTY_VALUE ${LIB_NAME} CMAKE_CXX_STANDARD)

if($CACHE{BUILD_TEST} STREQUAL ON
        OR $CACHE{BUILD_TEST} STREQUAL YES
        OR $CACHE{BUILD_TEST} STREQUAL TRUE
        OR $CACHE{BUILD_TEST} STREQUAL Y
)
    add_subdirectory(test)
endif ()