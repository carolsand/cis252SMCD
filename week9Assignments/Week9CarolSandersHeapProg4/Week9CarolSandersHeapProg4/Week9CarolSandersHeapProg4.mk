##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Week9CarolSandersHeapProg4
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/carolsand/development/cis252SMCD/week9Assignments
ProjectPath            :=/home/carolsand/development/cis252SMCD/week9Assignments/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4
IntermediateDirectory  :=../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4
OutDir                 :=../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=carolsand
Date                   :=15/03/20
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
OutputFile             :=../../build-$(ConfigurationName)/bin/$(ProjectName)
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
Objects0=../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4/.d $(Objects) 
	@mkdir -p "../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4"
	@mkdir -p ""../../build-$(ConfigurationName)/bin""

../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4/.d:
	@mkdir -p "../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4"

PreBuild:


##
## Objects
##
../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4/main.cpp$(ObjectSuffix): main.cpp ../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/carolsand/development/cis252SMCD/week9Assignments/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4/main.cpp$(ObjectSuffix) -MF../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4/main.cpp$(DependSuffix) -MM main.cpp

../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4/main.cpp$(PreprocessSuffix) main.cpp


-include ../../build-$(ConfigurationName)/Week9CarolSandersHeapProg4/Week9CarolSandersHeapProg4//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


