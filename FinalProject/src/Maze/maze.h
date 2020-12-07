/**
* @file maze.h
* @authors
* Group 4
* Prateek Bhargava, UID : 116947992
* Amoghavarsha Prasanna, UID : 116952910
*
* @version 1.0
*
* @section File Description
* Implementing maze class
*
*/
#pragma once

#include <iostream>
#include <array>


namespace fp {
    class Maze {
    public:
        //--Maze Constructor
        Maze();


        void mazeUpdate(int x,int y, char direction);

        bool isWallNorth(int x, int y);

        bool isWallEast(int x,int y);

        bool isWallSouth(int x , int y);

        bool isWallWest(int x,int y);

        ~Maze(){};

    protected:
        int SouthWall[16][16];
        int EastWall[16][16];
        int NorthWall[16][16];
        int WestWall[16][16];










    };

}

