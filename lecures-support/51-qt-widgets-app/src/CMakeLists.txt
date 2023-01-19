find_package(Qt5 COMPONENTS Widgets Core REQUIRED)

set(APP_NAME QtWindowApplication)

aux_source_directory(. SRC_FILES)

# reference: https://doc.qt.io/qt-5/cmake-command-reference.html#qt5-core
qt_add_resources(RESOURCE_FILES resources.qrc)
# qt_add_big_resources(RESOURCE_FILES resources.qrc) # for big resources

add_executable(${APP_NAME} ${SRC_FILES} ${RESOURCE_FILES})

set_target_properties(${APP_NAME} PROPERTIES
        INCLUDE_CURRENT_DIR ON
        AUTOMOC ON
        AUTOUIC OFF
        AUTORCC ON
        )

target_link_libraries(${APP_NAME} PRIVATE Qt::Widgets)

if (CMAKE_SYSTEM_NAME MATCHES Windows)
    find_package(WinDeployQt REQUIRED)

    set(WINDEPLOY_DIR ${CMAKE_CURRENT_BINARY_DIR}/windeployqt)
    add_custom_command(TARGET ${APP_NAME}
            POST_BUILD
            COMMENT "Running Qt Win Deploy tool"
            COMMAND ${CMAKE_COMMAND} -E remove_directory ${WINDEPLOY_DIR}
            COMMAND Qt5::WinDeploy --dir ${WINDEPLOY_DIR} $<TARGET_FILE:${APP_NAME}>
            COMMAND ${CMAKE_COMMAND} -E copy_directory ${WINDEPLOY_DIR}/ ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
endif()