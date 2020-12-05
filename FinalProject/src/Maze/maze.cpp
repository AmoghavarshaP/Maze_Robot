/**
* @file maze.cpp
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

#include "maze.h"
#include "../API/api.h"

fp::Maze::Maze() {
    fp::API::setColor(0,0,'r');
    fp::API::setText(0,0,"Start");
    fp::API::setText(7,7,"Goal");
    fp::API::setText(7,8,"Goal");
    fp::API::setText(8,7,"Goal");
    fp::API::setText(8,8,"Goal");

    fp::API::setColor(7,7,'g');
    fp::API::setColor(7,8,'g');
    fp::API::setColor(8,7,'g');
    fp::API::setColor(8,8,'g');

    //-- Setting the entire maze without walls to be updated as the robot moves
    for (int x = 0; x<16;x++){
        for (int y=0;y<16;y++){
            SouthWall[x][y]=false;
            EastWall[x][y]=false;
            NorthWall[x][y]=false;
            WestWall[x][y]=false;
        }
    }

}

void fp::Maze::mazeUpdate(int x, int y, char direction) {
    if (direction=='S') {
        if (fp::API::wallFront()) {
            fp::API::setWall(x, y, 's');
            SouthWall[x][y] = true;
        }
        if (fp::API::wallLeft()) {
            fp::API::setWall(x, y, 'e');
            EastWall[x][y] = true;
        }
        if (fp::API::wallRight()) {
            fp::API::setWall(x, y, 'w');
            WestWall[x][y] = true;
        }
    }

    if (direction == 'E') {
        if (fp::API::wallFront()) {
            fp::API::setWall(x, y, 'e');
            EastWall[x][y] = true;
        }
        if (fp::API::wallLeft()) {
            fp::API::setWall(x, y, 'n');
            NorthWall[x][y] = true;
        }
        if (fp::API::wallRight()) {
            fp::API::setWall(x, y, 's');
            SouthWall[x][y] = true;
        }
    }

    if (direction == 'N') {
        if (fp::API::wallFront()) {
            fp::API::setWall(x, y, 'n');
            NorthWall[x][y] = true;
        }
        if (fp::API::wallLeft()) {
            fp::API::setWall(x, y, 'w');
            WestWall[x][y] = true;
        }
        if (fp::API::wallRight()) {
            fp::API::setWall(x, y, 'e');
            EastWall[x][y] = true;
        }
    }

    if (direction=='W') {
        if (fp::API::wallFront()) {
            fp::API::setWall(x, y, 'w');
            WestWall[x][y] = true;
        }
        if (fp::API::wallLeft()) {
            fp::API::setWall(x, y, 's');
            SouthWall[x][y] = true;
        }
        if (fp::API::wallRight()) {
            fp::API::setWall(x, y, 'n');
            NorthWall[x][y] = true;
        }
    }

}

bool fp::Maze::isWallSouth(int x, int y) {
    return SouthWall[x][y];
}

bool fp::Maze::isWallEast(int x, int y) {
    return EastWall[x][y];
}

bool fp::Maze::isWallNorth(int x, int y) {
    return NorthWall[x][y];
}

bool fp::Maze::isWallWest(int x, int y) {
    return WestWall[x][y];
}