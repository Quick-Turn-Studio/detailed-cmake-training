add_executable(MyApplication main.cpp)

set_target_properties(MyApplication PROPERTIES
        OUTPUT_NAME_DEBUG "CustomNamedApplication"
        OUTPUT_NAME_MyCustomConfig "VeryCustomNamedApplication"
)

set_target_properties(MyApplication PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "bin"
)

target_link_libraries(MyApplication PUBLIC MyLibrary)
