# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /cygdrive/c/Users/User/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/User/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/User/Desktop/42projects/libft/functions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/User/Desktop/42projects/libft/functions/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/functions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/functions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/functions.dir/flags.make

CMakeFiles/functions.dir/checker.c.o: CMakeFiles/functions.dir/flags.make
CMakeFiles/functions.dir/checker.c.o: ../checker.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/User/Desktop/42projects/libft/functions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/functions.dir/checker.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/functions.dir/checker.c.o   -c /cygdrive/c/Users/User/Desktop/42projects/libft/functions/checker.c

CMakeFiles/functions.dir/checker.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/functions.dir/checker.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/User/Desktop/42projects/libft/functions/checker.c > CMakeFiles/functions.dir/checker.c.i

CMakeFiles/functions.dir/checker.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/functions.dir/checker.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/User/Desktop/42projects/libft/functions/checker.c -o CMakeFiles/functions.dir/checker.c.s

CMakeFiles/functions.dir/ft_strcat.c.o: CMakeFiles/functions.dir/flags.make
CMakeFiles/functions.dir/ft_strcat.c.o: ../ft_strcat.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/User/Desktop/42projects/libft/functions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/functions.dir/ft_strcat.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/functions.dir/ft_strcat.c.o   -c /cygdrive/c/Users/User/Desktop/42projects/libft/functions/ft_strcat.c

CMakeFiles/functions.dir/ft_strcat.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/functions.dir/ft_strcat.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/User/Desktop/42projects/libft/functions/ft_strcat.c > CMakeFiles/functions.dir/ft_strcat.c.i

CMakeFiles/functions.dir/ft_strcat.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/functions.dir/ft_strcat.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/User/Desktop/42projects/libft/functions/ft_strcat.c -o CMakeFiles/functions.dir/ft_strcat.c.s

CMakeFiles/functions.dir/ft_strlen.c.o: CMakeFiles/functions.dir/flags.make
CMakeFiles/functions.dir/ft_strlen.c.o: ../ft_strlen.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/User/Desktop/42projects/libft/functions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/functions.dir/ft_strlen.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/functions.dir/ft_strlen.c.o   -c /cygdrive/c/Users/User/Desktop/42projects/libft/functions/ft_strlen.c

CMakeFiles/functions.dir/ft_strlen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/functions.dir/ft_strlen.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/User/Desktop/42projects/libft/functions/ft_strlen.c > CMakeFiles/functions.dir/ft_strlen.c.i

CMakeFiles/functions.dir/ft_strlen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/functions.dir/ft_strlen.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/User/Desktop/42projects/libft/functions/ft_strlen.c -o CMakeFiles/functions.dir/ft_strlen.c.s

# Object files for target functions
functions_OBJECTS = \
"CMakeFiles/functions.dir/checker.c.o" \
"CMakeFiles/functions.dir/ft_strcat.c.o" \
"CMakeFiles/functions.dir/ft_strlen.c.o"

# External object files for target functions
functions_EXTERNAL_OBJECTS =

functions.exe: CMakeFiles/functions.dir/checker.c.o
functions.exe: CMakeFiles/functions.dir/ft_strcat.c.o
functions.exe: CMakeFiles/functions.dir/ft_strlen.c.o
functions.exe: CMakeFiles/functions.dir/build.make
functions.exe: CMakeFiles/functions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/User/Desktop/42projects/libft/functions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable functions.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/functions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/functions.dir/build: functions.exe

.PHONY : CMakeFiles/functions.dir/build

CMakeFiles/functions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/functions.dir/cmake_clean.cmake
.PHONY : CMakeFiles/functions.dir/clean

CMakeFiles/functions.dir/depend:
	cd /cygdrive/c/Users/User/Desktop/42projects/libft/functions/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/User/Desktop/42projects/libft/functions /cygdrive/c/Users/User/Desktop/42projects/libft/functions /cygdrive/c/Users/User/Desktop/42projects/libft/functions/cmake-build-debug /cygdrive/c/Users/User/Desktop/42projects/libft/functions/cmake-build-debug /cygdrive/c/Users/User/Desktop/42projects/libft/functions/cmake-build-debug/CMakeFiles/functions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/functions.dir/depend

