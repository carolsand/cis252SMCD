##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=week8PracticeTrees
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/carolsand/development/cis252SMCD/week8Assignments/week8Assignments
ProjectPath            :=/home/carolsand/development/cis252SMCD/week8Assignments/week8Programs/week8PracticeTrees/week8PracticeTrees
IntermediateDirectory  :=../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees
OutDir                 :=../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=carolsand
Date                   :=08/03/20
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
OutputFile             :=../../../week8Assignments/build-$(ConfigurationName)/bin/$(ProjectName)
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
CXXFLAGS :=  -g -O0 -W -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -W -std=c++17 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees/.d $(Objects) 
	@mkdir -p "../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees"
	@mkdir -p ""../../../week8Assignments/build-$(ConfigurationName)/bin""

../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees/.d:
	@mkdir -p "../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees"

PreBuild:


##
## Objects
##
../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees/main.cpp$(ObjectSuffix): main.cpp ../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/carolsand/development/cis252SMCD/week8Assignments/week8Programs/week8PracticeTrees/week8PracticeTrees/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees/main.cpp$(ObjectSuffix) -MF../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees/main.cpp$(DependSuffix) -MM main.cpp

../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees/main.cpp$(PreprocessSuffix) main.cpp


-include ../../../week8Assignments/build-$(ConfigurationName)/__/week8Programs/week8PracticeTrees/week8PracticeTrees//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


