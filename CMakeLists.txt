cmake_minimum_required(VERSION 3.17)
project(Maze_Robot)

set(CMAKE_CXX_STANDARD 17)

add_executable(Maze_Robot main.cpp LandBasedRobot/LandBasedRobot.cpp LandBasedRobot/LandBasedRobot.h LandBasedWheeled/landbasedwheeled.cpp LandBasedWheeled/landbasedwheeled.h LandBasedTracked/landbasedtracked.cpp LandBasedTracked/landbasedtracked.h)