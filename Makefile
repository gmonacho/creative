# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/gael/Documents/creative

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gael/Documents/creative

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/gael/Documents/creative/CMakeFiles /home/gael/Documents/creative/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/gael/Documents/creative/CMakeFiles 0
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
# Target rules for targets named Creative

# Build rule for target.
Creative: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Creative
.PHONY : Creative

# fast build rule for target.
Creative/fast:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/build
.PHONY : Creative/fast

src/Camera.o: src/Camera.cpp.o

.PHONY : src/Camera.o

# target to build an object file
src/Camera.cpp.o:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/Camera.cpp.o
.PHONY : src/Camera.cpp.o

src/Camera.i: src/Camera.cpp.i

.PHONY : src/Camera.i

# target to preprocess a source file
src/Camera.cpp.i:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/Camera.cpp.i
.PHONY : src/Camera.cpp.i

src/Camera.s: src/Camera.cpp.s

.PHONY : src/Camera.s

# target to generate assembly for a file
src/Camera.cpp.s:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/Camera.cpp.s
.PHONY : src/Camera.cpp.s

src/Map.o: src/Map.cpp.o

.PHONY : src/Map.o

# target to build an object file
src/Map.cpp.o:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/Map.cpp.o
.PHONY : src/Map.cpp.o

src/Map.i: src/Map.cpp.i

.PHONY : src/Map.i

# target to preprocess a source file
src/Map.cpp.i:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/Map.cpp.i
.PHONY : src/Map.cpp.i

src/Map.s: src/Map.cpp.s

.PHONY : src/Map.s

# target to generate assembly for a file
src/Map.cpp.s:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/Map.cpp.s
.PHONY : src/Map.cpp.s

src/Player.o: src/Player.cpp.o

.PHONY : src/Player.o

# target to build an object file
src/Player.cpp.o:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/Player.cpp.o
.PHONY : src/Player.cpp.o

src/Player.i: src/Player.cpp.i

.PHONY : src/Player.i

# target to preprocess a source file
src/Player.cpp.i:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/Player.cpp.i
.PHONY : src/Player.cpp.i

src/Player.s: src/Player.cpp.s

.PHONY : src/Player.s

# target to generate assembly for a file
src/Player.cpp.s:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/Player.cpp.s
.PHONY : src/Player.cpp.s

src/Space.o: src/Space.cpp.o

.PHONY : src/Space.o

# target to build an object file
src/Space.cpp.o:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/Space.cpp.o
.PHONY : src/Space.cpp.o

src/Space.i: src/Space.cpp.i

.PHONY : src/Space.i

# target to preprocess a source file
src/Space.cpp.i:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/Space.cpp.i
.PHONY : src/Space.cpp.i

src/Space.s: src/Space.cpp.s

.PHONY : src/Space.s

# target to generate assembly for a file
src/Space.cpp.s:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/Space.cpp.s
.PHONY : src/Space.cpp.s

src/event/event_loop.o: src/event/event_loop.cpp.o

.PHONY : src/event/event_loop.o

# target to build an object file
src/event/event_loop.cpp.o:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/event/event_loop.cpp.o
.PHONY : src/event/event_loop.cpp.o

src/event/event_loop.i: src/event/event_loop.cpp.i

.PHONY : src/event/event_loop.i

# target to preprocess a source file
src/event/event_loop.cpp.i:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/event/event_loop.cpp.i
.PHONY : src/event/event_loop.cpp.i

src/event/event_loop.s: src/event/event_loop.cpp.s

.PHONY : src/event/event_loop.s

# target to generate assembly for a file
src/event/event_loop.cpp.s:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/event/event_loop.cpp.s
.PHONY : src/event/event_loop.cpp.s

src/main.o: src/main.cpp.o

.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/shapes/CenteredShape.o: src/shapes/CenteredShape.cpp.o

.PHONY : src/shapes/CenteredShape.o

# target to build an object file
src/shapes/CenteredShape.cpp.o:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/shapes/CenteredShape.cpp.o
.PHONY : src/shapes/CenteredShape.cpp.o

src/shapes/CenteredShape.i: src/shapes/CenteredShape.cpp.i

.PHONY : src/shapes/CenteredShape.i

# target to preprocess a source file
src/shapes/CenteredShape.cpp.i:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/shapes/CenteredShape.cpp.i
.PHONY : src/shapes/CenteredShape.cpp.i

src/shapes/CenteredShape.s: src/shapes/CenteredShape.cpp.s

.PHONY : src/shapes/CenteredShape.s

# target to generate assembly for a file
src/shapes/CenteredShape.cpp.s:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/shapes/CenteredShape.cpp.s
.PHONY : src/shapes/CenteredShape.cpp.s

src/shapes/RectangleShape.o: src/shapes/RectangleShape.cpp.o

.PHONY : src/shapes/RectangleShape.o

# target to build an object file
src/shapes/RectangleShape.cpp.o:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/shapes/RectangleShape.cpp.o
.PHONY : src/shapes/RectangleShape.cpp.o

src/shapes/RectangleShape.i: src/shapes/RectangleShape.cpp.i

.PHONY : src/shapes/RectangleShape.i

# target to preprocess a source file
src/shapes/RectangleShape.cpp.i:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/shapes/RectangleShape.cpp.i
.PHONY : src/shapes/RectangleShape.cpp.i

src/shapes/RectangleShape.s: src/shapes/RectangleShape.cpp.s

.PHONY : src/shapes/RectangleShape.s

# target to generate assembly for a file
src/shapes/RectangleShape.cpp.s:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/shapes/RectangleShape.cpp.s
.PHONY : src/shapes/RectangleShape.cpp.s

src/shapes/Shape.o: src/shapes/Shape.cpp.o

.PHONY : src/shapes/Shape.o

# target to build an object file
src/shapes/Shape.cpp.o:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/shapes/Shape.cpp.o
.PHONY : src/shapes/Shape.cpp.o

src/shapes/Shape.i: src/shapes/Shape.cpp.i

.PHONY : src/shapes/Shape.i

# target to preprocess a source file
src/shapes/Shape.cpp.i:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/shapes/Shape.cpp.i
.PHONY : src/shapes/Shape.cpp.i

src/shapes/Shape.s: src/shapes/Shape.cpp.s

.PHONY : src/shapes/Shape.s

# target to generate assembly for a file
src/shapes/Shape.cpp.s:
	$(MAKE) -f CMakeFiles/Creative.dir/build.make CMakeFiles/Creative.dir/src/shapes/Shape.cpp.s
.PHONY : src/shapes/Shape.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... Creative"
	@echo "... edit_cache"
	@echo "... src/Camera.o"
	@echo "... src/Camera.i"
	@echo "... src/Camera.s"
	@echo "... src/Map.o"
	@echo "... src/Map.i"
	@echo "... src/Map.s"
	@echo "... src/Player.o"
	@echo "... src/Player.i"
	@echo "... src/Player.s"
	@echo "... src/Space.o"
	@echo "... src/Space.i"
	@echo "... src/Space.s"
	@echo "... src/event/event_loop.o"
	@echo "... src/event/event_loop.i"
	@echo "... src/event/event_loop.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/shapes/CenteredShape.o"
	@echo "... src/shapes/CenteredShape.i"
	@echo "... src/shapes/CenteredShape.s"
	@echo "... src/shapes/RectangleShape.o"
	@echo "... src/shapes/RectangleShape.i"
	@echo "... src/shapes/RectangleShape.s"
	@echo "... src/shapes/Shape.o"
	@echo "... src/shapes/Shape.i"
	@echo "... src/shapes/Shape.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

