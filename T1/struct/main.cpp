#include <iostream>
#include "struct.h"

int main() {

    /// Drone drone;
    Drone Drone;

    Drone.Speed.linear.x = 1;
    Drone.Speed.rotation.z = 1;

    std::cout << "Drone_linear_x_speed: " << Drone.Speed.linear.x << std::endl;
    std::cout << "Drone_rotation_z_speed: " << Drone.Speed.rotation.z << std::endl;

}
