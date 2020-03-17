##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=practice
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/carolsand/development/cis252SMCD/week9Assignments
ProjectPath            :=/home/carolsand/development/cis252SMCD/week9Assignments/practice/practice
IntermediateDirectory  :=../../build-$(ConfigurationName)/practice/practice
OutDir                 :=../../build-$(ConfigurationName)/practice/practice
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=carolsand
Date                   :=14/03/20
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
Objects0=../../build-$(ConfigurationName)/practice/practice/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../../build-$(ConfigurationName)/practice/practice/.d $(Objects) 
	@mkdir -p "../../build-$(ConfigurationName)/practice/practice"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../../build-$(ConfigurationName)/practice/practice"
	@mkdir -p ""../../build-$(ConfigurationName)/bin""

../../build-$(ConfigurationName)/practice/practice/.d:
	@mkdir -p "../../build-$(ConfigurationName)/practice/practice"

PreBuild:


##
## Objects
##
../../build-$(ConfigurationName)/practice/practice/main.cpp$(ObjectSuffix): main.cpp ../../build-$(ConfigurationName)/practice/practice/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/carolsand/development/cis252SMCD/week9Assignments/practice/practice/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../../build-$(ConfigurationName)/practice/practice/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../build-$(ConfigurationName)/practice/practice/main.cpp$(ObjectSuffix) -MF../../build-$(ConfigurationName)/practice/practice/main.cpp$(DependSuffix) -MM main.cpp

../../build-$(ConfigurationName)/practice/practice/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../build-$(ConfigurationName)/practice/practice/main.cpp$(PreprocessSuffix) main.cpp


-include ../../build-$(ConfigurationName)/practice/practice//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


