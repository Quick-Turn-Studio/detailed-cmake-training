set(APP_NAME Application)

aux_source_directory(. APP_FILES)
add_executable(${APP_NAME} ${APP_FILES})
target_link_libraries(${APP_NAME}
                            PRIVATE
                                namespace::ServerProviders
                                namespace::FileUtils
                                namespace::Camera
)