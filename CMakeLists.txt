cmake_minimum_required(VERSION 3.23.0)

set(CMAKE_C_STANDARD       11)
set(CMAKE_CXX_STANDARD     20)

project(first_cmake_prog VERSION 1.0.0 LANGUAGES C CXX)

include(cmake/common.cmake)

set(SOURSE_DIR ${APP_DIR}/animal.cpp)

add_library(anim SHARED ${SOURSE_DIR})

add_executable(main app/main.cpp) # создаю исполняемый файл - таргет

target_link_libraries(main PRIVATE anim)

message("test")