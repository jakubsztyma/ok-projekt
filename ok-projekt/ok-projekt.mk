##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=ok-projekt
ConfigurationName      :=Debug
WorkspacePath          :=/home/jakub/Desktop/Studia/ok-projekt/ok-projekt
ProjectPath            :=/home/jakub/Desktop/Studia/ok-projekt/ok-projekt
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=jakub
Date                   :=16/11/16
CodeLitePath           :=/home/jakub/.codelite
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="ok-projekt.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
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
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/up_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_generator.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/up_main.cpp$(ObjectSuffix): ../main.cpp $(IntermediateDirectory)/up_main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jakub/Desktop/Studia/ok-projekt/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_main.cpp$(DependSuffix): ../main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_main.cpp$(DependSuffix) -MM ../main.cpp

$(IntermediateDirectory)/up_main.cpp$(PreprocessSuffix): ../main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_main.cpp$(PreprocessSuffix)../main.cpp

$(IntermediateDirectory)/up_generator.cpp$(ObjectSuffix): ../generator.cpp $(IntermediateDirectory)/up_generator.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jakub/Desktop/Studia/ok-projekt/generator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_generator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_generator.cpp$(DependSuffix): ../generator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_generator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_generator.cpp$(DependSuffix) -MM ../generator.cpp

$(IntermediateDirectory)/up_generator.cpp$(PreprocessSuffix): ../generator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_generator.cpp$(PreprocessSuffix)../generator.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


