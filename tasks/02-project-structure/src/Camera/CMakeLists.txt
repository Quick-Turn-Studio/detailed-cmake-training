set(LIB_NAME Camera)

aux_source_directory(. SRC_FILES)
add_library(${LIB_NAME} STATIC ${SRC_FILES})
add_library(namespace::${LIB_NAME} ALIAS ${LIB_NAME})
target_link_libraries(${LIB_NAME} PRIVATE nlohmann_json::nlohmann_json)

target_include_directories(${LIB_NAME} INTERFACE .)