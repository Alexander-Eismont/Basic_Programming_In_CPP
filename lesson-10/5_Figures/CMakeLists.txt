cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Figures)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../lib/)
#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../lib/)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin/)

include_directories(Shapes)
include_directories(FigureLib)
include_directories(QuadrangleLib)
include_directories(TriangleLib)

add_executable(Figures Figures.cpp)

add_subdirectory(Shapes)
add_subdirectory(FigureLib)
add_subdirectory(QuadrangleLib)
add_subdirectory(TriangleLib)

target_link_libraries(Figures Shapes FigureLib QuadrangleLib TriangleLib)