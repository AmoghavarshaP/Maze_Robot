cmake_minimum_required(VERSION 3.17)
project(FinalProjectNavigation)

set(CMAKE_CXX_STANDARD 17)

add_executable(FinalProjectNavigation main.cpp src/LandBasedRobot/LandBasedRobot.cpp src/LandBasedRobot/LandBasedRobot.h src/LandBasedTracked/landbasedtracked.cpp src/LandBasedTracked/landbasedtracked.h src/LandBasedWheeled/landbasedwheeled.cpp src/LandBasedWheeled/landbasedwheeled.h src/API/api.cpp src/API/api.h src/Maze/maze.cpp src/Maze/maze.h src/Algorithmn/algorithmn.cpp src/Algorithmn/algorithmn.h)