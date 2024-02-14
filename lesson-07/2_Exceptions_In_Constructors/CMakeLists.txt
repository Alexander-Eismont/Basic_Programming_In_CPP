cmake_minimum_required(VERSION 3.14)

project(2_Exceptions_In_Constructors LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(2_Exceptions_In_Constructors
  main.cpp
  equilateralTriangle.h equilateralTriangle.cpp
  figure.h figure.cpp
  isoscelesTriangle.h isoscelesTriangle.cpp
  parallelogram.h parallelogram.cpp
  quadrangle.h quadrangle.cpp
  rectangle.h rectangle.cpp
  rhombus.h rhombus.cpp
  rightTriangle.h rightTriangle.cpp
  square.h square.cpp
  triangle.h triangle.cpp
  geometryException.h
  createShapes.h createShapes.cpp
)
target_link_libraries(2_Exceptions_In_Constructors Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS 2_Exceptions_In_Constructors
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
