# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = "/media/marian/352A14ADEA097CBE/working environment/Studia/clion/clion-2017.1.2/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/media/marian/352A14ADEA097CBE/working environment/Studia/clion/clion-2017.1.2/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/avlTree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/avlTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/avlTree.dir/flags.make

CMakeFiles/avlTree.dir/src/avltree.c.o: CMakeFiles/avlTree.dir/flags.make
CMakeFiles/avlTree.dir/src/avltree.c.o: ../src/avltree.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/avlTree.dir/src/avltree.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/avlTree.dir/src/avltree.c.o   -c "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/src/avltree.c"

CMakeFiles/avlTree.dir/src/avltree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/avlTree.dir/src/avltree.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/src/avltree.c" > CMakeFiles/avlTree.dir/src/avltree.c.i

CMakeFiles/avlTree.dir/src/avltree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/avlTree.dir/src/avltree.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/src/avltree.c" -o CMakeFiles/avlTree.dir/src/avltree.c.s

CMakeFiles/avlTree.dir/src/avltree.c.o.requires:

.PHONY : CMakeFiles/avlTree.dir/src/avltree.c.o.requires

CMakeFiles/avlTree.dir/src/avltree.c.o.provides: CMakeFiles/avlTree.dir/src/avltree.c.o.requires
	$(MAKE) -f CMakeFiles/avlTree.dir/build.make CMakeFiles/avlTree.dir/src/avltree.c.o.provides.build
.PHONY : CMakeFiles/avlTree.dir/src/avltree.c.o.provides

CMakeFiles/avlTree.dir/src/avltree.c.o.provides.build: CMakeFiles/avlTree.dir/src/avltree.c.o


CMakeFiles/avlTree.dir/src/node.c.o: CMakeFiles/avlTree.dir/flags.make
CMakeFiles/avlTree.dir/src/node.c.o: ../src/node.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/avlTree.dir/src/node.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/avlTree.dir/src/node.c.o   -c "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/src/node.c"

CMakeFiles/avlTree.dir/src/node.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/avlTree.dir/src/node.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/src/node.c" > CMakeFiles/avlTree.dir/src/node.c.i

CMakeFiles/avlTree.dir/src/node.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/avlTree.dir/src/node.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/src/node.c" -o CMakeFiles/avlTree.dir/src/node.c.s

CMakeFiles/avlTree.dir/src/node.c.o.requires:

.PHONY : CMakeFiles/avlTree.dir/src/node.c.o.requires

CMakeFiles/avlTree.dir/src/node.c.o.provides: CMakeFiles/avlTree.dir/src/node.c.o.requires
	$(MAKE) -f CMakeFiles/avlTree.dir/build.make CMakeFiles/avlTree.dir/src/node.c.o.provides.build
.PHONY : CMakeFiles/avlTree.dir/src/node.c.o.provides

CMakeFiles/avlTree.dir/src/node.c.o.provides.build: CMakeFiles/avlTree.dir/src/node.c.o


CMakeFiles/avlTree.dir/src/main.c.o: CMakeFiles/avlTree.dir/flags.make
CMakeFiles/avlTree.dir/src/main.c.o: ../src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/avlTree.dir/src/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/avlTree.dir/src/main.c.o   -c "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/src/main.c"

CMakeFiles/avlTree.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/avlTree.dir/src/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/src/main.c" > CMakeFiles/avlTree.dir/src/main.c.i

CMakeFiles/avlTree.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/avlTree.dir/src/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/src/main.c" -o CMakeFiles/avlTree.dir/src/main.c.s

CMakeFiles/avlTree.dir/src/main.c.o.requires:

.PHONY : CMakeFiles/avlTree.dir/src/main.c.o.requires

CMakeFiles/avlTree.dir/src/main.c.o.provides: CMakeFiles/avlTree.dir/src/main.c.o.requires
	$(MAKE) -f CMakeFiles/avlTree.dir/build.make CMakeFiles/avlTree.dir/src/main.c.o.provides.build
.PHONY : CMakeFiles/avlTree.dir/src/main.c.o.provides

CMakeFiles/avlTree.dir/src/main.c.o.provides.build: CMakeFiles/avlTree.dir/src/main.c.o


# Object files for target avlTree
avlTree_OBJECTS = \
"CMakeFiles/avlTree.dir/src/avltree.c.o" \
"CMakeFiles/avlTree.dir/src/node.c.o" \
"CMakeFiles/avlTree.dir/src/main.c.o"

# External object files for target avlTree
avlTree_EXTERNAL_OBJECTS =

avlTree: CMakeFiles/avlTree.dir/src/avltree.c.o
avlTree: CMakeFiles/avlTree.dir/src/node.c.o
avlTree: CMakeFiles/avlTree.dir/src/main.c.o
avlTree: CMakeFiles/avlTree.dir/build.make
avlTree: CMakeFiles/avlTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable avlTree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/avlTree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/avlTree.dir/build: avlTree

.PHONY : CMakeFiles/avlTree.dir/build

CMakeFiles/avlTree.dir/requires: CMakeFiles/avlTree.dir/src/avltree.c.o.requires
CMakeFiles/avlTree.dir/requires: CMakeFiles/avlTree.dir/src/node.c.o.requires
CMakeFiles/avlTree.dir/requires: CMakeFiles/avlTree.dir/src/main.c.o.requires

.PHONY : CMakeFiles/avlTree.dir/requires

CMakeFiles/avlTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/avlTree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/avlTree.dir/clean

CMakeFiles/avlTree.dir/depend:
	cd "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment" "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment" "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/cmake-build-debug" "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/cmake-build-debug" "/media/marian/352A14ADEA097CBE/working environment/summerStudies/Algorithms/Cormen/Part3/chapter14/Assigment/cmake-build-debug/CMakeFiles/avlTree.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/avlTree.dir/depend
