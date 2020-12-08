/** @file landbasedtracked.h
* Group 4
* @authors
* Prateek Bhargava : UID - 116947992
* Amoghavarsha Prasanna : UID - 116952910
*
* @version 1.0
*
* @section File Description
* This is a header file for the concrete class LandBasedTracked which inherits the base class
* LandBasedRobot. Then the attributes and method prototypes are declared.
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
        std::string track_type;          // Type of track mounted on the robot

    public:

        /**
			* @brief Constructor containing 10 parameters of the class: LandBasedTracked.
			* @param name
			* @param speed
			* @param width
			* @param length
			* @param height
			* @param capacity
			* @param x
			* @param y
			* @param direction
            * @param track_type
			* @return none
			*/
        // Constructor
        LandBasedTracked(std::string name="Prateek", double speed=0, double width=0, double length=0, double height=0, double capacity=0, int x=0, int y=0, char direction='g', std::string track_type="flat"):
                LandBasedRobot(name, speed, width, length, height, capacity, x, y, direction), track_type{track_type}{}

        // Destructor
        /**
        * @brief Destructor of the class LandBasedTracked which deletes the objects created before
        * @param none
        * @return none
        */
        virtual ~LandBasedTracked(){}

        virtual char GetDirection() override;
        virtual void MoveForward() override;
        virtual void TurnLeft() override;
        virtual void TurnRight() override;
        virtual void PickUp(std::string string) override;
        virtual void Release(std::string string) override;

        /**
        * @brief It is a getter of the class: LandBasedTracked
        * Used to obtain the x co-ordinate of the robot.
        * @param none
        * @return The x co-ordinate of the robot
        */
        int get_x(){
            return x_;
        }

        /**
        * @brief It is a getter of the class: LandBasedTracked
        * Used to obtain the y co-ordinate of the robot.
        * @param none
        * @return The y co-ordinate of the robot
        */
        int get_y(){
            return y_;
        }

    };
}


