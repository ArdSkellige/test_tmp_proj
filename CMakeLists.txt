cmake_minimum_required(VERSION 3.23.0)

set(CMAKE_C_STANDARD       11)
set(CMAKE_CXX_STANDARD     20)

project(first_cmake_prog VERSION 1.0.0 LANGUAGES C CXX)

include(CTest)
include(cmake/common.cmake)

#set(SOURSE_DIR ${APP_DIR}/animal.cpp)
#add_library(anim SHARED ${SOURSE_DIR})
file(GLOB LIB_SOURCE ${APP_DIR}/*.cpp)
add_library(anim STATIC ${LIB_SOURCE})

#file(GLOB TEST_PROJ_SOURCES ${APP_DIR}/*.cpp)
#add_executable(main ${TEST_PROJ_SOURCES}) # создаю исполняемый файл - таргет
add_executable(main ${CMAKE_SOURCE_DIR}/targets/main.cpp)

target_link_libraries(main PRIVATE anim)

add_subdirectory(tests)