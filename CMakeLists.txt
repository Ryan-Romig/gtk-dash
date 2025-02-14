cmake_minimum_required(VERSION 3.10)
#project name is also the name of the executable
project(gtk-demo)

set(CMAKE_CXX_STANDARD 17)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)

#include gtkmm c++ library
include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})
#include gtk3 c library
include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})
add_definitions(${GTK3_CFLAGS_OTHER})

#set the executable and entry point file
# Assuming your main.cpp file is in the src directory
add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} ${GTK3_LIBRARIES})
#add subdirectory of src. This is where the CMakeLists.txt file for the src directory is located
#add nested add_subdirectory in CMakeLists.txt for each subdirectory in src 
add_subdirectory(src)

# must add the cpp files as libraries. bypass by using only a header file
target_link_libraries(${PROJECT_NAME} commander)
target_link_libraries(${PROJECT_NAME} main-activity)
target_link_libraries(${PROJECT_NAME} spotify-activity)
# target_link_libraries(${PROJECT_NAME} activity)

#link GTKMM libraries
target_link_libraries(${PROJECT_NAME} ${GTKMM_LIBRARIES})