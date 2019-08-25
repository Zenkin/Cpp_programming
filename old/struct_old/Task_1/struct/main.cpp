#include "drone.h"

int main() {
    Drone drone;

    drone.speed.linear.x = 1;
    drone.speed.rotation.z = 1;

    std::cout << "Drone_linear_x_speed: " << drone.speed.linear.x << std::endl;
    std::cout << "Drone_rotation_z_speed: " << drone.speed.rotation.z << std::endl;
}
