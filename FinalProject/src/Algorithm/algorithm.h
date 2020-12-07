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

        Algorithm(){
            row =0;
            col =0;
            dir ='N';
            visited = {0};
            visited[col][row]=true;
            rows.push(row);
            columns.push(col);
        }

    public:
        bool CheckGoal(int x, int y);

        void MoveRobot(std::shared_ptr<fp::LandBasedRobot>, int col, int row );

        bool solve(std::shared_ptr<fp::LandBasedRobot>);

    private:
        fp::Maze maze;
        int row;
        int col;
        char dir;
        std::stack<int>rows;
        std::stack<int>columns;
        std::array<std::array<int,16>,16>visited;

    };

}