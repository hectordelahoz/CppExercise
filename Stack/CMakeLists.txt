cmake_minimum_required(VERSION 3.10)
project(DataStructure VERSION 0.1)
add_subdirectory(src)
add_executable(app main.cpp)
add_executable(balancedParenthesys balancedParenthesis.cpp)
target_link_libraries(app PRIVATE stack)
target_link_libraries(balancedParenthesys PRIVATE stack)
add_subdirectory(test)
