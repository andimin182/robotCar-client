FROM ros:foxy

# rosbridge
RUN apt-get update && apt-get install -y ros-${ROS_DISTRO}-rosbridge-server

# Opencv
RUN apt-get install -y ros-${ROS_DISTRO}-vision-opencv

# cv bridge
RUN apt-get install -y ros-${ROS_DISTRO}-cv-bridge


# image-transport
RUN apt-get install -y ros-$ROS_DISTRO-image-transport

# Install dependencies
RUN apt-get update && apt-get install -y \
    python3-colcon-common-extensions \
    python3-rosdep \
    python3-rosinstall \
    python3-rosinstall-generator \
    python3-wstool \
    build-essential

# Customization
WORKDIR /root/dev_ws/src
WORKDIR /root/dev_ws

# Source the first layer
RUN /bin/bash -c "source /opt/ros/$ROS_DISTRO/setup.bash"

# Add the source command to .bashrc
RUN echo "source /opt/ros/$ROS_DISTRO/setup.bash" >> /root/.bashrc

# Define the ENV variables
ENV PYTHONPATH=${PYTHONPATH}:/opt/ros/foxy/lib/py

ENV CMAKE_PREFIX_PATH=$CMAKE_PREFIX_PATH:/opt/ros/$ROS_DISTRO
ENV CMAKE_MODULE_PATH=/opt/ros/$ROS_DISTRO/share/ament_cmake/cmake
ENV CMAKE_MAKE_PROGRAM=/usr/bin/make
ENV CMAKE_C_COMPILER=/usr/bin/gcc
ENV CMAKE_CXX_COMPILER=/usr/bin/g++

ENV ROS_DOMAIN_ID=5
# Set the ament_cmake_DIR variable
ENV ament_cmake_DIR /opt/ros/$ROS_DISTRO/share/ament_cmake/cmake

# Build the ROS2 workspace
# 1) First build the custom_interface_msgs and source it
RUN colcon build --packages-select custom_interface_msgs

# Source the second layer
RUN /bin/bash -c "source /root/dev_ws/install/setup.bash"

# Add the source command to .bashrc
RUN echo "source /root/dev_ws/install/setup.bash" >> /root/.bashrc

# 2) Finish building the other packages
RUN colcon build --packages-select custom_camera_pkg custom_control_pkg
# Re source the second layer
RUN /bin/bash -c "source /root/dev_ws/install/setup.bash"

#COPY ros2_entrypoint.sh /root/.
#ENTRYPOINT ["/root/ros2_entrypoint.sh"]
CMD ["bash"]