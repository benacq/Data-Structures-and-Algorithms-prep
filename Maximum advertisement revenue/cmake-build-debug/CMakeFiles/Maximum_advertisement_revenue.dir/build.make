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
CMAKE_SOURCE_DIR = "/home/benacq/Desktop/dev/learn/DSA/cpp/week 3 greedy algorithms/Maximum advertisement revenue"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/benacq/Desktop/dev/learn/DSA/cpp/week 3 greedy algorithms/Maximum advertisement revenue/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Maximum_advertisement_revenue.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Maximum_advertisement_revenue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Maximum_advertisement_revenue.dir/flags.make

CMakeFiles/Maximum_advertisement_revenue.dir/main.cpp.o: CMakeFiles/Maximum_advertisement_revenue.dir/flags.make
CMakeFiles/Maximum_advertisement_revenue.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/benacq/Desktop/dev/learn/DSA/cpp/week 3 greedy algorithms/Maximum advertisement revenue/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Maximum_advertisement_revenue.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Maximum_advertisement_revenue.dir/main.cpp.o -c "/home/benacq/Desktop/dev/learn/DSA/cpp/week 3 greedy algorithms/Maximum advertisement revenue/main.cpp"

CMakeFiles/Maximum_advertisement_revenue.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Maximum_advertisement_revenue.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/benacq/Desktop/dev/learn/DSA/cpp/week 3 greedy algorithms/Maximum advertisement revenue/main.cpp" > CMakeFiles/Maximum_advertisement_revenue.dir/main.cpp.i

CMakeFiles/Maximum_advertisement_revenue.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Maximum_advertisement_revenue.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/benacq/Desktop/dev/learn/DSA/cpp/week 3 greedy algorithms/Maximum advertisement revenue/main.cpp" -o CMakeFiles/Maximum_advertisement_revenue.dir/main.cpp.s

# Object files for target Maximum_advertisement_revenue
Maximum_advertisement_revenue_OBJECTS = \
"CMakeFiles/Maximum_advertisement_revenue.dir/main.cpp.o"

# External object files for target Maximum_advertisement_revenue
Maximum_advertisement_revenue_EXTERNAL_OBJECTS =

Maximum_advertisement_revenue: CMakeFiles/Maximum_advertisement_revenue.dir/main.cpp.o
Maximum_advertisement_revenue: CMakeFiles/Maximum_advertisement_revenue.dir/build.make
Maximum_advertisement_revenue: CMakeFiles/Maximum_advertisement_revenue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/benacq/Desktop/dev/learn/DSA/cpp/week 3 greedy algorithms/Maximum advertisement revenue/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Maximum_advertisement_revenue"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Maximum_advertisement_revenue.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Maximum_advertisement_revenue.dir/build: Maximum_advertisement_revenue

.PHONY : CMakeFiles/Maximum_advertisement_revenue.dir/build

CMakeFiles/Maximum_advertisement_revenue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Maximum_advertisement_revenue.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Maximum_advertisement_revenue.dir/clean

CMakeFiles/Maximum_advertisement_revenue.dir/depend:
	cd "/home/benacq/Desktop/dev/learn/DSA/cpp/week 3 greedy algorithms/Maximum advertisement revenue/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/benacq/Desktop/dev/learn/DSA/cpp/week 3 greedy algorithms/Maximum advertisement revenue" "/home/benacq/Desktop/dev/learn/DSA/cpp/week 3 greedy algorithms/Maximum advertisement revenue" "/home/benacq/Desktop/dev/learn/DSA/cpp/week 3 greedy algorithms/Maximum advertisement revenue/cmake-build-debug" "/home/benacq/Desktop/dev/learn/DSA/cpp/week 3 greedy algorithms/Maximum advertisement revenue/cmake-build-debug" "/home/benacq/Desktop/dev/learn/DSA/cpp/week 3 greedy algorithms/Maximum advertisement revenue/cmake-build-debug/CMakeFiles/Maximum_advertisement_revenue.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Maximum_advertisement_revenue.dir/depend

