##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=week8CarolSandersBTree
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/carolsand/development/cis252SMCD/week8Assignments/week8Assignments
ProjectPath            :=/home/carolsand/development/cis252SMCD/week8Assignments/week8CarolSandersBTree/week8CarolSandersBTree
IntermediateDirectory  :=../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree
OutDir                 :=../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree
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
OutputFile             :=../../week8Assignments/build-$(ConfigurationName)/bin/$(ProjectName)
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
CXXFLAGS := -std=c++17 -Wall -g -O0 -W -std=c++17 -Wall $(Preprocessors)
CFLAGS   := -std=c++17 -Wall -g -O0 -W -std=c++17 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree/.d $(Objects) 
	@mkdir -p "../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree"
	@mkdir -p ""../../week8Assignments/build-$(ConfigurationName)/bin""

../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree/.d:
	@mkdir -p "../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree"

PreBuild:


##
## Objects
##
../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree/main.cpp$(ObjectSuffix): main.cpp ../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/carolsand/development/cis252SMCD/week8Assignments/week8CarolSandersBTree/week8CarolSandersBTree/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree/main.cpp$(ObjectSuffix) -MF../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree/main.cpp$(DependSuffix) -MM main.cpp

../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree/main.cpp$(PreprocessSuffix) main.cpp


-include ../../week8Assignments/build-$(ConfigurationName)/__/week8CarolSandersBTree/week8CarolSandersBTree//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


