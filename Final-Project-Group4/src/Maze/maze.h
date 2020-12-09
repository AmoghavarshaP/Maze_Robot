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
    /**
    * @brief Maze class to implement and update the maze
    * It contains its respective methods and attributes
    */
    class Maze {
    public:
       /**
        * @brief A basic Maze Constructor for the maze class
        */
        Maze();

        /**
         * @brief Maze class method to update the maze data as the robot moving through the maze encounters walls
         * @param x x:co-ordinate maze cell that needs to be updated
         * @param y y:co-ordinate maze cell that needs to be updated
         * @param direction
         */
        void mazeUpdate(int x,int y, char direction);


        /**
         * Maze class method that returns if wall is present in the North direction for a particular cell in the maze
         * @param x x:co-ordinate maze cell
         * @param y y:co-ordinate maze cell
         * @return
         */
        bool isWallNorth(int x, int y);


        /**
         * Maze class method that returns if wall is present in the East direction for a particular cell in the maze
         * @param x x:co-ordinate maze cell
         * @param y y:co-ordinate maze cell
         * @return
         */
        bool isWallEast(int x,int y);



        /**
         * Maze class method that returns if wall is present in the South direction for a particular cell in the maze
         * @param x x:co-ordinate maze cell
         * @param y y:co-ordinate maze cell
         * @return
         */
        bool isWallSouth(int x , int y);


        /**
         * Maze class method that returns if wall is present in the West direction for a particular cell in the maze
         * @param x x:co-ordinate maze cell
         * @param y y:co-ordinate maze cell
         * @return
         */
        bool isWallWest(int x,int y);

        /**
       * @brief Destructor of the class Maze which deletes the objects created before
       */
        ~Maze(){};

    protected:
        /** The arrays to store the maze values*/
        int SouthWall[16][16]; //--South
        int EastWall[16][16]; //--East
        int NorthWall[16][16];//--North
        int WestWall[16][16];//--West










    };

}

