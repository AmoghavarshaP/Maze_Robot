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

#include <iostream>
#include "../LandBasedRobot/LandBasedRobot.h"
#include "landbasedtracked.h"
#include "../API/api.h"



// Implementation of Methods
char fp::LandBasedTracked::GetDirection() {
    std::cout << "GetDirection is called in LandBasedTracked \n";
    return direction_;
}

void fp::LandBasedTracked::MoveForward() {
    if(fp::LandBasedTracked::GetDirection() == 'W'){
        x_ = x_ - 1;
        y_ = y_ ;
    }
    else if(fp::LandBasedTracked::GetDirection() == 'N'){
        x_ = x_;
        y_ = y_ + 1;
    }
    else if(fp::LandBasedTracked::GetDirection() == 'E'){
        x_ = x_ + 1;
        y_ = y_ ;
    }
    else if(fp::LandBasedTracked::GetDirection() == 'S'){
        x_ = x_ ;
        y_ = y_ - 1;
    }
    fp::API::moveForward();
    std::cout << "MoveForward is called in LandBasedTracked \n";
}

void fp::LandBasedTracked::TurnLeft() {
    if(fp::LandBasedTracked::GetDirection() == 'W')
        direction_ = 'S';
    else if(fp::LandBasedTracked::GetDirection() == 'N')
        direction_ = 'W';
    else if(fp::LandBasedTracked::GetDirection() == 'E')
        direction_ = 'N';
    else if(fp::LandBasedTracked::GetDirection() == 'S')
        direction_ = 'E';
    std::cout << "TurnLeft is called in LandBasedTracked\n";
    fp::API::turnLeft();
}

void fp::LandBasedTracked::TurnRight() {
    if(fp::LandBasedTracked::GetDirection() == 'W')
        direction_ = 'N';
    else if(fp::LandBasedTracked::GetDirection() == 'N')
        direction_ = 'E';
    else if(fp::LandBasedTracked::GetDirection() == 'E')
        direction_ = 'S';
    else if(fp::LandBasedTracked::GetDirection() == 'S')
        direction_ = 'W';
    std::cout << "TurnRight is called in LandBasedTracked\n";
    fp::API::turnRight();
}

void fp::LandBasedTracked::PickUp(std::string string) {
    std::cout << "Pickup is called in LandBasedTracked \n"<<string<<std::endl;
}

void fp::LandBasedTracked::Release(std::string string) {
    std::cout << "Release is called in LandBasedTracked \n"<<string<<std::endl;
}

