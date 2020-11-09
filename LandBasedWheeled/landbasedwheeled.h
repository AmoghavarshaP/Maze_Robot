/** @file landbasedwheeled.h
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
#ifndef MAZE_ROBOT_LANDBASEDWHEELED_H
#define MAZE_ROBOT_LANDBASEDWHEELED_H

# include <iostream>
#include <memory>
#include "../LandBasedRobot/LandBasedRobot.h"


namespace rwa3 {
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

#endif //MAZE_ROBOT_LANDBASEDWHEELED_H
