################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Include/dependency/inertial_lidar/udp/UDPClient.cpp \
../Include/dependency/inertial_lidar/udp/UDPServer.cpp 

OBJS += \
./Include/dependency/inertial_lidar/udp/UDPClient.o \
./Include/dependency/inertial_lidar/udp/UDPServer.o 

CPP_DEPS += \
./Include/dependency/inertial_lidar/udp/UDPClient.d \
./Include/dependency/inertial_lidar/udp/UDPServer.d 


# Each subdirectory must supply rules for building sources it contributes
Include/dependency/inertial_lidar/udp/%.o: ../Include/dependency/inertial_lidar/udp/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-poky-linux-gnueabi-g++  -march=armv7-a -mfloat-abi=hard -mfpu=neon -mtune=cortex-a9 --sysroot=/home/lwang/my-imx6/05_cross/fsl-imx-x11/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi -std=c++11 -fopenmp -D__ARM_PCS_VFP -I/home/lwang/my-imx6/05_cross/fsl-imx-x11/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi/usr/include -I/home/lwang/my-imx6/05_cross/fsl-imx-x11/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi/usr/include/c++/4.9.2 -I/home/lwang/my-imx6/05_cross/fsl-imx-x11/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi/usr/include/c++/4.9.2/arm-poky-linux-gnueabi -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/include -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/mpc_file -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/mpc_file/qpoases3/include -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/mpc_file/qpoases3/include/qpOASES_e -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/mpc_file/qpoases3/include/qpOASES_e/extra -I/home/lwang/boost/boost_1_61_0 -I/home/lwang/my-imx6/VeCaNSVM/MPC_CG/Include/dependency/inertial_lidar -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


