/**
* @file algorithm.cpp
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

#include "algorithm.h"
#include "../API/api.h"
#include "../Maze/maze.h"
#include "../LandBasedTracked/landbasedtracked.h"
#include "../LandBasedWheeled/landbasedwheeled.h"
#include <iostream>

bool fp::Algorithm::CheckGoal(int x, int y) {
    if ((x==7 && y==7) || (x==7 && y==8) || (x==8 && y==7) || (x==8 && y==8))
        return true;
    else
        return false;
}
//-- Recursive Algorithm to solve the maze to find the path
bool fp::Algorithm::Solve(std::shared_ptr<fp::LandBasedRobot> const& robot){

    if(fp::Algorithm::CheckGoal(col, row)){
        while (!rows.empty()){
            fp::API::setColor(columns.top(), rows.top(), 'a');
            rows.pop();
            columns.pop();
        }
        fp::API::setColor(0,0,'R');
        return true;
    }

    maze.mazeUpdate(col,row,dir); //--Updates maze as walls are encountered by the robot

    //--South:
    if((row>0) && !maze.isWallSouth(col, row) && (visited[col][row - 1] == false)){
        rows.push(row-1);columns.push(col);
        fp::Algorithm::MoveRobot(robot,col,row-1);
        visited[col][row-1]=true;
        row=row-1; dir='S';
        fp::Algorithm::Solve(robot);
    }

    //--East:
    else if((col<15) && !maze.isWallEast(col, row) && (visited[col + 1][row] == false)){
        rows.push(row);columns.push(col+1);
        fp::Algorithm::MoveRobot(robot,col+1,row);
        visited[col+1][row]=true;
        col=col+1;dir='E';
        fp::Algorithm::Solve(robot);
    }
    //--North:
    else if((row<15) && !maze.isWallNorth(col, row) && (visited[col][row + 1] == false)){
        rows.push(row+1);columns.push(col);
        fp::Algorithm::MoveRobot(robot,col,row+1);
        visited[col][row+1]=true;
        row=row+1;dir='N';
        fp::Algorithm::Solve(robot);
    }
    //--West:
    else if((col>0) && !maze.isWallWest(col, row) && (visited[col - 1][row] == false)){
        rows.push(row);columns.push(col-1);
        fp::Algorithm::MoveRobot(robot,col-1,row);
        visited[col-1][row]=true;
        col=col-1;dir='W';
        fp::Algorithm::Solve(robot);
    }
    //--Update robot coordinates
    else{
        rows.pop();
        columns.pop();
        fp::Algorithm::MoveRobot(robot,columns.top(),rows.top());
        row=rows.top();
        col=columns.top();
        dir=robot->GetDirection();
        fp::Algorithm::Solve(robot);
    }
}


void fp::Algorithm::MoveRobot(std::shared_ptr<fp::LandBasedRobot> robot,int col,int row)
{

    int current_x=robot->get_x();
    int current_y=robot->get_y();
    int current_dir=robot->GetDirection();
    if(!((current_y==row)&&(current_x==col))){
       //--First Movement check alongSouth:
        if(row<current_y){
            if(current_dir=='S'){
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
            if(current_dir=='W'){
                robot->TurnLeft();
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
            if(current_dir=='E'){
                robot->TurnRight();
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
            if(current_dir=='N'){
                robot->TurnRight();
                robot->TurnRight();
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
        }
        //--Second Movement check along East:
        if(col>current_x){
            if(current_dir=='E'){
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
            if(current_dir=='S'){
                robot->TurnLeft();
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
            if(current_dir=='N'){
                robot->TurnRight();
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
            if(current_dir=='W'){
                robot->TurnRight();
                robot->TurnRight();
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
        }
        //--Third Movement check along North:
        if(row>current_y){
            if(current_dir=='N'){
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
            if(current_dir=='E'){
                robot->TurnLeft();
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
            if(current_dir=='W'){
                robot->TurnRight();
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
            if(current_dir=='S'){
                robot->TurnRight();
                robot->TurnRight();
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
        }
        //--Fourth Movement check along West.
        if(col<current_x){
            if(current_dir=='W'){
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
            if(current_dir=='N'){
                robot->TurnLeft();
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
            if(current_dir=='S'){
                robot->TurnRight();
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
            if(current_dir=='E'){
                robot->TurnLeft();
                robot->TurnLeft();
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
        }
    }

}



