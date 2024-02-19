cmake_minimum_required(VERSION 3.14)

project(1_Comparisons_In_Frations LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(1_Comparisons_In_Frations
  main.cpp
)
target_link_libraries(1_Comparisons_In_Frations Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS 1_Comparisons_In_Frations
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
