################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Terrain/FastNoise/FastNoise.cpp 

OBJS += \
./src/Terrain/FastNoise/FastNoise.o 

CPP_DEPS += \
./src/Terrain/FastNoise/FastNoise.d 


# Each subdirectory must supply rules for building sources it contributes
src/Terrain/FastNoise/%.o: ../src/Terrain/FastNoise/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


