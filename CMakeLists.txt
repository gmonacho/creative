cmake_minimum_required(VERSION 3.10)
project(Creative)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

# list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/)

# find_package(SDL2 REQUIRED)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})

find_package(SFML 2 REQUIRED graphics audio window system)

add_executable(${PROJECT_NAME} src/event/event_loop.cpp
src/shapes/CenteredShape.cpp
src/shapes/RectangleShape.cpp
src/shapes/Shape.cpp
src/Camera.cpp
src/main.cpp
src/Map.cpp
src/Player.cpp
src/Space.cpp)

if(SFML_FOUND)
  include_directories(${SFML_INCLUDE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/include/shapes)
  target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
endif ()
