cmake_minimum_required(VERSION 3.5)

project(lab01)

set(CAMKE_CXX_STANDARD 17)

file(GLOB  SOURCES RELATIVE $(CMAKE_SOURCE_DIR) "src/*.cpp")

add_executable(hello $(SOURCES))
