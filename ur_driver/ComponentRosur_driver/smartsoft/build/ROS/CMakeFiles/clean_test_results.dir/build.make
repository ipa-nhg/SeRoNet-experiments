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
CMAKE_SOURCE_DIR = /home/nhg/workspace/ComponentRosur_driver/smartsoft

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nhg/workspace/ComponentRosur_driver/smartsoft/build

# Utility rule file for clean_test_results.

# Include the progress variables for this target.
include ROS/CMakeFiles/clean_test_results.dir/progress.make

ROS/CMakeFiles/clean_test_results:
	cd /home/nhg/workspace/ComponentRosur_driver/smartsoft/build/ROS && /usr/bin/python /opt/ros/kinetic/share/catkin/cmake/test/remove_test_results.py /home/nhg/workspace/ComponentRosur_driver/smartsoft/build/test_results

clean_test_results: ROS/CMakeFiles/clean_test_results
clean_test_results: ROS/CMakeFiles/clean_test_results.dir/build.make

.PHONY : clean_test_results

# Rule to build all files generated by this target.
ROS/CMakeFiles/clean_test_results.dir/build: clean_test_results

.PHONY : ROS/CMakeFiles/clean_test_results.dir/build

ROS/CMakeFiles/clean_test_results.dir/clean:
	cd /home/nhg/workspace/ComponentRosur_driver/smartsoft/build/ROS && $(CMAKE_COMMAND) -P CMakeFiles/clean_test_results.dir/cmake_clean.cmake
.PHONY : ROS/CMakeFiles/clean_test_results.dir/clean

ROS/CMakeFiles/clean_test_results.dir/depend:
	cd /home/nhg/workspace/ComponentRosur_driver/smartsoft/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nhg/workspace/ComponentRosur_driver/smartsoft /home/nhg/workspace/ComponentRosur_driver/ROS/src-gen /home/nhg/workspace/ComponentRosur_driver/smartsoft/build /home/nhg/workspace/ComponentRosur_driver/smartsoft/build/ROS /home/nhg/workspace/ComponentRosur_driver/smartsoft/build/ROS/CMakeFiles/clean_test_results.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ROS/CMakeFiles/clean_test_results.dir/depend

