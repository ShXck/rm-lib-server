################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/memory_h/Cache.cpp \
../src/memory_h/MemoryHandler.cpp 

OBJS += \
./src/memory_h/Cache.o \
./src/memory_h/MemoryHandler.o 

CPP_DEPS += \
./src/memory_h/Cache.d \
./src/memory_h/MemoryHandler.d 


# Each subdirectory must supply rules for building sources it contributes
src/memory_h/%.o: ../src/memory_h/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/marcelo/Documents/libs/rapidjson/include/ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


