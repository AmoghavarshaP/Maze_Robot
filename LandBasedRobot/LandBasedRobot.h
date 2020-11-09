/** @file LandBasedRobot.h
* Group 4
* @authors
* Prateek Bhargava : UID - 116947992
* Amoghavarsha Prasanna : UID - 116952910
*
* @section File Description
* In this file using single public inheritence we create the following classes:
* LandBasedRobot abstract class being the base class
* Two derived classes: landbasedwheeled and landbasedtracked which share the attributes and
* methods for the base class
*/



#ifndef MAZE_ROBOT_LANDBASEDROBOT_H
#define MAZE_ROBOT_LANDBASEDROBOT_H



#include <iostream>
#include <string>


namespace rwa3 {
    class LandBasedRobot {

//Attributes
    protected:
        std::string name_ ;     // Name of the robot
        double speed_ ;         // Driving speed of the robot
        double width_ ;         // Width of the base of the robot
        double length_ ;        // Length of the base of the robot
        double height_ ;        // Height of the base of the robot
        double capacity_ ;      // Payload of the arm
        int x_ ;                // X coordinate of the robot in the maze
        int y_ ;                // Y coordinate of the robot in the maze

//Methods
    public:
        /**
         * @brief Virtual is a member function which moves the robot up
         * @param int x_
         * @param int y_
         */
        virtual void GoUp(int x_,int y_) = 0;

        /**
         * @brief Virtual is a member function which moves the robot down
         * @param int x_
         * @param int y_
         */
        virtual void GoDown(int x_,int y_) = 0;


        /**
         * @brief Virtual is a member function which moves the robot left
         * @param int x_
         * @param int y_
         */
        virtual void TurnLeft(int x_,int y_) = 0;

        /**
         * @brief Virtual is a member function which moves the robot right
         * @param int x_
         * @param int y_
         */
        virtual void TurnRight(int x_,int y_) = 0;

        /**
         * @brief Virtual is a member function which picks up an object
         * @param string
         */
        virtual void PickUp(std::string) = 0;

        /**
         * @brief Virtual is a member function which releases an object
         * @param string
         */
        virtual void Release(std::string) = 0;


    public:
        // constructor

        /**
         * @brief is a constructor of the class LandBasedRobot
         * @param string name
         * @param int x
         * @param int y
         */
        LandBasedRobot(std::string name, int x, int y){
            name =  name_;
            x = x_;
            y = y_;
        }

        // destructor

        /**
         * @brief a destructor of the class LandBasedRobot and deletes the objects created
         * @param none
         */
        ~LandBasedRobot(){}

    public:
        // mutators

        /**
         * @brief is a method to set the x co-ordinate
         * @param int x
         */
        void set_x(int x){
            x = x_;
        }

        /**
         * @brief is a method to set the y co-ordinate
         * @param int y_
         */
        void set_y(int y){
            y = y_;
        }


        // accessors

        /**
         * @brief is a method to get the x coordinate of a robot
         * @param none
         * @return Returns int x
         */
        int get_x() const{
            return x_;
        }

        /**
         * @brief is a method to get the y coordinate of a robot
         * @param none
         * @return Returns int y
         */
        int get_y() const{
            return y_;
        }
    };
}



#endif //MAZE_ROBOT_LANDBASEDROBOT_H
