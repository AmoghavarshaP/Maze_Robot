/**
* @file main.cpp
* @authors
* Group 4
* Prateek Bhargava, UID : 116947992
* Amoghavarsha Prasanna, UID : 116952910
*
* @version 1.0
*
* @section File Description
* main file
*
*/


#include <iostream>
#include <memory>
#include "src/Algorithm/algorithm.h"
#include "src/API/api.h"
#include "src/Maze/maze.h"
#include "src/LandBasedWheeled/landbasedwheeled.h"
#include "src/LandBasedTracked/landbasedtracked.h"
#include <chrono>

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    std::shared_ptr<fp::LandBasedRobot> MicroMouse = std::make_shared<fp::LandBasedWheeled>("Husky",1,5,10,10,0,0,0,'N');
    fp::Algorithm Algory;
    Algory.solve(MicroMouse);
    std::cerr << "Goal Reached" << std::endl;
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::seconds>(stop - start);
    std::cerr<<"Time taken to reach goal: "<< duration.count()<<" seconds"<<std::endl;
    return 0;

}
