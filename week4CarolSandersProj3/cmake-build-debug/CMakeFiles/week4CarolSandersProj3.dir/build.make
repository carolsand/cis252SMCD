# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\carol\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6015.37\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\carol\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6015.37\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\carol\CLionProjects\cis252SMCD\week4CarolSandersProj3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\carol\CLionProjects\cis252SMCD\week4CarolSandersProj3\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\week4CarolSandersProj3.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\week4CarolSandersProj3.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\week4CarolSandersProj3.dir\flags.make

CMakeFiles\week4CarolSandersProj3.dir\main.cpp.obj: CMakeFiles\week4CarolSandersProj3.dir\flags.make
CMakeFiles\week4CarolSandersProj3.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\carol\CLionProjects\cis252SMCD\week4CarolSandersProj3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/week4CarolSandersProj3.dir/main.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.21.27702\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\week4CarolSandersProj3.dir\main.cpp.obj /FdCMakeFiles\week4CarolSandersProj3.dir\ /FS -c C:\Users\carol\CLionProjects\cis252SMCD\week4CarolSandersProj3\main.cpp
<<

CMakeFiles\week4CarolSandersProj3.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/week4CarolSandersProj3.dir/main.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.21.27702\bin\Hostx86\x86\cl.exe" > CMakeFiles\week4CarolSandersProj3.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\carol\CLionProjects\cis252SMCD\week4CarolSandersProj3\main.cpp
<<

CMakeFiles\week4CarolSandersProj3.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/week4CarolSandersProj3.dir/main.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.21.27702\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\week4CarolSandersProj3.dir\main.cpp.s /c C:\Users\carol\CLionProjects\cis252SMCD\week4CarolSandersProj3\main.cpp
<<

# Object files for target week4CarolSandersProj3
week4CarolSandersProj3_OBJECTS = \
"CMakeFiles\week4CarolSandersProj3.dir\main.cpp.obj"

# External object files for target week4CarolSandersProj3
week4CarolSandersProj3_EXTERNAL_OBJECTS =

week4CarolSandersProj3.exe: CMakeFiles\week4CarolSandersProj3.dir\main.cpp.obj
week4CarolSandersProj3.exe: CMakeFiles\week4CarolSandersProj3.dir\build.make
week4CarolSandersProj3.exe: CMakeFiles\week4CarolSandersProj3.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\carol\CLionProjects\cis252SMCD\week4CarolSandersProj3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable week4CarolSandersProj3.exe"
	C:\Users\carol\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6015.37\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\week4CarolSandersProj3.dir --rc="C:\PROGRA~2\Windows Kits\10\bin\10.0.18362.0\x86\rc.exe" --mt="C:\PROGRA~2\Windows Kits\10\bin\10.0.18362.0\x86\mt.exe" --manifests  -- "C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.21.27702\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\week4CarolSandersProj3.dir\objects1.rsp @<<
 /out:week4CarolSandersProj3.exe /implib:week4CarolSandersProj3.lib /pdb:C:\Users\carol\CLionProjects\cis252SMCD\week4CarolSandersProj3\cmake-build-debug\week4CarolSandersProj3.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\week4CarolSandersProj3.dir\build: week4CarolSandersProj3.exe

.PHONY : CMakeFiles\week4CarolSandersProj3.dir\build

CMakeFiles\week4CarolSandersProj3.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\week4CarolSandersProj3.dir\cmake_clean.cmake
.PHONY : CMakeFiles\week4CarolSandersProj3.dir\clean

CMakeFiles\week4CarolSandersProj3.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\carol\CLionProjects\cis252SMCD\week4CarolSandersProj3 C:\Users\carol\CLionProjects\cis252SMCD\week4CarolSandersProj3 C:\Users\carol\CLionProjects\cis252SMCD\week4CarolSandersProj3\cmake-build-debug C:\Users\carol\CLionProjects\cis252SMCD\week4CarolSandersProj3\cmake-build-debug C:\Users\carol\CLionProjects\cis252SMCD\week4CarolSandersProj3\cmake-build-debug\CMakeFiles\week4CarolSandersProj3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\week4CarolSandersProj3.dir\depend
