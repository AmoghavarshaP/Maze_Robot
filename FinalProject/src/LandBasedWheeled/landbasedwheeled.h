/** @file landbasedwheeled.h
* Group 4
* @authors
* Prateek Bhargava : UID - 116947992
* Amoghavarsha Prasanna : UID - 116952910
*
* @version 1.0
*
* @section File Description
* This is a header file for the concrete class which inherits the base class
* LandBasedRobot. Then the attributes and method prototypes are declared.
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
            /**
			* @brief Constructor of the class: LandBasedWheeled, containing 10 parameters
			* @param name
			* @param speed
			* @param width
			* @param length
			* @param height
			* @param capacity
			* @param x
			* @param y
			* @param direction
            * @param wheel_
			* @return none
			*/
        // Constructor
        LandBasedWheeled(std::string name="Micro", double speed=0, double width=0, double length=0, double height=0, double capacity=0, int x=0, int y=0, char direction='g', int wheel_number=2):
                LandBasedRobot(name, speed, width, length, height, capacity, x, y, direction), wheel_number{wheel_number}{}

        // Destructor
        /**
       * @brief Destructor of the class LandBasedWheeled which deletes the objects created before
       * @param none
       * @return none
       */
        virtual ~LandBasedWheeled(){}

        virtual void MoveForward() override;
        virtual char GetDirection() override;
        virtual void TurnLeft() override;
        virtual void TurnRight() override;
        virtual void PickUp(std::string string) override;
        virtual void Release(std::string string) override;

        /**
        * @brief It is a getter of the class: LandBasedTracked
        * Used to obtain the wheel number of the robot.
        * @param none
        * @return none
        */
        int getWheelNumber() const;

        /**
        * @brief It is a setter of the class: LandBasedTracked
        * Used to set the wheel number of the robot.
        * @param wheel number
        * @return none
        */
        int setWheelNumber(int wheel_number);
        int get_x() const;
        int get_y() const;

        /**
         * @brief Virtual is a member function of class: LandBasedTracked.
         * Used to change the speed of the robot.
         * @param speed
         * @return none
         */
        void SpeedUp(int);



    };
}



