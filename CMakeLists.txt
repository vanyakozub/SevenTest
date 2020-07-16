cmake_minimum_required(VERSION 3.16)
project(7Test)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_PATH "SevenTest/")
include_directories(${SOURCE_PATH})
set(LIB_PATH "SevenTest/")
#здесь прописаны все заголовочные файлы, которые требуются сборки API
set(HEADERS ${LIB_PATH}Library.h ${LIB_PATH}User.h ${LIB_PATH}Role.h
        ${LIB_PATH}Right.h )
#здесь прописаны все .cpp файлы, необходимые для сборки API
set(SOURCES $${LIB_PATH}Library.cpp ${LIB_PATH}User.cpp ${LIB_PATH}Role.cpp
        ${LIB_PATH}Right.cpp)
#сборка динамической библиотеки
add_library(SevenTest SHARED ${HEADERS} ${SOURCES})
target_link_libraries(${PROJECT} SevenTest)
add_executable(7Test main.cpp )