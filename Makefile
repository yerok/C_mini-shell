# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/antoine/Workspace/c/Shell

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/antoine/Workspace/c/Shell

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/antoine/Workspace/c/Shell/CMakeFiles /home/antoine/Workspace/c/Shell/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/antoine/Workspace/c/Shell/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named shell

# Build rule for target.
shell: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 shell
.PHONY : shell

# fast build rule for target.
shell/fast:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/build
.PHONY : shell/fast

src/commands.o: src/commands.c.o

.PHONY : src/commands.o

# target to build an object file
src/commands.c.o:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/commands.c.o
.PHONY : src/commands.c.o

src/commands.i: src/commands.c.i

.PHONY : src/commands.i

# target to preprocess a source file
src/commands.c.i:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/commands.c.i
.PHONY : src/commands.c.i

src/commands.s: src/commands.c.s

.PHONY : src/commands.s

# target to generate assembly for a file
src/commands.c.s:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/commands.c.s
.PHONY : src/commands.c.s

src/commands/ls.o: src/commands/ls.c.o

.PHONY : src/commands/ls.o

# target to build an object file
src/commands/ls.c.o:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/commands/ls.c.o
.PHONY : src/commands/ls.c.o

src/commands/ls.i: src/commands/ls.c.i

.PHONY : src/commands/ls.i

# target to preprocess a source file
src/commands/ls.c.i:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/commands/ls.c.i
.PHONY : src/commands/ls.c.i

src/commands/ls.s: src/commands/ls.c.s

.PHONY : src/commands/ls.s

# target to generate assembly for a file
src/commands/ls.c.s:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/commands/ls.c.s
.PHONY : src/commands/ls.c.s

src/main.o: src/main.c.o

.PHONY : src/main.o

# target to build an object file
src/main.c.o:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/main.c.o
.PHONY : src/main.c.o

src/main.i: src/main.c.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.c.i:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/main.c.i
.PHONY : src/main.c.i

src/main.s: src/main.c.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.c.s:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/main.c.s
.PHONY : src/main.c.s

src/process.o: src/process.c.o

.PHONY : src/process.o

# target to build an object file
src/process.c.o:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/process.c.o
.PHONY : src/process.c.o

src/process.i: src/process.c.i

.PHONY : src/process.i

# target to preprocess a source file
src/process.c.i:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/process.c.i
.PHONY : src/process.c.i

src/process.s: src/process.c.s

.PHONY : src/process.s

# target to generate assembly for a file
src/process.c.s:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/process.c.s
.PHONY : src/process.c.s

src/redirection.o: src/redirection.c.o

.PHONY : src/redirection.o

# target to build an object file
src/redirection.c.o:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/redirection.c.o
.PHONY : src/redirection.c.o

src/redirection.i: src/redirection.c.i

.PHONY : src/redirection.i

# target to preprocess a source file
src/redirection.c.i:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/redirection.c.i
.PHONY : src/redirection.c.i

src/redirection.s: src/redirection.c.s

.PHONY : src/redirection.s

# target to generate assembly for a file
src/redirection.c.s:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/redirection.c.s
.PHONY : src/redirection.c.s

src/shell.o: src/shell.c.o

.PHONY : src/shell.o

# target to build an object file
src/shell.c.o:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/shell.c.o
.PHONY : src/shell.c.o

src/shell.i: src/shell.c.i

.PHONY : src/shell.i

# target to preprocess a source file
src/shell.c.i:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/shell.c.i
.PHONY : src/shell.c.i

src/shell.s: src/shell.c.s

.PHONY : src/shell.s

# target to generate assembly for a file
src/shell.c.s:
	$(MAKE) -f CMakeFiles/shell.dir/build.make CMakeFiles/shell.dir/src/shell.c.s
.PHONY : src/shell.c.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... shell"
	@echo "... src/commands.o"
	@echo "... src/commands.i"
	@echo "... src/commands.s"
	@echo "... src/commands/ls.o"
	@echo "... src/commands/ls.i"
	@echo "... src/commands/ls.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/process.o"
	@echo "... src/process.i"
	@echo "... src/process.s"
	@echo "... src/redirection.o"
	@echo "... src/redirection.i"
	@echo "... src/redirection.s"
	@echo "... src/shell.o"
	@echo "... src/shell.i"
	@echo "... src/shell.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

