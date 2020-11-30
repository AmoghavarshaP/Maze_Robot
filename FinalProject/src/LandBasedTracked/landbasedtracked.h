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
        // Attributes
        std::shared_ptr<std::string> track_type_;/**Type of track mounted on the robot */

    public:
        LandBasedTracked():LandBasedRobot(), track_type_{nullptr}{}
        // Constructor
        LandBasedTracked(std::string name, double speed, double width, double length, double height, double capacity, int x, int y, char direction, std::shared_ptr<std::string> track_type):
                LandBasedRobot(name, speed, width, length, height, capacity, x, y, direction), track_type_{std::move(track_type)}{ }

        // Destructor
        ~LandBasedTracked()= default;

        virtual char GetDirection() override;
        virtual void MoveForward(int x, int y, char direction) override;
        virtual void TurnLeft() override;
        virtual void TurnRight() override;
        virtual void PickUp(std::string string) override;
        virtual void Release(std::string string) override;

    };
}

#endif //FINALPROJECTNAVIGATION_LANDBASEDTRACKED_H
