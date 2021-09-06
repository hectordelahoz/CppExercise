add_library(linkedlist SHARED linkedlist.cpp linkedlist.hpp)
target_include_directories(linkedlist PUBLIC '${CMAKE_CURRENT_SOURCE_DIR}')
