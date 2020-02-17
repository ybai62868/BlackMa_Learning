cmake_minimum_required(VERSION 3.0)
project(helloworld)

include_directories(./ ./hello ./world)

add_subdirectory(hello)
add_subdirectory(world)

add_executable(helloworld main.cpp)
target_link_libraries(helloworld hello world)