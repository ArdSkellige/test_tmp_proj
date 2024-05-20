#region Tests
enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
#endregion

include(GoogleTest)

add_executable(first ${CMAKE_CURRENT_SOURCE_DIR}/first.cpp)
target_include_directories(first PRIVATE ${PROJECT_SOURCE_DIR}) #or: ${CMAKE_CURRENT_SOURCE_DIR} - #include "../app/funcs.hpp" in first.cpp
target_link_libraries(first PRIVATE 
   GTest::gtest_main
   anim
)

gtest_discover_tests(first)