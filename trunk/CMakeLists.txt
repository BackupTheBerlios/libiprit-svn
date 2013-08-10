project(libiprit C CXX)
cmake_minimum_required(VERSION 2.6.0)

set(SOURCES qipblackandwhiteimage.cpp qipgrayscaleimage.cpp binarize.cpp util.cpp)
set(HEADERS qipblackandwhiteimage.h qipgrayscaleimage.h libiprit_global.h binarize.h util.h common.h)
SET(LINK_LIBRARY optimized iprit debug ipritd)
add_definitions(-Wall -g)
find_package(Qt4 REQUIRED)
include(${QT_USE_FILE})
include_directories(${CMAKE_BINARY_DIR})
add_definitions( -DIPRIT_MULTITHREADING ) # Use multithreading
add_library(iprit SHARED ${SOURCES} ${HEADERS})
target_link_libraries(iprit ${QT_LIBRARIES})
