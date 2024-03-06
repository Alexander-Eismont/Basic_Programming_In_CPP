# Sources
file(GLOB SRCS "src/*.cpp")
# Headers
file(GLOB_RECURSE HDRS "include/*.h")

cmake_minimum_required(VERSION 3.10)

project(Leaver)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS on)

set(STANDART 20)

set(SOURCES ${SRCS})
set(HEADERS ${HDRS})

add_library(leaver_lib SHARED ${HEADERS} ${SOURCES})
add_executable(Leaver main.cpp)

target_link_libraries(Leaver leaver_lib)