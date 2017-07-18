################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Include/mpc_file/acado_auxiliary_functions.c \
../Include/mpc_file/acado_integrator.c \
../Include/mpc_file/acado_qpoases3_interface.c \
../Include/mpc_file/acado_solver.c 

OBJS += \
./Include/mpc_file/acado_auxiliary_functions.o \
./Include/mpc_file/acado_integrator.o \
./Include/mpc_file/acado_qpoases3_interface.o \
./Include/mpc_file/acado_solver.o 

C_DEPS += \
./Include/mpc_file/acado_auxiliary_functions.d \
./Include/mpc_file/acado_integrator.d \
./Include/mpc_file/acado_qpoases3_interface.d \
./Include/mpc_file/acado_solver.d 


# Each subdirectory must supply rules for building sources it contributes
Include/mpc_file/%.o: ../Include/mpc_file/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	arm-poky-linux-gnueabi-gcc  -march=armv7-a -mfloat-abi=hard -mfpu=neon -mtune=cortex-a9 --sysroot=/home/lwang/my-imx6/05_cross/fsl-imx-x11/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi -std=c99 -D__ARM_PCS_VFP -I/home/lwang/my-imx6/05_cross/fsl-imx-x11/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi/usr/include -I/home/lwang/my-imx6/05_cross/fsl-imx-x11/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi/usr/include/c++/4.9.2 -I/home/lwang/my-imx6/05_cross/fsl-imx-x11/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi/usr/include/c++/4.9.2/arm-poky-linux-gnueabi -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/include -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/mpc_file -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/mpc_file/qpoases3/include -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/mpc_file/qpoases3/include/qpOASES_e -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/mpc_file/qpoases3/include/qpOASES_e/extra -I/home/lwang/boost/boost_1_61_0 -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/dependency/inertial_lidar -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


