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
CMAKE_COMMAND = /snap/clion/137/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/137/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/benacq/Desktop/dev/learn/DSA/cpp/Last digit of a large fibonacci number"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/benacq/Desktop/dev/learn/DSA/cpp/Last digit of a large fibonacci number/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/flags.make

CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/main.cpp.o: CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/flags.make
CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/benacq/Desktop/dev/learn/DSA/cpp/Last digit of a large fibonacci number/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/main.cpp.o -c "/home/benacq/Desktop/dev/learn/DSA/cpp/Last digit of a large fibonacci number/main.cpp"

CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/benacq/Desktop/dev/learn/DSA/cpp/Last digit of a large fibonacci number/main.cpp" > CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/main.cpp.i

CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/benacq/Desktop/dev/learn/DSA/cpp/Last digit of a large fibonacci number/main.cpp" -o CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/main.cpp.s

# Object files for target Last_digit_of_a_large_fibonacci_number
Last_digit_of_a_large_fibonacci_number_OBJECTS = \
"CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/main.cpp.o"

# External object files for target Last_digit_of_a_large_fibonacci_number
Last_digit_of_a_large_fibonacci_number_EXTERNAL_OBJECTS =

Last_digit_of_a_large_fibonacci_number: CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/main.cpp.o
Last_digit_of_a_large_fibonacci_number: CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/build.make
Last_digit_of_a_large_fibonacci_number: CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/benacq/Desktop/dev/learn/DSA/cpp/Last digit of a large fibonacci number/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Last_digit_of_a_large_fibonacci_number"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/build: Last_digit_of_a_large_fibonacci_number

.PHONY : CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/build

CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/clean

CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/depend:
	cd "/home/benacq/Desktop/dev/learn/DSA/cpp/Last digit of a large fibonacci number/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/benacq/Desktop/dev/learn/DSA/cpp/Last digit of a large fibonacci number" "/home/benacq/Desktop/dev/learn/DSA/cpp/Last digit of a large fibonacci number" "/home/benacq/Desktop/dev/learn/DSA/cpp/Last digit of a large fibonacci number/cmake-build-debug" "/home/benacq/Desktop/dev/learn/DSA/cpp/Last digit of a large fibonacci number/cmake-build-debug" "/home/benacq/Desktop/dev/learn/DSA/cpp/Last digit of a large fibonacci number/cmake-build-debug/CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Last_digit_of_a_large_fibonacci_number.dir/depend

