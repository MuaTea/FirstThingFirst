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
CMAKE_SOURCE_DIR = /tmp/tmp.Bvx6ve7J4d

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /tmp/tmp.Bvx6ve7J4d/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/kernel_link.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/kernel_link.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kernel_link.dir/flags.make

CMakeFiles/kernel_link.dir/main.c.o: CMakeFiles/kernel_link.dir/flags.make
CMakeFiles/kernel_link.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.Bvx6ve7J4d/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/kernel_link.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/kernel_link.dir/main.c.o   -c /tmp/tmp.Bvx6ve7J4d/main.c

CMakeFiles/kernel_link.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/kernel_link.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /tmp/tmp.Bvx6ve7J4d/main.c > CMakeFiles/kernel_link.dir/main.c.i

CMakeFiles/kernel_link.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/kernel_link.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /tmp/tmp.Bvx6ve7J4d/main.c -o CMakeFiles/kernel_link.dir/main.c.s

CMakeFiles/kernel_link.dir/main.c.o.requires:

.PHONY : CMakeFiles/kernel_link.dir/main.c.o.requires

CMakeFiles/kernel_link.dir/main.c.o.provides: CMakeFiles/kernel_link.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/kernel_link.dir/build.make CMakeFiles/kernel_link.dir/main.c.o.provides.build
.PHONY : CMakeFiles/kernel_link.dir/main.c.o.provides

CMakeFiles/kernel_link.dir/main.c.o.provides.build: CMakeFiles/kernel_link.dir/main.c.o


# Object files for target kernel_link
kernel_link_OBJECTS = \
"CMakeFiles/kernel_link.dir/main.c.o"

# External object files for target kernel_link
kernel_link_EXTERNAL_OBJECTS =

kernel_link: CMakeFiles/kernel_link.dir/main.c.o
kernel_link: CMakeFiles/kernel_link.dir/build.make
kernel_link: CMakeFiles/kernel_link.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/tmp/tmp.Bvx6ve7J4d/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable kernel_link"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kernel_link.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kernel_link.dir/build: kernel_link

.PHONY : CMakeFiles/kernel_link.dir/build

CMakeFiles/kernel_link.dir/requires: CMakeFiles/kernel_link.dir/main.c.o.requires

.PHONY : CMakeFiles/kernel_link.dir/requires

CMakeFiles/kernel_link.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/kernel_link.dir/cmake_clean.cmake
.PHONY : CMakeFiles/kernel_link.dir/clean

CMakeFiles/kernel_link.dir/depend:
	cd /tmp/tmp.Bvx6ve7J4d/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/tmp.Bvx6ve7J4d /tmp/tmp.Bvx6ve7J4d /tmp/tmp.Bvx6ve7J4d/cmake-build-debug /tmp/tmp.Bvx6ve7J4d/cmake-build-debug /tmp/tmp.Bvx6ve7J4d/cmake-build-debug/CMakeFiles/kernel_link.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/kernel_link.dir/depend

