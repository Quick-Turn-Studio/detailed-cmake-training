cmake_minimum_required(VERSION 3.28)
project(FunctionsTask)

function(CreateApplication APP_NAME LOG SOURCES)
    if (LOG)
        message("Creating application: ${APP_NAME} from files:")
    endif ()
    add_library(${APP_NAME} ${LIB_TYPE} ${SOURCES})
endfunction()

set(SRC_FILES main.cpp Class.cpp OtherClass.cpp)

CreateLibrary(MyLib FALSE ${SRC_FILES})