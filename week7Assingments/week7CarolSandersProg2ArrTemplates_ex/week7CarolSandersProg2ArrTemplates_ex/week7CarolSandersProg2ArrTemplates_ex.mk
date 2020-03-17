##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=week7CarolSandersProg2ArrTemplates_ex
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/carolsand/development/cis252SMCD/week7Assingments/week7Assingments
ProjectPath            :=/home/carolsand/development/cis252SMCD/week7Assingments/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex
IntermediateDirectory  :=../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex
OutDir                 :=../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=carolsand
Date                   :=01/03/20
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
OutputFile             :=../../week7Assingments/build-$(ConfigurationName)/bin/$(ProjectName)
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
Objects0=../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex/.d $(Objects) 
	@mkdir -p "../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex"
	@mkdir -p ""../../week7Assingments/build-$(ConfigurationName)/bin""

../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex/.d:
	@mkdir -p "../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex"

PreBuild:


##
## Objects
##
../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex/main.cpp$(ObjectSuffix): main.cpp ../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/carolsand/development/cis252SMCD/week7Assingments/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex/main.cpp$(ObjectSuffix) -MF../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex/main.cpp$(DependSuffix) -MM main.cpp

../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex/main.cpp$(PreprocessSuffix) main.cpp


-include ../../week7Assingments/build-$(ConfigurationName)/__/week7CarolSandersProg2ArrTemplates_ex/week7CarolSandersProg2ArrTemplates_ex//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


