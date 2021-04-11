cmake_minimum_required(VERSION 3.17)
project(Game)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR}/Players)
include_directories(${PROJECT_SOURCE_DIR})

add_executable(Game main.cpp Player.h Areas.h Players/gamers.h)
#add_executable(Game main.cpp)
#target_sources(Game Areas.h)
