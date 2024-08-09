add_library(MyLibrary STATIC ExampleClass.cpp)

set_target_properties(MyLibrary PROPERTIES
        DEBUG_POSTFIX "-debug"
        OUTPUT_NAME "CustomNameForLibrary"
)

target_include_directories(MyLibrary INTERFACE .)