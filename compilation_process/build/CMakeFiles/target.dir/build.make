# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = "/media/pranoy/New Volume/github_repo/computer_science_endeavour/compilation_process"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/pranoy/New Volume/github_repo/computer_science_endeavour/compilation_process/build"

# Include any dependencies generated for this target.
include CMakeFiles/target.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/target.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/target.dir/flags.make

CMakeFiles/target.dir/src/main.cpp.o: CMakeFiles/target.dir/flags.make
CMakeFiles/target.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/pranoy/New Volume/github_repo/computer_science_endeavour/compilation_process/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/target.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/target.dir/src/main.cpp.o -c "/media/pranoy/New Volume/github_repo/computer_science_endeavour/compilation_process/src/main.cpp"

CMakeFiles/target.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/target.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/pranoy/New Volume/github_repo/computer_science_endeavour/compilation_process/src/main.cpp" > CMakeFiles/target.dir/src/main.cpp.i

CMakeFiles/target.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/target.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/pranoy/New Volume/github_repo/computer_science_endeavour/compilation_process/src/main.cpp" -o CMakeFiles/target.dir/src/main.cpp.s

CMakeFiles/target.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/target.dir/src/main.cpp.o.requires

CMakeFiles/target.dir/src/main.cpp.o.provides: CMakeFiles/target.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/target.dir/build.make CMakeFiles/target.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/target.dir/src/main.cpp.o.provides

CMakeFiles/target.dir/src/main.cpp.o.provides.build: CMakeFiles/target.dir/src/main.cpp.o


# Object files for target target
target_OBJECTS = \
"CMakeFiles/target.dir/src/main.cpp.o"

# External object files for target target
target_EXTERNAL_OBJECTS =

target: CMakeFiles/target.dir/src/main.cpp.o
target: CMakeFiles/target.dir/build.make
target: CMakeFiles/target.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/pranoy/New Volume/github_repo/computer_science_endeavour/compilation_process/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable target"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/target.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/target.dir/build: target

.PHONY : CMakeFiles/target.dir/build

CMakeFiles/target.dir/requires: CMakeFiles/target.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/target.dir/requires

CMakeFiles/target.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/target.dir/cmake_clean.cmake
.PHONY : CMakeFiles/target.dir/clean

CMakeFiles/target.dir/depend:
	cd "/media/pranoy/New Volume/github_repo/computer_science_endeavour/compilation_process/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/pranoy/New Volume/github_repo/computer_science_endeavour/compilation_process" "/media/pranoy/New Volume/github_repo/computer_science_endeavour/compilation_process" "/media/pranoy/New Volume/github_repo/computer_science_endeavour/compilation_process/build" "/media/pranoy/New Volume/github_repo/computer_science_endeavour/compilation_process/build" "/media/pranoy/New Volume/github_repo/computer_science_endeavour/compilation_process/build/CMakeFiles/target.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/target.dir/depend

