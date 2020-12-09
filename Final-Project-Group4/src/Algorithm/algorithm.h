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
#include <map>



namespace fp {
    class Algorithm{
    public:
        /**
         * @brief Algorithm Constructor that is used to initialize the attributes for the algorithm
         */
        Algorithm(){
            row =0;
            col =0;
            dir ='N';
            visited[col][row]=true;
            rows.push(row);
            columns.push(col);
        }

    private:
        fp::Maze maze;
        int col; //-- x co-ordinate
        int row; //-- y co-ordinate
        char dir;
        //-- stacks to keep track of visited positions for backtracking to find path.
        std::stack<int>rows;
        std::stack<int>columns;
        int visited[16][16]={0}; //-- To keep track of visited cells


    public:
        /**
         * @brief Algorithm method used to check if goal is reached
         * @param x x:co-ordinate position of the robot
         * @param y y:co-ordinate position of the robot
         * @return returns true if goal is found
         */
        bool CheckGoal(int x, int y);

        /**
         * @brief Algorithm method used move the robot in the maze
         * @param col x:co-ordinate position in the maze cell
         * @param row y:co-ordinate position in the maze cell
         */
        void MoveRobot(std::shared_ptr<fp::LandBasedRobot>, int col, int row );

        /**
         * @brief Algorithm method that solves the maze algorithm recursively
         * @return returns true if the goal is reached by the robot
         */
        bool Solve(std::shared_ptr<fp::LandBasedRobot>const& robot);
    };

}