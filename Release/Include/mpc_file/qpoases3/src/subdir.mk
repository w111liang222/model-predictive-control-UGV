################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Include/mpc_file/qpoases3/src/Bounds.c \
../Include/mpc_file/qpoases3/src/Constraints.c \
../Include/mpc_file/qpoases3/src/Flipper.c \
../Include/mpc_file/qpoases3/src/Indexlist.c \
../Include/mpc_file/qpoases3/src/Matrices.c \
../Include/mpc_file/qpoases3/src/MessageHandling.c \
../Include/mpc_file/qpoases3/src/OQPinterface.c \
../Include/mpc_file/qpoases3/src/Options.c \
../Include/mpc_file/qpoases3/src/QProblem.c \
../Include/mpc_file/qpoases3/src/QProblemB.c \
../Include/mpc_file/qpoases3/src/Utils.c 

OBJS += \
./Include/mpc_file/qpoases3/src/Bounds.o \
./Include/mpc_file/qpoases3/src/Constraints.o \
./Include/mpc_file/qpoases3/src/Flipper.o \
./Include/mpc_file/qpoases3/src/Indexlist.o \
./Include/mpc_file/qpoases3/src/Matrices.o \
./Include/mpc_file/qpoases3/src/MessageHandling.o \
./Include/mpc_file/qpoases3/src/OQPinterface.o \
./Include/mpc_file/qpoases3/src/Options.o \
./Include/mpc_file/qpoases3/src/QProblem.o \
./Include/mpc_file/qpoases3/src/QProblemB.o \
./Include/mpc_file/qpoases3/src/Utils.o 

C_DEPS += \
./Include/mpc_file/qpoases3/src/Bounds.d \
./Include/mpc_file/qpoases3/src/Constraints.d \
./Include/mpc_file/qpoases3/src/Flipper.d \
./Include/mpc_file/qpoases3/src/Indexlist.d \
./Include/mpc_file/qpoases3/src/Matrices.d \
./Include/mpc_file/qpoases3/src/MessageHandling.d \
./Include/mpc_file/qpoases3/src/OQPinterface.d \
./Include/mpc_file/qpoases3/src/Options.d \
./Include/mpc_file/qpoases3/src/QProblem.d \
./Include/mpc_file/qpoases3/src/QProblemB.d \
./Include/mpc_file/qpoases3/src/Utils.d 


# Each subdirectory must supply rules for building sources it contributes
Include/mpc_file/qpoases3/src/%.o: ../Include/mpc_file/qpoases3/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	arm-poky-linux-gnueabi-gcc  -march=armv7-a -mfloat-abi=hard -mfpu=neon -mtune=cortex-a9 --sysroot=/home/lwang/my-imx6/05_cross/fsl-imx-x11/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi -std=c99 -D__ARM_PCS_VFP -I/home/lwang/my-imx6/05_cross/fsl-imx-x11/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi/usr/include -I/home/lwang/my-imx6/05_cross/fsl-imx-x11/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi/usr/include/c++/4.9.2 -I/home/lwang/my-imx6/05_cross/fsl-imx-x11/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi/usr/include/c++/4.9.2/arm-poky-linux-gnueabi -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/include -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/mpc_file -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/mpc_file/qpoases3/include -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/mpc_file/qpoases3/include/qpOASES_e -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/mpc_file/qpoases3/include/qpOASES_e/extra -I/home/lwang/boost/boost_1_61_0 -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/dependency/inertial_lidar -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


