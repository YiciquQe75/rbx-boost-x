cmake_minimum_required(VERSION 3.16)
project(rbx-boost-x CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(rbxboostx
    src/main.cpp
    src/tweaks.cpp
    src/profiles.cpp
    src/monitor.cpp
)

target_include_directories(rbxboostx PRIVATE include)

if(WIN32)
    target_link_libraries(rbxboostx PRIVATE userenv)
endif()
