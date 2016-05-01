################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Main.cpp \
../src/Misc.cpp \
../src/Pyramid.cpp \
../src/TerrainGen.cpp \
../src/World.cpp 

OBJS += \
./src/Main.o \
./src/Misc.o \
./src/Pyramid.o \
./src/TerrainGen.o \
./src/World.o 

CPP_DEPS += \
./src/Main.d \
./src/Misc.d \
./src/Pyramid.d \
./src/TerrainGen.d \
./src/World.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


