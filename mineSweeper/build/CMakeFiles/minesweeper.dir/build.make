# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/akshay/projects/Skiena-Programming-Challenges/mineSweeper

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/akshay/projects/Skiena-Programming-Challenges/mineSweeper/build

# Include any dependencies generated for this target.
include CMakeFiles/minesweeper.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/minesweeper.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/minesweeper.dir/flags.make

CMakeFiles/minesweeper.dir/main.o: CMakeFiles/minesweeper.dir/flags.make
CMakeFiles/minesweeper.dir/main.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/akshay/projects/Skiena-Programming-Challenges/mineSweeper/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/minesweeper.dir/main.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/minesweeper.dir/main.o -c /home/akshay/projects/Skiena-Programming-Challenges/mineSweeper/main.cpp

CMakeFiles/minesweeper.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/minesweeper.dir/main.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/akshay/projects/Skiena-Programming-Challenges/mineSweeper/main.cpp > CMakeFiles/minesweeper.dir/main.i

CMakeFiles/minesweeper.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/minesweeper.dir/main.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/akshay/projects/Skiena-Programming-Challenges/mineSweeper/main.cpp -o CMakeFiles/minesweeper.dir/main.s

CMakeFiles/minesweeper.dir/main.o.requires:
.PHONY : CMakeFiles/minesweeper.dir/main.o.requires

CMakeFiles/minesweeper.dir/main.o.provides: CMakeFiles/minesweeper.dir/main.o.requires
	$(MAKE) -f CMakeFiles/minesweeper.dir/build.make CMakeFiles/minesweeper.dir/main.o.provides.build
.PHONY : CMakeFiles/minesweeper.dir/main.o.provides

CMakeFiles/minesweeper.dir/main.o.provides.build: CMakeFiles/minesweeper.dir/main.o

# Object files for target minesweeper
minesweeper_OBJECTS = \
"CMakeFiles/minesweeper.dir/main.o"

# External object files for target minesweeper
minesweeper_EXTERNAL_OBJECTS =

minesweeper: CMakeFiles/minesweeper.dir/main.o
minesweeper: CMakeFiles/minesweeper.dir/build.make
minesweeper: CMakeFiles/minesweeper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable minesweeper"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/minesweeper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/minesweeper.dir/build: minesweeper
.PHONY : CMakeFiles/minesweeper.dir/build

CMakeFiles/minesweeper.dir/requires: CMakeFiles/minesweeper.dir/main.o.requires
.PHONY : CMakeFiles/minesweeper.dir/requires

CMakeFiles/minesweeper.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/minesweeper.dir/cmake_clean.cmake
.PHONY : CMakeFiles/minesweeper.dir/clean

CMakeFiles/minesweeper.dir/depend:
	cd /home/akshay/projects/Skiena-Programming-Challenges/mineSweeper/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/akshay/projects/Skiena-Programming-Challenges/mineSweeper /home/akshay/projects/Skiena-Programming-Challenges/mineSweeper /home/akshay/projects/Skiena-Programming-Challenges/mineSweeper/build /home/akshay/projects/Skiena-Programming-Challenges/mineSweeper/build /home/akshay/projects/Skiena-Programming-Challenges/mineSweeper/build/CMakeFiles/minesweeper.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/minesweeper.dir/depend
