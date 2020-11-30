/**
* @file landbasedtracked.cpp
* @authors
* Group 4
* Prateek Bhargava, UID : 116947992
* Amoghavarsha Prasanna, UID : 116952910
*
* @version 1.0
*
* @section File Description
* Implementing the land based tracked class
*
*/

#include "landbasedtracked.h"
#include "../API/api.h"


// Implementation of Methods
char fp::LandBasedTracked::GetDirection() {
    std::cout << "GetDirection is called in LandBasedTracked \n";
    return (*this).direction_;
}

void fp::LandBasedTracked::MoveForward(int x, int y, char direction) {
    std::cout << "MoveForward is called in LandBasedTracked \n";
    fp::API::moveForward();
    (*this).set_x_(x);
    (*this).set_y_(y);
    (*this).set_direction_(direction);
}

void fp::LandBasedTracked::TurnLeft() {
    std::cout << "TurnLeft is called in LandBasedTracked\n";
    fp::API::turnLeft();
}

void fp::LandBasedTracked::TurnRight() {
    std::cout << "TurnRight is called in LandBasedTracked\n";
    fp::API::turnRight();
}

void fp::LandBasedTracked::PickUp(std::string string) {
    std::cout << "Pickup is called in LandBasedTracked \n"<<string<<std::endl;
}

void fp::LandBasedTracked::Release(std::string string) {
    std::cout << "Release is called in LandBasedTracked \n"<<string<<std::endl;
}

