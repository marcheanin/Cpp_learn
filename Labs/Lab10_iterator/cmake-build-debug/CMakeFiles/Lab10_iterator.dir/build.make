# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\march\materials\Programming\Cpp_learn\Cpp_learn\Labs\Lab10_iterator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\march\materials\Programming\Cpp_learn\Cpp_learn\Labs\Lab10_iterator\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab10_iterator.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Lab10_iterator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab10_iterator.dir/flags.make

CMakeFiles/Lab10_iterator.dir/main.cpp.obj: CMakeFiles/Lab10_iterator.dir/flags.make
CMakeFiles/Lab10_iterator.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\march\materials\Programming\Cpp_learn\Cpp_learn\Labs\Lab10_iterator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab10_iterator.dir/main.cpp.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Lab10_iterator.dir\main.cpp.obj -c C:\Users\march\materials\Programming\Cpp_learn\Cpp_learn\Labs\Lab10_iterator\main.cpp

CMakeFiles/Lab10_iterator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab10_iterator.dir/main.cpp.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\march\materials\Programming\Cpp_learn\Cpp_learn\Labs\Lab10_iterator\main.cpp > CMakeFiles\Lab10_iterator.dir\main.cpp.i

CMakeFiles/Lab10_iterator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab10_iterator.dir/main.cpp.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\march\materials\Programming\Cpp_learn\Cpp_learn\Labs\Lab10_iterator\main.cpp -o CMakeFiles\Lab10_iterator.dir\main.cpp.s

# Object files for target Lab10_iterator
Lab10_iterator_OBJECTS = \
"CMakeFiles/Lab10_iterator.dir/main.cpp.obj"

# External object files for target Lab10_iterator
Lab10_iterator_EXTERNAL_OBJECTS =

Lab10_iterator.exe: CMakeFiles/Lab10_iterator.dir/main.cpp.obj
Lab10_iterator.exe: CMakeFiles/Lab10_iterator.dir/build.make
Lab10_iterator.exe: CMakeFiles/Lab10_iterator.dir/linklibs.rsp
Lab10_iterator.exe: CMakeFiles/Lab10_iterator.dir/objects1.rsp
Lab10_iterator.exe: CMakeFiles/Lab10_iterator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\march\materials\Programming\Cpp_learn\Cpp_learn\Labs\Lab10_iterator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab10_iterator.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Lab10_iterator.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab10_iterator.dir/build: Lab10_iterator.exe
.PHONY : CMakeFiles/Lab10_iterator.dir/build

CMakeFiles/Lab10_iterator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lab10_iterator.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Lab10_iterator.dir/clean

CMakeFiles/Lab10_iterator.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\march\materials\Programming\Cpp_learn\Cpp_learn\Labs\Lab10_iterator C:\Users\march\materials\Programming\Cpp_learn\Cpp_learn\Labs\Lab10_iterator C:\Users\march\materials\Programming\Cpp_learn\Cpp_learn\Labs\Lab10_iterator\cmake-build-debug C:\Users\march\materials\Programming\Cpp_learn\Cpp_learn\Labs\Lab10_iterator\cmake-build-debug C:\Users\march\materials\Programming\Cpp_learn\Cpp_learn\Labs\Lab10_iterator\cmake-build-debug\CMakeFiles\Lab10_iterator.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab10_iterator.dir/depend
