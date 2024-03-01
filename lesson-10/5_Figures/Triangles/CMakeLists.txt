# Sources
file(GLOB SRCS "src/*.cpp")
# Headers
file(GLOB_RECURSE HDRS "include/*.h")

cmake_minimum_required(VERSION 3.10)

project(TriangleLib)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../lib/)
#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../lib/)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin/)

set(SOURCES ${SRCS})
set(HEADERS ${HDRS})

add_library(TriangleLib SHARED ${HEADERS} ${SOURCES})
