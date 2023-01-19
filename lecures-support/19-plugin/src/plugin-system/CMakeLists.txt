add_subdirectory(plugin-system-interface)

if (CMAKE_SYSTEM_NAME STREQUAL "Linux")
    add_subdirectory(linux-plugin-system)
else()
endif()

add_subdirectory(plugin-loader-factory)

add_subdirectory(plugin-validator)