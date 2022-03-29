################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/subject1/ejercicio1_1.c 

C_DEPS += \
./src/subject1/ejercicio1_1.d 

OBJS += \
./src/subject1/ejercicio1_1.o 


# Each subdirectory must supply rules for building sources it contributes
src/subject1/%.o: ../src/subject1/%.c src/subject1/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-subject1

clean-src-2f-subject1:
	-$(RM) ./src/subject1/ejercicio1_1.d ./src/subject1/ejercicio1_1.o

.PHONY: clean-src-2f-subject1

