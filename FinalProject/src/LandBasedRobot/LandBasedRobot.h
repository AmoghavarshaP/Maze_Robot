//
// Created by amoghavarsha on 11/28/20.
//

#ifndef FINALPROJECTNAVIGATION_LANDBASEDROBOT_H
#define FINALPROJECTNAVIGATION_LANDBASEDROBOT_H


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
        LandBasedRobot(): name_{},speed_ {}, width_ {}, length_ {}, height_ {}, capacity_ {},  x_ {10}, y_ {0}, direction_{'N'}{}

        LandBasedRobot(std::string &name, double speed, double width, double length, double height, double capacity,
                       int x, int y, char direction) :
                name_{name}, speed_{speed}, width_{width}, length_{length}, height_{height}, capacity_{capacity}, x_{x},
                y_{y}, direction_{direction} {}

        // Destructors
        ~LandBasedRobot() = default;

        // Method Prototypes
        virtual char GetDirection() = 0;
        virtual void MoveForward(int x, int y, char direction) = 0;
        virtual void TurnLeft() = 0;
        virtual void TurnRight() = 0;
        virtual void PickUp(std::string string) = 0;
        virtual void Release(std::string string) = 0;

        // Mutators
        virtual void setName(std::string name);
        virtual void setSpeed(double speed);
        virtual void setWidth(double width);
        virtual void setLength(double length);
        virtual void setHeight(double height);
        virtual void setCapacity(double capacity);
        virtual void set_x_(int x);
        virtual void set_y_(int y);
        virtual void set_direction_(char direction);

        // Accessors
        virtual const std::string &getName() const;
        virtual double getSpeed() const;
        virtual double getWidth() const;
        virtual double getLength() const;
        virtual double getHeight() const;
        virtual double getCapacity() const;
        virtual int get_x_() const;
        virtual int get_y_() const;
        virtual char get_direction_() const;

    };
}


#endif //FINALPROJECTNAVIGATION_LANDBASEDROBOT_H
