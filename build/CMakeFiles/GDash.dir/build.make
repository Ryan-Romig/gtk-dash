# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/server/projects/gtk-dash

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/server/projects/gtk-dash/build

# Include any dependencies generated for this target.
include CMakeFiles/GDash.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/GDash.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/GDash.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GDash.dir/flags.make

CMakeFiles/GDash.dir/src/main.cpp.o: CMakeFiles/GDash.dir/flags.make
CMakeFiles/GDash.dir/src/main.cpp.o: /mnt/server/projects/gtk-dash/src/main.cpp
CMakeFiles/GDash.dir/src/main.cpp.o: CMakeFiles/GDash.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/server/projects/gtk-dash/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GDash.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GDash.dir/src/main.cpp.o -MF CMakeFiles/GDash.dir/src/main.cpp.o.d -o CMakeFiles/GDash.dir/src/main.cpp.o -c /mnt/server/projects/gtk-dash/src/main.cpp

CMakeFiles/GDash.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GDash.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/server/projects/gtk-dash/src/main.cpp > CMakeFiles/GDash.dir/src/main.cpp.i

CMakeFiles/GDash.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GDash.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/server/projects/gtk-dash/src/main.cpp -o CMakeFiles/GDash.dir/src/main.cpp.s

# Object files for target GDash
GDash_OBJECTS = \
"CMakeFiles/GDash.dir/src/main.cpp.o"

# External object files for target GDash
GDash_EXTERNAL_OBJECTS =

GDash: CMakeFiles/GDash.dir/src/main.cpp.o
GDash: CMakeFiles/GDash.dir/build.make
GDash: src/features/commander/libcommander.a
GDash: CMakeFiles/GDash.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/server/projects/gtk-dash/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GDash"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GDash.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GDash.dir/build: GDash
.PHONY : CMakeFiles/GDash.dir/build

CMakeFiles/GDash.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GDash.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GDash.dir/clean

CMakeFiles/GDash.dir/depend:
	cd /mnt/server/projects/gtk-dash/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/server/projects/gtk-dash /mnt/server/projects/gtk-dash /mnt/server/projects/gtk-dash/build /mnt/server/projects/gtk-dash/build /mnt/server/projects/gtk-dash/build/CMakeFiles/GDash.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GDash.dir/depend

