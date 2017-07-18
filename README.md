# Control steer and throttle of UGV to track the reference path based on model predictive controller


## Requirements
* C++ compiler (support C++11)
* boost library (version 1.61)
* inertial_lidar codes


## Getting started

* download boost library : contact 15lwang@tongji.edu.cn
* download arm-gcc cross-compiler : contact 15lwang@tongji.edu.cn
* install eclipse
* clone inertial_lidar project, then, put into Include/dependency directory

#### For Ubuntu Eclipse

* uncompress imx6-arm-gcc.tar.bz2
```
tar jxvf imx6-arm-gcc.tar.bz2
```

* modify configuration file, setup the environment variables
```
gedit environment-setup-cortexa9hf-vfp-neon-poky-linux-gnueabi
modify the related terms and save
source environment-setup-cortexa9hf-vfp-neon-poky-linux-gnueabi
```

* Open project
```
 ./eclipse
 File -> Import -> General -> Existing Projects into Workspace
 Select root directory -> browse(UGV_model_predictive_control directory) -> Finish
```

* configure the project and compile
```
 Right click the project -> Properties -> C/C++ General -> Paths and Symbols
 Modify Includes and Library Paths
 Run build(Release)
```

## Usage examples


## Help and Support
contact: 15lwang@tongji.edu.cn

