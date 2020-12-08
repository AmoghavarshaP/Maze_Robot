/**
* @file LandBasedRobot.h
* @authors
* Group 4
* Prateek Bhargava, UID : 116947992
* Amoghavarsha Prasanna, UID : 116952910
*
* @version 1.0
*
* @section LICENSE
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of
* the License, or (at your option) any later version.
*
* @section DESCRIPTION
*
* This file contains the abstract class containing attributes and methods which are used by
* the derived classes: LandBasedTracked and LandBasedWheeled.
*
*/

#pragma once



#include <iostream>

namespace fp {
    class LandBasedRobot {

//Attributes
    protected:
        std::string name_;     // Name of the robot
        double speed_;         // Driving speed of the robot
        double width_;         // Width of the base of the robot
        double length_;        // Length of the base of the robot
        double height_;        // Height of the base of the robot
        double capacity_;      // Payload of the arm
        int x_;                // X coordinate of the robot in the maze
        int y_;                // Y coordinate of the robot in the maze
        char direction_;       // direction of the robot

//Methods
    public:
        /**
			* @brief constructor containing 9 parameters of the class: LandBasedRobot
			* The file initialises name_, x_ and y_
			* @param name
			* @param speed
			* @param width
			* @param length
			* @param height
			* @param capacity
			* @param x
			* @param y
			* @param direction
			* @return none
			*/
        LandBasedRobot(std::string name, double speed, double width, double length, double height, double capacity,
                       int x, int y, char direction) :
                name_{name}, speed_{speed}, width_{width}, length_{length}, height_{height}, capacity_{capacity}, x_{x},
                y_{y}, direction_{direction} {}

        // Destructors
        /**
         * @brief a destructor of the class LandBasedRobot and deletes the objects created
         * @param none
         */
        ~LandBasedRobot() = default;

        // Method Prototypes
        /**
         * @brief Virtual is a member function of class: LandBasedTracked.
         * Used to obtain the current robot direction.
         * @param none
         * @return none
         */
        virtual char GetDirection() = 0;

         /**
         * @brief Virtual is a member function of class: LandBasedTracked.
         * Used to move the robot forward.
         * @param none
         * @return none
         */
        virtual void MoveForward() = 0;

         /**
         * @brief Virtual is a member function of class: LandBasedTracked.
         * Used to turn the robot left.
         * @param none
         * @return none
         */
        virtual void TurnLeft() = 0;

        /**
         * @brief Virtual is a member function of class: LandBasedTracked.
         * Used to move turn the robot right.
         * @param none
         * @return none
         */
        virtual void TurnRight() = 0;

        /**
         * @brief Virtual is a member function of class: LandBasedTracked.
         * Used to pick up an object.
         * @param none
         * @return none
         */
        virtual void PickUp(std::string string) = 0;

        /**
         * @brief Virtual is a member function of class: LandBasedTracked.
         * Used to release up an object.
         * @param none
         * @return none
         */
        virtual void Release(std::string string) = 0;

        /**
         * @brief Virtual is a member function of class: LandBasedTracked.
         * Used to obtain x co-ordinate of the robot.
         * @param none
         * @return none
         */
        virtual int get_x() const = 0;

        /**
         * @brief Virtual is a member function of class: LandBasedTracked.
         * Used to obtain y co-ordinate of the robot.
         * @param none
         * @return none
         */
        virtual int get_y() const = 0;



    };
}







