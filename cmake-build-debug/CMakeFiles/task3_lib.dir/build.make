# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Programs\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Programs\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\mushka\Desktop\tp-lab-3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\mushka\Desktop\tp-lab-3\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/task3_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/task3_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task3_lib.dir/flags.make

CMakeFiles/task3_lib.dir/src/DateTime.cpp.obj: CMakeFiles/task3_lib.dir/flags.make
CMakeFiles/task3_lib.dir/src/DateTime.cpp.obj: CMakeFiles/task3_lib.dir/includes_CXX.rsp
CMakeFiles/task3_lib.dir/src/DateTime.cpp.obj: ../src/DateTime.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mushka\Desktop\tp-lab-3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task3_lib.dir/src/DateTime.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\task3_lib.dir\src\DateTime.cpp.obj -c C:\Users\mushka\Desktop\tp-lab-3\src\DateTime.cpp

CMakeFiles/task3_lib.dir/src/DateTime.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task3_lib.dir/src/DateTime.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mushka\Desktop\tp-lab-3\src\DateTime.cpp > CMakeFiles\task3_lib.dir\src\DateTime.cpp.i

CMakeFiles/task3_lib.dir/src/DateTime.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task3_lib.dir/src/DateTime.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mushka\Desktop\tp-lab-3\src\DateTime.cpp -o CMakeFiles\task3_lib.dir\src\DateTime.cpp.s

# Object files for target task3_lib
task3_lib_OBJECTS = \
"CMakeFiles/task3_lib.dir/src/DateTime.cpp.obj"

# External object files for target task3_lib
task3_lib_EXTERNAL_OBJECTS =

libtask3_lib.a: CMakeFiles/task3_lib.dir/src/DateTime.cpp.obj
libtask3_lib.a: CMakeFiles/task3_lib.dir/build.make
libtask3_lib.a: CMakeFiles/task3_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\mushka\Desktop\tp-lab-3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libtask3_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles\task3_lib.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\task3_lib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task3_lib.dir/build: libtask3_lib.a

.PHONY : CMakeFiles/task3_lib.dir/build

CMakeFiles/task3_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\task3_lib.dir\cmake_clean.cmake
.PHONY : CMakeFiles/task3_lib.dir/clean

CMakeFiles/task3_lib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\mushka\Desktop\tp-lab-3 C:\Users\mushka\Desktop\tp-lab-3 C:\Users\mushka\Desktop\tp-lab-3\cmake-build-debug C:\Users\mushka\Desktop\tp-lab-3\cmake-build-debug C:\Users\mushka\Desktop\tp-lab-3\cmake-build-debug\CMakeFiles\task3_lib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task3_lib.dir/depend

