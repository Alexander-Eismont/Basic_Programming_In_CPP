cmake_minimum_required(VERSION 3.14)

project(2_Class_Hierarchy LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(figure
figure.h figure.cpp
)
set(triangles
    triangle.h triangle.cpp
    equilateralTriangle.h equilateralTriangle.cpp
    isoscelesTriangle.h isoscelesTriangle.cpp
    rightTriangle.h rightTriangle.cpp
)
set(quadrangles
    quadrangle.h quadrangle.cpp
    parallelogram.h parallelogram.cpp
    rectangle.h rectangle.cpp
    rhombus.h rhombus.cpp
    square.h square.cpp
)
set(source_exe main.cpp)

add_library(figure_lib ${figure})
add_library(triangles_lib ${triangles})
add_library(quadrangles_lib ${quadrangles})
add_executable(Class_Hierarchy ${source_exe})

target_link_libraries(Class_Hierarchy figure_lib triangles_lib quadrangles_lib)