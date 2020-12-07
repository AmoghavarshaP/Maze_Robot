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
//        std::cerr<<"Path not found"<<std::endl;
        return false;
}

bool fp::Algorithm::solve(std::shared_ptr<fp::LandBasedRobot> robot){

    if(fp::Algorithm::CheckGoal(col, row)){
        while (!rows.empty()){
            fp::API::setColor(columns.top(), rows.top(), 'a');
            rows.pop();
            columns.pop();
        }
        fp::API::setColor(0,0,'R');
        return true;
    }

    maze.mazeUpdate(col,row,dir);


    // Check South Direction
    if((row>0)&&(maze.isWallSouth(col,row) == false)&&(visited[col][row-1]==false)){
        rows.push(row-1);columns.push(col);
        fp::Algorithm::MoveRobot(robot,col,row-1);
        visited[col][row-1]=true;
        row=row-1; dir='S';
        fp::Algorithm::solve(robot);
    }

        // Check East Direction.
    else if((col<15)&&(maze.isWallEast(col, row) == false)&&(visited[col+1][row]==false)){
        rows.push(row);columns.push(col+1);
        fp::Algorithm::MoveRobot(robot,col+1,row);
        visited[col+1][row]=true;
        col=col+1;dir='E';
        fp::Algorithm::solve(robot);
    }
        // Check North Direction.
    else if((row<15)&&(maze.isWallNorth(col, row) == false)&&(visited[col][row+1]==false)){
        rows.push(row+1);columns.push(col);
        fp::Algorithm::MoveRobot(robot,col,row+1);
        visited[col][row+1]=true;
        row=row+1;dir='N';
        fp::Algorithm::solve(robot);
    }
        // Check West Direction.
    else if((col>0)&&(maze.isWallWest(col, row) == false)&&(visited[col-1][row]==false)){
        rows.push(row);columns.push(col-1);
        fp::Algorithm::MoveRobot(robot,col-1,row);
        visited[col-1][row]=true;
        col=col-1;dir='W';
        fp::Algorithm::solve(robot);
    }
        // Clear and update the robot coordinates.
    else{
        rows.pop();
        columns.pop();
        fp::Algorithm::MoveRobot(robot,columns.top(),rows.top());
        row=rows.top();
        col=columns.top();
        dir=robot->GetDirection();
        fp::Algorithm::solve(robot);
    }
}


void fp::Algorithm::MoveRobot(std::shared_ptr<fp::LandBasedRobot> robot,int col,int row)
{

    int current_x=robot->get_x();
    int current_y=robot->get_y();
    int current_dir=robot->GetDirection();
//	fp::API::setColor(robot->get_x(),robot->get_y(),'Y');
    if(!((current_y==row)&&(current_x==col))){
        //Movement in South Direction.
        if(row<current_y){
            if(current_dir=='S'){
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
            if(current_dir=='W')
            {  robot->TurnLeft();
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
            if(current_dir=='E')
            {  robot->TurnRight();
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
            if(current_dir=='N')
            {  robot->TurnRight();
                robot->TurnRight();
                robot->MoveForward();
                std::cerr<<" X position: "<< robot->get_x() << " Y position: "<< robot->get_y() << std::endl;
            }
        }
        //Movement in East Direction.
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
        //--North Movement
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
        //Movement in West Direction.
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



