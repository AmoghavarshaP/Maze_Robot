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

int fp::LandBasedWheeled::get_x() const {
    return x_;
}

int fp::LandBasedWheeled::get_y() const {
    return y_;
}

void fp::LandBasedWheeled::MoveForward() {
    if(fp::LandBasedWheeled::GetDirection() == 'W'){
        x_ = x_ - 1;
        y_ = y_ ;
    }
    else if(fp::LandBasedWheeled::GetDirection() == 'N'){
        x_ = x_;
        y_ = y_ + 1;
    }
    else if(fp::LandBasedWheeled::GetDirection() == 'E'){
        x_ = x_ + 1;
        y_ = y_ ;
    }
    else if(fp::LandBasedWheeled::GetDirection() == 'S'){
        x_ = x_ ;
        y_ = y_ - 1;
    }
    std::cout << "MoveForward is called in LandBasedWheeled\n";
    fp::API::moveForward();
}

void fp::LandBasedWheeled::TurnLeft() {
    if(fp::LandBasedWheeled::GetDirection() == 'W')
        direction_ = 'S';
    else if(fp::LandBasedWheeled::GetDirection() == 'N')
        direction_ = 'W';
    else if(fp::LandBasedWheeled::GetDirection() == 'E')
        direction_ = 'N';
    else if(fp::LandBasedWheeled::GetDirection() == 'S')
        direction_ = 'E';
    std::cout << "LandBasedWheeled::TurnLeft is called\n";
    fp::API::turnLeft();
}

void fp::LandBasedWheeled::TurnRight() {
    if(fp::LandBasedWheeled::GetDirection() == 'W')
        direction_ = 'N';
    else if(fp::LandBasedWheeled::GetDirection() == 'N')
        direction_ = 'E';
    else if(fp::LandBasedWheeled::GetDirection() == 'E')
        direction_ = 'S';
    else if(fp::LandBasedWheeled::GetDirection() == 'S')
        direction_ = 'W';
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

