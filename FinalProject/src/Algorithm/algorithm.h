/**
* @file algorithm.h
* @authors
* Group 4
* Prateek Bhargava, UID : 116947992
* Amoghavarsha Prasanna, UID : 116952910
*
* @version 1.0
*
* @section File Description
* Implementing algorithm class
*
*/
#pragma once

#include <iostream>
#include <stack>
#include <memory>
#include "../LandBasedTracked/landbasedtracked.h"
#include "../LandBasedWheeled/landbasedwheeled.h"
#include "../Maze/maze.h"



namespace fp {
    class Algorithm {
    public:
        bool CheckGoal(int x,int y);

        void SolveDFS(std::shared_ptr<fp::LandBasedRobot> robot);

        void MoveRobot(std::shared_ptr<fp::LandBasedRobot> robot, int x, int y, char direction);

    private:
        std::stack<int> rows;
        std::stack<int> cols;








    };

}