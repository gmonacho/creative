cmake_minimum_required(VERSION 3.10)
project(Creative)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})

find_package(SFML 2 REQUIRED graphics audio window system)

add_executable(${PROJECT_NAME} src/event/event.cpp
src/shapes/CenteredShape.cpp
src/shapes/RectangleShape.cpp
src/shapes/Shape.cpp
src/entities/Entities.cpp
src/Camera.cpp
src/main.cpp
src/Map.cpp
src/Player.cpp
src/Space.cpp)


if(SFML_FOUND)
  set(LIBRARIES ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
  if (MINGW)
    set(LIBRARIES -lmingw32 ${LIBRARIES})
  endif()
  include_directories(${SFML_INCLUDE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/include/shapes ${CMAKE_CURRENT_SOURCE_DIR}/include/entities)
  target_link_libraries(${PROJECT_NAME} ${LIBRARIES})
endif ()

install(TARGETS ${PROJECT_NAME} DESTINATION bin)