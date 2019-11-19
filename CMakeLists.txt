cmake_minimum_required(VERSION 3.10)
project(Creative)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

# list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/)

# find_package(SDL2 REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/include/shapes)

add_executable(${PROJECT_NAME} src/event/event_loop.cpp
src/shapes/CenteredShape.cpp
src/shapes/RectangleShape.cpp
src/shapes/Shape.cpp
src/Camera.cpp
src/main.cpp
src/Map.cpp
src/Player.cpp
src/Space.cpp)

set(LIBRARIES -lsfml-graphics -lsfml-window -lsfml-system)

target_link_libraries(${PROJECT_NAME} ${LIBRARIES})