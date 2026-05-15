set(TEST_TARGET Tests)

aux_source_directory(. TEST_FILES)
add_executable(${TEST_TARGET} ${TEST_FILES})

target_link_libraries(${TEST_TARGET} PRIVATE gmock gmock_main)
target_link_libraries(${TEST_TARGET} PRIVATE namespace::Camera)