/**
* @file landbasedwheeled.h
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

#pragma once

#include <iostream>
#include <memory>
#include "../LandBasedRobot/LandBasedRobot.h"


namespace fp {
    /**
     * @brief Derived class definition for LandBasedWheeled Robot
     * It contains its respective methods and attributes
     */
    class LandBasedWheeled: public LandBasedRobot{
        //--Attributes

    protected:
        int wheel_number; /** Number of wheels mounted on the robot */


    //--Methods
    public:


        // Constructor
        LandBasedWheeled(std::string name="Micro", double speed=0, double width=0, double length=0, double height=0, double capacity=0, int x=0, int y=0, char direction='g', int wheel_number=2):
                LandBasedRobot(name, speed, width, length, height, capacity, x, y, direction), wheel_number{wheel_number}{}

        // Destructor
        /**
       * @brief Destructor of the class LandBasedWheeled which deletes the objects created before
       * @param string name
       * @param int x
       * @param int y
       */
        virtual ~LandBasedWheeled(){}
        virtual void MoveForward() override;
        virtual char GetDirection() override;
        virtual void TurnLeft() override;
        virtual void TurnRight() override;
        virtual void PickUp(std::string string) override;
        virtual void Release(std::string string) override;
        int getWheelNumber() const;
        int setWheelNumber(int wheel_number);
        int get_x() const;
        int get_y() const;
        void SpeedUp(int);



    };
}



