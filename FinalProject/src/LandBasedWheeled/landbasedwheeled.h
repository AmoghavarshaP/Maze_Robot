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


# include <iostream>
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
        virtual void GoUp(int x, int y) override ;

        virtual void GoDown(int x, int y) override ;

        virtual void TurnLeft(int x, int y) override ;

        virtual void TurnRight(int x, int y) override ;

        virtual void PickUp(std::string) override;

        virtual void Release(std::string) override;

    public:
        /**
        * @brief Constructor of the class LandBasedWheeled
        * @param string name
        * @param int x
        * @param int y
        */

        LandBasedWheeled(std::string name, int x, int y): LandBasedRobot(name_, x_, y_){
            name =  name_;
            x = x_;
            y = y_;
        }

        /**
        * @brief Destructor of the class LandBasedWheeled which deletes the objects created before
        * @param string name
        * @param int x
        * @param int y
        */
        ~LandBasedWheeled(){}
    };
}

#endif //FINALPROJECTNAVIGATION_LANDBASEDWHEELED_H
