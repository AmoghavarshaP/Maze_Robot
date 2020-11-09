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

#ifndef MAZE_ROBOT_LANDBASEDTRACKED_H
#define MAZE_ROBOT_LANDBASEDTRACKED_H


#include <string>
#include<iostream>
#include "../LandBasedRobot/LandBasedRobot.h"

namespace rwa3 {
    class LandBasedTracked : public LandBasedRobot{
    protected:
        // Attributes
        std::string *track_type_;       //  Type of track mounted on the robot

    public:
        // Methods prototypes

        /**
         * @brief Virtual method to Move the Robot Up in the Maze
         * @param int x  X co-ordinate of the robot
         * @param int y  Y co-ordinate of the robot
         */
        virtual void GoUp(int x, int y) override ;

        /**
         * @brief Virtual method to Move the Robot Down in the Maze
         * @param int x  X co-ordinate of the robot
         * @param int y  Y co-ordinate of the robot
         */
        virtual void GoDown(int x,int y) override;

        /**
         * @brief Virtual method to Turn the Robot Left in the Maze
         * @param int x  X co-ordinate of the robot
         * @param int y  Y co-ordinate of the robot
         */
        virtual void TurnLeft(int x, int y) override;

        /**
         * @brief Virtual method to Turn the Robot Right in the Maze
         * @param int x  X co-ordinate of the robot
         * @param int y  Y co-ordinate of the robot
         */
        virtual void TurnRight(int x ,int y) override;

        /**
         * @brief Virtual method that instructs the robot arm to pick the object
         * @param string
         */
        virtual void PickUp(std::string) override;

        /**
         * @brief Virtual method that instructs the robot arm to release an object
         * @param string
         */
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

#endif //MAZE_ROBOT_LANDBASEDTRACKED_H
