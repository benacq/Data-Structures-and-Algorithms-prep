# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /snap/clion/163/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/163/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/benacq/Desktop/dev/learn/DSA/cpp/trees/infix_to_postfix

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/benacq/Desktop/dev/learn/DSA/cpp/trees/infix_to_postfix/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/infix_to_postfix.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/infix_to_postfix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/infix_to_postfix.dir/flags.make

CMakeFiles/infix_to_postfix.dir/main.cpp.o: CMakeFiles/infix_to_postfix.dir/flags.make
CMakeFiles/infix_to_postfix.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/benacq/Desktop/dev/learn/DSA/cpp/trees/infix_to_postfix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/infix_to_postfix.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/infix_to_postfix.dir/main.cpp.o -c /home/benacq/Desktop/dev/learn/DSA/cpp/trees/infix_to_postfix/main.cpp

CMakeFiles/infix_to_postfix.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/infix_to_postfix.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/benacq/Desktop/dev/learn/DSA/cpp/trees/infix_to_postfix/main.cpp > CMakeFiles/infix_to_postfix.dir/main.cpp.i

CMakeFiles/infix_to_postfix.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/infix_to_postfix.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/benacq/Desktop/dev/learn/DSA/cpp/trees/infix_to_postfix/main.cpp -o CMakeFiles/infix_to_postfix.dir/main.cpp.s

# Object files for target infix_to_postfix
infix_to_postfix_OBJECTS = \
"CMakeFiles/infix_to_postfix.dir/main.cpp.o"

# External object files for target infix_to_postfix
infix_to_postfix_EXTERNAL_OBJECTS =

infix_to_postfix: CMakeFiles/infix_to_postfix.dir/main.cpp.o
infix_to_postfix: CMakeFiles/infix_to_postfix.dir/build.make
infix_to_postfix: CMakeFiles/infix_to_postfix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/benacq/Desktop/dev/learn/DSA/cpp/trees/infix_to_postfix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable infix_to_postfix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/infix_to_postfix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/infix_to_postfix.dir/build: infix_to_postfix
.PHONY : CMakeFiles/infix_to_postfix.dir/build

CMakeFiles/infix_to_postfix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/infix_to_postfix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/infix_to_postfix.dir/clean

CMakeFiles/infix_to_postfix.dir/depend:
	cd /home/benacq/Desktop/dev/learn/DSA/cpp/trees/infix_to_postfix/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/benacq/Desktop/dev/learn/DSA/cpp/trees/infix_to_postfix /home/benacq/Desktop/dev/learn/DSA/cpp/trees/infix_to_postfix /home/benacq/Desktop/dev/learn/DSA/cpp/trees/infix_to_postfix/cmake-build-debug /home/benacq/Desktop/dev/learn/DSA/cpp/trees/infix_to_postfix/cmake-build-debug /home/benacq/Desktop/dev/learn/DSA/cpp/trees/infix_to_postfix/cmake-build-debug/CMakeFiles/infix_to_postfix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/infix_to_postfix.dir/depend
