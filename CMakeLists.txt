cmake_minimum_required(VERSION 3.10)

project(myProject) 

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(myProject main.cpp)

find_package(flashlight CONFIG REQUIRED)
target_link_libraries(myProject PRIVATE flashlight::flashlight)