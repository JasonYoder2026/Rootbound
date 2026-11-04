cmake_minimum_required(VERSION 3.24)
include(FetchContent)
project(Rootbound
    VERSION 0.0.1
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/)

FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG 6.2
    GIT_SHALLOW TRUE
)

FetchContent_MakeAvailable(raylib)

add_executable(Rootbound
    src/main.cpp
)


set_target_properties(Rootbound PROPERTIES
    WIN32_EXECUTABLE "$<CONFIG:Release>"
)

target_link_libraries(Rootbound PRIVATE raylib)


if(WIN32 AND MSVC)
    target_link_options(Rootbound PRIVATE
        "$<$<CONFIG:Release>:/SUBSYSTEM:WINDOWS>"
        "$<$<CONFIG:Release>:/ENTRY:mainCRTStartup>"
    )
endif()
