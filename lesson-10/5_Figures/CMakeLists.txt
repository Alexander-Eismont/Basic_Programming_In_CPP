cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Figures)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../../bin/)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../../bin/)
set(EXECUTABLE_OUTPUT_PATH ../../bin/)

include_directories(Figure/include)
include_directories(Triangles/include)
include_directories(Quadrangles/include)

add_executable(Figures Figures.cpp)

add_subdirectory(Figure)
add_subdirectory(Quadrangles)
add_subdirectory(Triangles)

target_link_libraries(Figures FigureLib QuadrangleLib TriangleLib)