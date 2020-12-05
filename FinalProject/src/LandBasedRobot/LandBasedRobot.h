//
// Created by amoghavarsha on 11/28/20.
//

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


        LandBasedRobot(std::string name, double speed, double width, double length, double height, double capacity,
                       int x, int y, char direction) :
                name_{name}, speed_{speed}, width_{width}, length_{length}, height_{height}, capacity_{capacity}, x_{x},
                y_{y}, direction_{direction} {}

        // Destructors
        ~LandBasedRobot() = default;

        // Method Prototypes
        virtual char GetDirection() = 0;
        virtual void MoveForward() = 0;
        virtual void TurnLeft() = 0;
        virtual void TurnRight() = 0;
        virtual void PickUp(std::string string) = 0;
        virtual void Release(std::string string) = 0;
        virtual int get_x() const = 0;
        virtual int get_y() const = 0;



    };
}







