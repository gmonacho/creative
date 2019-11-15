cmake_minimum_required(VERSION 3.10)
project(Creative)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

# list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/)

# find_package(SDL2 REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME} include/Camera.hpp
include/Map.hpp
include/Player.hpp
src/Camera.cpp
src/main.cpp
src/Map.cpp
src/Player.cpp)

set(LIBRARIES -lsfml-graphics -lsfml-window -lsfml-system)

target_link_libraries(${PROJECT_NAME} ${LIBRARIES})