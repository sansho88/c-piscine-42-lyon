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
CMAKE_COMMAND = /private/var/folders/zz/zyxvpxvq6csfxvn_n000bgn4002vx9/T/AppTranslocation/F86E2541-69DC-44A1-959A-B0C74C181644/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/zz/zyxvpxvq6csfxvn_n000bgn4002vx9/T/AppTranslocation/F86E2541-69DC-44A1-959A-B0C74C181644/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tgriffit/projects/C02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tgriffit/projects/C02/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/C02.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/C02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C02.dir/flags.make

CMakeFiles/C02.dir/ex09/ft_strcapitalize.c.o: CMakeFiles/C02.dir/flags.make
CMakeFiles/C02.dir/ex09/ft_strcapitalize.c.o: ../ex09/ft_strcapitalize.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tgriffit/projects/C02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/C02.dir/ex09/ft_strcapitalize.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/C02.dir/ex09/ft_strcapitalize.c.o -c /Users/tgriffit/projects/C02/ex09/ft_strcapitalize.c

CMakeFiles/C02.dir/ex09/ft_strcapitalize.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/C02.dir/ex09/ft_strcapitalize.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/tgriffit/projects/C02/ex09/ft_strcapitalize.c > CMakeFiles/C02.dir/ex09/ft_strcapitalize.c.i

CMakeFiles/C02.dir/ex09/ft_strcapitalize.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/C02.dir/ex09/ft_strcapitalize.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/tgriffit/projects/C02/ex09/ft_strcapitalize.c -o CMakeFiles/C02.dir/ex09/ft_strcapitalize.c.s

CMakeFiles/C02.dir/ex11/ft_putstr_non_printable.c.o: CMakeFiles/C02.dir/flags.make
CMakeFiles/C02.dir/ex11/ft_putstr_non_printable.c.o: ../ex11/ft_putstr_non_printable.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tgriffit/projects/C02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/C02.dir/ex11/ft_putstr_non_printable.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/C02.dir/ex11/ft_putstr_non_printable.c.o -c /Users/tgriffit/projects/C02/ex11/ft_putstr_non_printable.c

CMakeFiles/C02.dir/ex11/ft_putstr_non_printable.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/C02.dir/ex11/ft_putstr_non_printable.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/tgriffit/projects/C02/ex11/ft_putstr_non_printable.c > CMakeFiles/C02.dir/ex11/ft_putstr_non_printable.c.i

CMakeFiles/C02.dir/ex11/ft_putstr_non_printable.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/C02.dir/ex11/ft_putstr_non_printable.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/tgriffit/projects/C02/ex11/ft_putstr_non_printable.c -o CMakeFiles/C02.dir/ex11/ft_putstr_non_printable.c.s

# Object files for target C02
C02_OBJECTS = \
"CMakeFiles/C02.dir/ex09/ft_strcapitalize.c.o" \
"CMakeFiles/C02.dir/ex11/ft_putstr_non_printable.c.o"

# External object files for target C02
C02_EXTERNAL_OBJECTS =

C02: CMakeFiles/C02.dir/ex09/ft_strcapitalize.c.o
C02: CMakeFiles/C02.dir/ex11/ft_putstr_non_printable.c.o
C02: CMakeFiles/C02.dir/build.make
C02: CMakeFiles/C02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tgriffit/projects/C02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable C02"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/C02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C02.dir/build: C02
.PHONY : CMakeFiles/C02.dir/build

CMakeFiles/C02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/C02.dir/cmake_clean.cmake
.PHONY : CMakeFiles/C02.dir/clean

CMakeFiles/C02.dir/depend:
	cd /Users/tgriffit/projects/C02/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tgriffit/projects/C02 /Users/tgriffit/projects/C02 /Users/tgriffit/projects/C02/cmake-build-debug /Users/tgriffit/projects/C02/cmake-build-debug /Users/tgriffit/projects/C02/cmake-build-debug/CMakeFiles/C02.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/C02.dir/depend

