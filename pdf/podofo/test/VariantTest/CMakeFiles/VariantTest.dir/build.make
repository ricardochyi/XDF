# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.6.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.6.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Leigh/Desktop/localpdf/pdf/podofo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Leigh/Desktop/localpdf/pdf/podofo

# Include any dependencies generated for this target.
include test/VariantTest/CMakeFiles/VariantTest.dir/depend.make

# Include the progress variables for this target.
include test/VariantTest/CMakeFiles/VariantTest.dir/progress.make

# Include the compile flags for this target's objects.
include test/VariantTest/CMakeFiles/VariantTest.dir/flags.make

test/VariantTest/CMakeFiles/VariantTest.dir/VariantTest.cpp.o: test/VariantTest/CMakeFiles/VariantTest.dir/flags.make
test/VariantTest/CMakeFiles/VariantTest.dir/VariantTest.cpp.o: test/VariantTest/VariantTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Leigh/Desktop/localpdf/pdf/podofo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/VariantTest/CMakeFiles/VariantTest.dir/VariantTest.cpp.o"
	cd /Users/Leigh/Desktop/localpdf/pdf/podofo/test/VariantTest && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VariantTest.dir/VariantTest.cpp.o -c /Users/Leigh/Desktop/localpdf/pdf/podofo/test/VariantTest/VariantTest.cpp

test/VariantTest/CMakeFiles/VariantTest.dir/VariantTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VariantTest.dir/VariantTest.cpp.i"
	cd /Users/Leigh/Desktop/localpdf/pdf/podofo/test/VariantTest && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Leigh/Desktop/localpdf/pdf/podofo/test/VariantTest/VariantTest.cpp > CMakeFiles/VariantTest.dir/VariantTest.cpp.i

test/VariantTest/CMakeFiles/VariantTest.dir/VariantTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VariantTest.dir/VariantTest.cpp.s"
	cd /Users/Leigh/Desktop/localpdf/pdf/podofo/test/VariantTest && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Leigh/Desktop/localpdf/pdf/podofo/test/VariantTest/VariantTest.cpp -o CMakeFiles/VariantTest.dir/VariantTest.cpp.s

test/VariantTest/CMakeFiles/VariantTest.dir/VariantTest.cpp.o.requires:

.PHONY : test/VariantTest/CMakeFiles/VariantTest.dir/VariantTest.cpp.o.requires

test/VariantTest/CMakeFiles/VariantTest.dir/VariantTest.cpp.o.provides: test/VariantTest/CMakeFiles/VariantTest.dir/VariantTest.cpp.o.requires
	$(MAKE) -f test/VariantTest/CMakeFiles/VariantTest.dir/build.make test/VariantTest/CMakeFiles/VariantTest.dir/VariantTest.cpp.o.provides.build
.PHONY : test/VariantTest/CMakeFiles/VariantTest.dir/VariantTest.cpp.o.provides

test/VariantTest/CMakeFiles/VariantTest.dir/VariantTest.cpp.o.provides.build: test/VariantTest/CMakeFiles/VariantTest.dir/VariantTest.cpp.o


# Object files for target VariantTest
VariantTest_OBJECTS = \
"CMakeFiles/VariantTest.dir/VariantTest.cpp.o"

# External object files for target VariantTest
VariantTest_EXTERNAL_OBJECTS =

test/VariantTest/VariantTest: test/VariantTest/CMakeFiles/VariantTest.dir/VariantTest.cpp.o
test/VariantTest/VariantTest: test/VariantTest/CMakeFiles/VariantTest.dir/build.make
test/VariantTest/VariantTest: /usr/local/lib/libfontconfig.dylib
test/VariantTest/VariantTest: /usr/lib/libz.dylib
test/VariantTest/VariantTest: /usr/local/lib/libjpeg.dylib
test/VariantTest/VariantTest: /usr/local/lib/libfreetype.dylib
test/VariantTest/VariantTest: /usr/local/lib/libpng.dylib
test/VariantTest/VariantTest: /usr/lib/libz.dylib
test/VariantTest/VariantTest: /usr/local/lib/libtiff.dylib
test/VariantTest/VariantTest: /usr/local/lib/libfontconfig.dylib
test/VariantTest/VariantTest: /usr/lib/libz.dylib
test/VariantTest/VariantTest: /usr/local/lib/libjpeg.dylib
test/VariantTest/VariantTest: /usr/local/lib/libfreetype.dylib
test/VariantTest/VariantTest: /usr/local/lib/libpng.dylib
test/VariantTest/VariantTest: /usr/lib/libz.dylib
test/VariantTest/VariantTest: /usr/local/lib/libtiff.dylib
test/VariantTest/VariantTest: test/VariantTest/CMakeFiles/VariantTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Leigh/Desktop/localpdf/pdf/podofo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable VariantTest"
	cd /Users/Leigh/Desktop/localpdf/pdf/podofo/test/VariantTest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VariantTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/VariantTest/CMakeFiles/VariantTest.dir/build: test/VariantTest/VariantTest

.PHONY : test/VariantTest/CMakeFiles/VariantTest.dir/build

test/VariantTest/CMakeFiles/VariantTest.dir/requires: test/VariantTest/CMakeFiles/VariantTest.dir/VariantTest.cpp.o.requires

.PHONY : test/VariantTest/CMakeFiles/VariantTest.dir/requires

test/VariantTest/CMakeFiles/VariantTest.dir/clean:
	cd /Users/Leigh/Desktop/localpdf/pdf/podofo/test/VariantTest && $(CMAKE_COMMAND) -P CMakeFiles/VariantTest.dir/cmake_clean.cmake
.PHONY : test/VariantTest/CMakeFiles/VariantTest.dir/clean

test/VariantTest/CMakeFiles/VariantTest.dir/depend:
	cd /Users/Leigh/Desktop/localpdf/pdf/podofo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Leigh/Desktop/localpdf/pdf/podofo /Users/Leigh/Desktop/localpdf/pdf/podofo/test/VariantTest /Users/Leigh/Desktop/localpdf/pdf/podofo /Users/Leigh/Desktop/localpdf/pdf/podofo/test/VariantTest /Users/Leigh/Desktop/localpdf/pdf/podofo/test/VariantTest/CMakeFiles/VariantTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/VariantTest/CMakeFiles/VariantTest.dir/depend
