##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=week9CarolSandersHeapTProg5
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/carolsand/development/cis252SMCD/week9Assignments
ProjectPath            :=/home/carolsand/development/cis252SMCD/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5
IntermediateDirectory  :=../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5
OutDir                 :=../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=carolsand
Date                   :=16/03/20
CodeLitePath           :=/home/carolsand/.codelite
LinkerName             :=/usr/bin/g++-9
SharedObjectLinkerName :=/usr/bin/g++-9 -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=../../week9Assignments/build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++-9
CC       := /usr/bin/gcc-9
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5/.d $(Objects) 
	@mkdir -p "../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5"
	@mkdir -p ""../../week9Assignments/build-$(ConfigurationName)/bin""

../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5/.d:
	@mkdir -p "../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5"

PreBuild:


##
## Objects
##
../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5/main.cpp$(ObjectSuffix): main.cpp ../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/carolsand/development/cis252SMCD/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5/main.cpp$(ObjectSuffix) -MF../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5/main.cpp$(DependSuffix) -MM main.cpp

../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5/main.cpp$(PreprocessSuffix) main.cpp


-include ../../week9Assignments/build-$(ConfigurationName)/__/week9CarolSandersHeapTProg5/week9CarolSandersHeapTProg5//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


