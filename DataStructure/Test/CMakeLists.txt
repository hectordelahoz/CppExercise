enable_testing()
find_package(GTest REQUIRED)
add_executable(linkedlisttest test.cpp)
target_link_libraries(linkedlisttest PRIVATE linkedlist GTest::GTest GTest::Main)
