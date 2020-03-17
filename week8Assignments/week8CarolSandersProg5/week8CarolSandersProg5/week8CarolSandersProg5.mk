##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=week8CarolSandersProg5
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/carolsand/development/cis252SMCD/week8Assignments/week8Programs
ProjectPath            :=/home/carolsand/development/cis252SMCD/week8Assignments/week8CarolSandersProg5/week8CarolSandersProg5
IntermediateDirectory  :=../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5
OutDir                 :=../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=carolsand
Date                   :=07/03/20
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
OutputFile             :=../../week8Programs/build-$(ConfigurationName)/bin/$(ProjectName)
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
Objects0=../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5/.d $(Objects) 
	@mkdir -p "../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5"
	@mkdir -p ""../../week8Programs/build-$(ConfigurationName)/bin""

../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5/.d:
	@mkdir -p "../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5"

PreBuild:


##
## Objects
##
../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5/main.cpp$(ObjectSuffix): main.cpp ../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/carolsand/development/cis252SMCD/week8Assignments/week8CarolSandersProg5/week8CarolSandersProg5/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5/main.cpp$(ObjectSuffix) -MF../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5/main.cpp$(DependSuffix) -MM main.cpp

../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5/main.cpp$(PreprocessSuffix) main.cpp


-include ../../week8Programs/build-$(ConfigurationName)/__/week8CarolSandersProg5/week8CarolSandersProg5//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


