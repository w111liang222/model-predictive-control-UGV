################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Include/src/subdir.mk
-include Include/mpc_file/qpoases3/src/subdir.mk
-include Include/mpc_file/subdir.mk
-include Include/dependency/inertial_lidar/udp/subdir.mk
-include Include/dependency/inertial_lidar/tcp/subdir.mk
-include Include/dependency/inertial_lidar/projection/subdir.mk
-include Include/dependency/inertial_lidar/device/base/subdir.mk
-include Include/dependency/inertial_lidar/device/subdir.mk
-include Include/dependency/inertial_lidar/decoder/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: MPC_CG

# Tool invocations
MPC_CG: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross G++ Linker'
	arm-poky-linux-gnueabi-g++  -march=armv7-a -mfloat-abi=hard -mfpu=neon -mtune=cortex-a9 --sysroot=/home/lwang/my-imx6/05_cross/fsl-imx-x11/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi -lpthread -L/home/lwang/boost/boost_1_61_0/stage/lib -o "MPC_CG" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C++_DEPS)$(OBJS)$(C_DEPS)$(CC_DEPS)$(CPP_DEPS)$(EXECUTABLES)$(CXX_DEPS)$(C_UPPER_DEPS) MPC_CG
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
