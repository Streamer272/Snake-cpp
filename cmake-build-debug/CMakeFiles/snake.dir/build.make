# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/daniel/CLion/clion-2020.3.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/daniel/CLion/clion-2020.3.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/daniel/CLionProjects/snake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/daniel/CLionProjects/snake/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/snake.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/snake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/snake.dir/flags.make

CMakeFiles/snake.dir/main.cpp.o: CMakeFiles/snake.dir/flags.make
CMakeFiles/snake.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/daniel/CLionProjects/snake/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/snake.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/snake.dir/main.cpp.o -c /home/daniel/CLionProjects/snake/main.cpp

CMakeFiles/snake.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snake.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/daniel/CLionProjects/snake/main.cpp > CMakeFiles/snake.dir/main.cpp.i

CMakeFiles/snake.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snake.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/daniel/CLionProjects/snake/main.cpp -o CMakeFiles/snake.dir/main.cpp.s

CMakeFiles/snake.dir/FieldBase.cpp.o: CMakeFiles/snake.dir/flags.make
CMakeFiles/snake.dir/FieldBase.cpp.o: ../FieldBase.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/daniel/CLionProjects/snake/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/snake.dir/FieldBase.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/snake.dir/FieldBase.cpp.o -c /home/daniel/CLionProjects/snake/FieldBase.cpp

CMakeFiles/snake.dir/FieldBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snake.dir/FieldBase.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/daniel/CLionProjects/snake/FieldBase.cpp > CMakeFiles/snake.dir/FieldBase.cpp.i

CMakeFiles/snake.dir/FieldBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snake.dir/FieldBase.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/daniel/CLionProjects/snake/FieldBase.cpp -o CMakeFiles/snake.dir/FieldBase.cpp.s

# Object files for target snake
snake_OBJECTS = \
"CMakeFiles/snake.dir/main.cpp.o" \
"CMakeFiles/snake.dir/FieldBase.cpp.o"

# External object files for target snake
snake_EXTERNAL_OBJECTS =

snake: CMakeFiles/snake.dir/main.cpp.o
snake: CMakeFiles/snake.dir/FieldBase.cpp.o
snake: CMakeFiles/snake.dir/build.make
snake: CMakeFiles/snake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/daniel/CLionProjects/snake/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable snake"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/snake.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/snake.dir/build: snake

.PHONY : CMakeFiles/snake.dir/build

CMakeFiles/snake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/snake.dir/cmake_clean.cmake
.PHONY : CMakeFiles/snake.dir/clean

CMakeFiles/snake.dir/depend:
	cd /home/daniel/CLionProjects/snake/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/daniel/CLionProjects/snake /home/daniel/CLionProjects/snake /home/daniel/CLionProjects/snake/cmake-build-debug /home/daniel/CLionProjects/snake/cmake-build-debug /home/daniel/CLionProjects/snake/cmake-build-debug/CMakeFiles/snake.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/snake.dir/depend

