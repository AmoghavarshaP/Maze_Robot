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


#ifndef FINALPROJECTNAVIGATION_LANDBASEDWHEELED_H
#define FINALPROJECTNAVIGATION_LANDBASEDWHEELED_H


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
        int wheel_number_; /** Number of wheels mounted on the robot */
        std::shared_ptr<std::string> wheel_type_; /** Type of wheels mounted on the robot */

    //--Methods
    public:
        LandBasedWheeled():LandBasedRobot(), wheel_number_{}, wheel_type_{nullptr}{}

        // Constructor
        LandBasedWheeled(std::string name, double speed, double width, double length, double height, double capacity, int x, int y, char direction, int wheel_number, std::shared_ptr<std::string> wheel_type):
                LandBasedRobot(name, speed, width, length, height, capacity, x, y, direction), wheel_number_{wheel_number}, wheel_type_{std::move(wheel_type)}{}

        // Destructor
        /**
       * @brief Destructor of the class LandBasedWheeled which deletes the objects created before
       * @param string name
       * @param int x
       * @param int y
       */
        ~LandBasedWheeled()= default;
        virtual void MoveForward(int x, int y, char direction) override;
        virtual char GetDirection() override;
        virtual void TurnLeft() override;
        virtual void TurnRight() override;
        virtual void PickUp(std::string string) override;
        virtual void Release(std::string string) override;

        // Accessors
        int getWheelNumber() const;

        // Mutators
        void setWheelNumber(int wheelNumber);

    };
}

#endif //FINALPROJECTNAVIGATION_LANDBASEDWHEELED_

