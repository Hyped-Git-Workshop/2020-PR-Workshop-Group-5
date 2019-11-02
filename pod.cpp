#include<iostream>
#include "pod.hpp"

Pod::Pod()
{}

void Pod::decreaseSpeedBy10()
{
    max_speed_ -= 10;
}

void Pod::setName(std::string name)
{
    name_ = name;
}

void Pod::setMaxSpeed(double speed)
{
    if (speed < 0) {
        throw std::runtime_error("Speed is negative you doo doo");
    }

    max_speed_ = speed;
}

std::string Pod::getName()
{
    return name_;
}

double Pod::getMaxSpeed()
{
    return max_speed_;
}

int main(int argc, char* argv[])
{
    Pod my_pod {};

    std::string name;
    std::cout << "Enter name: ";
    std::cin >> name;
    my_pod.setName(name);

    double speed;
    std::cout << "Enter speed: ";
    std::cin >> speed;
    my_pod.setMaxSpeed(speed);

    std::cout << "Pod name: " << my_pod.getName() << "\n";
    std::cout << "Pod max speed: " << my_pod.getMaxSpeed() << "\n";
}
