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
CMAKE_SOURCE_DIR = /tmp/tmp.smUhSfyffX

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /tmp/tmp.smUhSfyffX/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BinaryTree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BinaryTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BinaryTree.dir/flags.make

CMakeFiles/BinaryTree.dir/main.c.o: CMakeFiles/BinaryTree.dir/flags.make
CMakeFiles/BinaryTree.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.smUhSfyffX/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BinaryTree.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/BinaryTree.dir/main.c.o   -c /tmp/tmp.smUhSfyffX/main.c

CMakeFiles/BinaryTree.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BinaryTree.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /tmp/tmp.smUhSfyffX/main.c > CMakeFiles/BinaryTree.dir/main.c.i

CMakeFiles/BinaryTree.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BinaryTree.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /tmp/tmp.smUhSfyffX/main.c -o CMakeFiles/BinaryTree.dir/main.c.s

CMakeFiles/BinaryTree.dir/main.c.o.requires:

.PHONY : CMakeFiles/BinaryTree.dir/main.c.o.requires

CMakeFiles/BinaryTree.dir/main.c.o.provides: CMakeFiles/BinaryTree.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/BinaryTree.dir/build.make CMakeFiles/BinaryTree.dir/main.c.o.provides.build
.PHONY : CMakeFiles/BinaryTree.dir/main.c.o.provides

CMakeFiles/BinaryTree.dir/main.c.o.provides.build: CMakeFiles/BinaryTree.dir/main.c.o


# Object files for target BinaryTree
BinaryTree_OBJECTS = \
"CMakeFiles/BinaryTree.dir/main.c.o"

# External object files for target BinaryTree
BinaryTree_EXTERNAL_OBJECTS =

BinaryTree: CMakeFiles/BinaryTree.dir/main.c.o
BinaryTree: CMakeFiles/BinaryTree.dir/build.make
BinaryTree: CMakeFiles/BinaryTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/tmp/tmp.smUhSfyffX/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BinaryTree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BinaryTree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BinaryTree.dir/build: BinaryTree

.PHONY : CMakeFiles/BinaryTree.dir/build

CMakeFiles/BinaryTree.dir/requires: CMakeFiles/BinaryTree.dir/main.c.o.requires

.PHONY : CMakeFiles/BinaryTree.dir/requires

CMakeFiles/BinaryTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BinaryTree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BinaryTree.dir/clean

CMakeFiles/BinaryTree.dir/depend:
	cd /tmp/tmp.smUhSfyffX/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/tmp.smUhSfyffX /tmp/tmp.smUhSfyffX /tmp/tmp.smUhSfyffX/cmake-build-debug /tmp/tmp.smUhSfyffX/cmake-build-debug /tmp/tmp.smUhSfyffX/cmake-build-debug/CMakeFiles/BinaryTree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BinaryTree.dir/depend
