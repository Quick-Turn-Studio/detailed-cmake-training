aux_source_directory(. SRC_FILES)

add_library(ServerProviders STATIC ${SRC_FILES})
add_library(namespace::ServerProviders ALIAS ServerProviders)

target_include_directories(ServerProviders INTERFACE .)
