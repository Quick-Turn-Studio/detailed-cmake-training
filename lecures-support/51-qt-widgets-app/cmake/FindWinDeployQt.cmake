if (CMAKE_SYSTEM_NAME MATCHES "Windows")
    if (NOT TARGET Qt5:WinDeploy)
        find_package(Qt5 COMPONENTS Core REQUIRED)

        get_target_property(QT5_QMAKE_LOCATION Qt5::qmake IMPORTED_LOCATION)

        execute_process(COMMAND "${QT5_QMAKE_LOCATION}" -query QT_INSTALL_PREFIX
                RESULT_VARIABLE return_code
                OUTPUT_VARIABLE QT5_INSTALL_PREFIX
                OUTPUT_STRIP_TRAILING_WHITESPACE)

        get_filename_component(QMAKE_LOCATION ${QT5_QMAKE_LOCATION} DIRECTORY)

        find_program(WIN_DEPLOY windeployqt.exe
                PATHS ${QT5_INSTALL_PREFIX}/bin  # standard Qt installation from Maintenance Tool
                ${QMAKE_LOCATION}          # location from vcpkg qt5
                )

        if (WIN_DEPLOY)
            message(STATUS "Found Qt5::WinDeploy: ${WIN_DEPLOY}")
            add_executable(Qt5::WinDeploy IMPORTED)
            set_target_properties(Qt5::WinDeploy PROPERTIES IMPORTED_LOCATION ${WIN_DEPLOY})
        elseif (WinDeploy_FIND_REQUIRED)
            message(FATAL_ERROR "Qt5::WinDeploy not found")
        else ()
            message(STATUS "Qt5::WinDeploy not found")
        endif ()
    endif ()
else ()
    message("Not supported platform ${CMAKE_SYSTEM_NAME} for Qt5::WinDeploy")
endif ()
