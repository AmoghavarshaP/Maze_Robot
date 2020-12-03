/**
* @file landbasedwheeled.cpp
* @authors
* Group 4
* Prateek Bhargava, UID : 116947992
* Amoghavarsha Prasanna, UID : 116952910
*
* @version 1.0
*
* @section File Description
* Implementing the land based wheeled class
*
*/

#include "landbasedwheeled.h"
#include "../API/api.h"

// Method Definitions
char fp::LandBasedWheeled::GetDirection() {
    std::cout << "GetDirection is called in LandBasedWheeled\n";
    return direction_;
}

void fp::LandBasedWheeled::MoveForward(int x, int y, char direction) {
    std::cout << "MoveForward is called in LandBasedWheeled\n";
    fp::API::moveForward();
    set_x_(x);
    set_y_(y);
    set_direction_(direction);
}

void fp::LandBasedWheeled::TurnLeft() {
    std::cout << "LandBasedWheeled::TurnLeft is called\n";
    fp::API::turnLeft();
}

void fp::LandBasedWheeled::TurnRight() {
    std::cout << "LandBasedWheeled::TurnRight is called\n";
    fp::API::turnRight();
}

void fp::LandBasedWheeled::PickUp(std::string string) {
    std::cout << "LandBasedWheeled::Pickup the payload is called\n"<<string<<std::endl;
}

void fp::LandBasedWheeled::Release(std::string string) {
    std::cout << "LandBasedWheeled::Release payload is called\n"<<string<<std::endl;
}

// Accessors
int fp::LandBasedWheeled::getWheelNumber() const {
    return wheel_number_;
}

// Mutators
void fp::LandBasedWheeled::setWheelNumber(int wheelNumber) {
    wheel_number_ = wheelNumber;
}

