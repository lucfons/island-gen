################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Terrain/Heightmap.cpp \
../src/Terrain/Island.cpp 

OBJS += \
./src/Terrain/Heightmap.o \
./src/Terrain/Island.o 

CPP_DEPS += \
./src/Terrain/Heightmap.d \
./src/Terrain/Island.d 


# Each subdirectory must supply rules for building sources it contributes
src/Terrain/%.o: ../src/Terrain/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


