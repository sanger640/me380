# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/alikasim/wksp/me380/src/arduino_control/firmware

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alikasim/wksp/me380/build/arduino_control/firmware

# Utility rule file for listen-upload.

# Include the progress variables for this target.
include CMakeFiles/listen-upload.dir/progress.make

CMakeFiles/listen-upload: /home/alikasim/wksp/me380/devel/share/arduino_control/listen.elf
	/usr/share/arduino/hardware/tools/avrdude -C/usr/share/arduino/hardware/tools/avrdude.conf -patmega2560 -cwiring -b115200 -P/dev/ttyACM0 -D -V -Uflash:w:/home/alikasim/wksp/me380/devel/share/arduino_control/listen.hex -Ueeprom:w:/home/alikasim/wksp/me380/devel/share/arduino_control/listen.eep:i

listen-upload: CMakeFiles/listen-upload
listen-upload: CMakeFiles/listen-upload.dir/build.make

.PHONY : listen-upload

# Rule to build all files generated by this target.
CMakeFiles/listen-upload.dir/build: listen-upload

.PHONY : CMakeFiles/listen-upload.dir/build

CMakeFiles/listen-upload.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/listen-upload.dir/cmake_clean.cmake
.PHONY : CMakeFiles/listen-upload.dir/clean

CMakeFiles/listen-upload.dir/depend:
	cd /home/alikasim/wksp/me380/build/arduino_control/firmware && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alikasim/wksp/me380/src/arduino_control/firmware /home/alikasim/wksp/me380/src/arduino_control/firmware /home/alikasim/wksp/me380/build/arduino_control/firmware /home/alikasim/wksp/me380/build/arduino_control/firmware /home/alikasim/wksp/me380/build/arduino_control/firmware/CMakeFiles/listen-upload.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/listen-upload.dir/depend

