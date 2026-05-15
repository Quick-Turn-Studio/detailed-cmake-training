set(TARGET_NAME FileUtils)
aux_source_directory(. SOURCE_FILES)

add_library(${TARGET_NAME} STATIC ${SOURCE_FILES})
add_library(namespace::${TARGET_NAME} ALIAS ${TARGET_NAME})

target_include_directories(${TARGET_NAME} INTERFACE .)