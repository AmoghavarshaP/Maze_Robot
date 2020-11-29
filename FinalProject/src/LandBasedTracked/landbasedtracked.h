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


#ifndef FINALPROJECTNAVIGATION_LANDBASEDTRACKED_H
#define FINALPROJECTNAVIGATION_LANDBASEDTRACKED_H


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
        //--Attributes
        std::shared_ptr<std::string> track_type_;/**Type of track mounted on the robot */

    public:
        virtual char GetDirection() override;

        virtual void MoveForward() override;

        virtual void TurnLeft() override;

        virtual void TurnRight() override;

        LandBasedTracked(std::string name, int x, int y): LandBasedRobot(name_, x_, y_){
            name =  name_;
            x = x_;
            y = y_;
        }


        ~LandBasedTracked(){}
    };
}

#endif //FINALPROJECTNAVIGATION_LANDBASEDTRACKED_H
