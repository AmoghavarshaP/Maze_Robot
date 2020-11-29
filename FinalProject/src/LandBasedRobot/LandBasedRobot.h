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
        char direction_;        // direction of the robot

//Methods
    public:
        virtual char GetDirection()=0;

        virtual void MoveForward()=0;

        virtual void TurnLeft()=0;

        virtual void TurnRight()=0;


        LandBasedRobot(std::string name , int x , int y){
            name =  name_;
            x = x_;
            y = y_;
        };


        ~LandBasedRobot(){}
    };
}


#endif //FINALPROJECTNAVIGATION_LANDBASEDROBOT_H
