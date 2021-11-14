enable_testing()
find_package(GTest REQUIRED)
add_executable(stackTest test.cpp)
target_link_libraries(stackTest PRIVATE stack GTest::GTest GTest::Main)
