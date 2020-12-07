/**
* @file landbasedtracked.h
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
#pragma once

#include<iostream>
#include<memory>
#include "../LandBasedRobot/LandBasedRobot.h"

namespace fp {
    /**
     * @brief Derived class definition for LandBasedTracked Robot
     * It contains its respective methods and attributes
     */
    class LandBasedTracked : public LandBasedRobot{
    protected:
        // Attributes
        std::string track_type;/**Type of track mounted on the robot */

    public:

        // Constructor
        LandBasedTracked(std::string name="Prateek", double speed=0, double width=0, double length=0, double height=0, double capacity=0, int x=0, int y=0, char direction='g', std::string track_type="flat"):
                LandBasedRobot(name, speed, width, length, height, capacity, x, y, direction), track_type{track_type}{}

        // Destructor
        virtual ~LandBasedTracked(){}

        virtual char GetDirection() override;
        virtual void MoveForward() override;
        virtual void TurnLeft() override;
        virtual void TurnRight() override;
        virtual void PickUp(std::string string) override;
        virtual void Release(std::string string) override;
        int get_x(){
            return x_;
        }
        int get_y(){
            return y_;
        }

    };
}


