enable_testing()
find_package(GTest REQUIRED)
add_executable(numbertest test.cpp)
target_link_libraries(numbertest PRIVATE numbers GTest::GTest GTest::Main)
