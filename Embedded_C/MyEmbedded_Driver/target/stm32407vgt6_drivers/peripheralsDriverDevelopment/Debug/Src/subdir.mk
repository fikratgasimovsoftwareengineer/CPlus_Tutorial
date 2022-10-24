################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/led_ext_button.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/led_ext_button.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/led_ext_button.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -I"/home/fikrat/CPlus_Tutorial/Embedded_C/MyEmbedded_Driver/target/stm32407vgt6_drivers/peripheralsDriverDevelopment/drivers/Src" -I"/home/fikrat/CPlus_Tutorial/Embedded_C/MyEmbedded_Driver/target/stm32407vgt6_drivers/peripheralsDriverDevelopment/drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/led_ext_button.d ./Src/led_ext_button.o ./Src/led_ext_button.su ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

