################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/subject2/ejercicio1_2.c 

C_DEPS += \
./src/subject2/ejercicio1_2.d 

OBJS += \
./src/subject2/ejercicio1_2.o 


# Each subdirectory must supply rules for building sources it contributes
src/subject2/%.o: ../src/subject2/%.c src/subject2/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-subject2

clean-src-2f-subject2:
	-$(RM) ./src/subject2/ejercicio1_2.d ./src/subject2/ejercicio1_2.o

.PHONY: clean-src-2f-subject2

