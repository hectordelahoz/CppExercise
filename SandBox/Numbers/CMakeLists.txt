add_library(numbers SHARED intclass.cpp intclass.hpp)
target_include_directories(numbers PUBLIC '${CMAKE_CURRENT_SOURCE_DIR}')
