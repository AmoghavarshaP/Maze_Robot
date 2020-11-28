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

namespace rwa3 {
    /**
     * @brief Derived class definition for LandBasedTracked Robot
     * It contains its respective methods and attributes
     */
    class LandBasedTracked : public LandBasedRobot{
    protected:
        //--Attributes
        std::shared_ptr<std::string> track_type_;/**Type of track mounted on the robot */

    public:
        //--Methods prototypes
        virtual void GoUp(int x, int y) override ;

        virtual void GoDown(int x,int y) override;

        virtual void TurnLeft(int x, int y) override;

        virtual void TurnRight(int x ,int y) override;

        virtual void PickUp(std::string) override;

        virtual void Release(std::string) override;

    public:

        /**
         * @brief Constructor of the class LandBasedTracked
         * @param string name
         * @param int x
         * @param int y
         */

        LandBasedTracked(std::string name, int x, int y): LandBasedRobot(name_, x_, y_){
            name =  name_;
            x = x_;
            y = y_;
        }

        /**
        * @brief Destructor of the class LandBasedTracked which deletes the objects created before
        * @param string name
        * @param int x
        * @param int y
        */

        ~LandBasedTracked(){}
    };
}

#endif //FINALPROJECTNAVIGATION_LANDBASEDTRACKED_H
