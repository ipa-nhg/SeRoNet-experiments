# SeRoNetTooling Collection - Ros Mixed Ports

From ROS deployed system platform to a SeRoNet joystick.

This exmaple shows a practical use case subscribing ROS to a SeRoNet publisher componets. For the exmaple we will use a ROS native platform, the Care-O-bot 3-4, and the driver of a Joystick on the SeRoNet side. This exmaple can be applicable to any ROS native base platform that use the standard message sensor_msgs/Joy to interactact via teleop with its drive module.


First we extract the model of the full system uing the runtime model extractor. Run together with the ROS master the following command line, for further information https://github.com/ipa-led/ros_graph_parser :

```
rosrun ros_graph_parser java_snapshot ros_model_file ros_system_file system_name package_name
 
```

To give a better understanding we will show for this tutorial an example using the simulation of the Care-O-bot 4-3:

```
sudo apt-get install ros-DISTRO-care-o-bot
roslaunch cob_bringup_sim robot.launch robot:=cob4-3 robot_env:=empty
```

Checkout the monitoring tool and extract the models:

```
mkdir -p my_workspace/src
cd my_workspace/src
catkin_init_workspace
git clone https://github.com/ipa-led/ros_graph_parser
cd ..
catkin_make
rosrun ros_graph_parser java_snapshot cob4-3.ros cob4-3.rossystem cob4-3 cob4-3
```

The folder **ros_graph_parser/result** will contain the output models. 


* Go to the Tooling
* import ros common object (button)
* create new Ros system
* Copy the resulted files... 

Or clone the repo and import the project: https://github.com/ipa-nhg/ros-model-examples/tree/master/RosSystems/cob4-3 

* Right click to the cob4_3.componentinterface
* press Generate ROS-SeRoNet mixed port
* select the joy subscriber interface


* Change to the component perspective
* create a new component: name: "ComponentJoyCob4_3" -> import dependencies: "CommBasicObjects" and "ROSCommon_msgs"
* copy the files undes cob4-3/src-gen/SeRoNetComponent (rosintefacespool and ComponentJoyCob4-3)
* generate code automatically
* open a terminal-> go to the path of the component project and:

```
cd smartsoft
mkdir build
cd build
cmake ..
make
```

* code modifications: https://github.com/ipa-nhg/SeRoNet-experiments/compare/cob4-3_preSolution...cob4-3_solution?expand=1 

and compile again
```
cd smartsoft/build
cmake ..
make
```


To execute:
```
roscore
```

```
roslaunch cob_bringup_sim robot.launch robot:=cob4-3 robot_env:=empty
```

go to ~/SOFTWARE/smartsoft:
```
cd ~/SOFTWARE/smartsoft
./startSmartSoftNamingService

```

connect our ps3 joystick
```
cd ~/SOFTWARE/smartsoft
./bin/SmartJoystickServer
```

```
cd ~/SOFTWARE/smartsoft
./bin/ComponentJoyCob4_3
```
