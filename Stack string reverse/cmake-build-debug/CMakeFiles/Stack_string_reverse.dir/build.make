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
CMAKE_COMMAND = /snap/clion/145/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/145/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/benacq/Desktop/dev/learn/DSA/cpp/miscellanous/Stack string reverse"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/benacq/Desktop/dev/learn/DSA/cpp/miscellanous/Stack string reverse/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Stack_string_reverse.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Stack_string_reverse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Stack_string_reverse.dir/flags.make

CMakeFiles/Stack_string_reverse.dir/main.cpp.o: CMakeFiles/Stack_string_reverse.dir/flags.make
CMakeFiles/Stack_string_reverse.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/benacq/Desktop/dev/learn/DSA/cpp/miscellanous/Stack string reverse/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Stack_string_reverse.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Stack_string_reverse.dir/main.cpp.o -c "/home/benacq/Desktop/dev/learn/DSA/cpp/miscellanous/Stack string reverse/main.cpp"

CMakeFiles/Stack_string_reverse.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Stack_string_reverse.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/benacq/Desktop/dev/learn/DSA/cpp/miscellanous/Stack string reverse/main.cpp" > CMakeFiles/Stack_string_reverse.dir/main.cpp.i

CMakeFiles/Stack_string_reverse.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Stack_string_reverse.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/benacq/Desktop/dev/learn/DSA/cpp/miscellanous/Stack string reverse/main.cpp" -o CMakeFiles/Stack_string_reverse.dir/main.cpp.s

# Object files for target Stack_string_reverse
Stack_string_reverse_OBJECTS = \
"CMakeFiles/Stack_string_reverse.dir/main.cpp.o"

# External object files for target Stack_string_reverse
Stack_string_reverse_EXTERNAL_OBJECTS =

Stack_string_reverse: CMakeFiles/Stack_string_reverse.dir/main.cpp.o
Stack_string_reverse: CMakeFiles/Stack_string_reverse.dir/build.make
Stack_string_reverse: CMakeFiles/Stack_string_reverse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/benacq/Desktop/dev/learn/DSA/cpp/miscellanous/Stack string reverse/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Stack_string_reverse"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Stack_string_reverse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Stack_string_reverse.dir/build: Stack_string_reverse

.PHONY : CMakeFiles/Stack_string_reverse.dir/build

CMakeFiles/Stack_string_reverse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Stack_string_reverse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Stack_string_reverse.dir/clean

CMakeFiles/Stack_string_reverse.dir/depend:
	cd "/home/benacq/Desktop/dev/learn/DSA/cpp/miscellanous/Stack string reverse/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/benacq/Desktop/dev/learn/DSA/cpp/miscellanous/Stack string reverse" "/home/benacq/Desktop/dev/learn/DSA/cpp/miscellanous/Stack string reverse" "/home/benacq/Desktop/dev/learn/DSA/cpp/miscellanous/Stack string reverse/cmake-build-debug" "/home/benacq/Desktop/dev/learn/DSA/cpp/miscellanous/Stack string reverse/cmake-build-debug" "/home/benacq/Desktop/dev/learn/DSA/cpp/miscellanous/Stack string reverse/cmake-build-debug/CMakeFiles/Stack_string_reverse.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Stack_string_reverse.dir/depend
