# Maze_Robot
## ENPM809Y Final Project: Group 4

### Instructions to run the code on Ubuntu 
Steps to install mms:
Run the following code in sequence provided below:
'''
sudo apt-get install qt5-default 

git clone git@github.com:mackorone/mms.git

cd mms/src
qmake && make

../../bin/mms
'''
Further detailed instructions and further information about the mms simulator can be found here  " https://github.com/mackorone/mms "

Once MMS is installed, select a maze and open the Edit Mouse Algorithm pop-up to put in the commands as follows:

Name: Input your Desired Name.

Directory: /home/user_name/Final-Project-Group6 (You can also browse to the Final-Project-Group6 folder using the browse pop up next to the directory space).

Build Command: g++ -std=c++11 main.cpp src/Algorithm/algorithm.cpp src/Maze/maze.cpp src/API/api.cpp src/LandBasedTracked/landbasedtracked.cpp src/LandBasedWheeled/landbasedwheeled.cpp

Run Command: ./a.out

user_name in the directory above should be your username for Ubuntu.

Once you fill in these details, press OK.

Hit Build. Once it shows COMPLETE in the adjoining box, Hit Run. The robot should search for the path and follow it.

You don't have to build the code again to run it for a different maze. Once the build is complete, you can run the code for multiple mazes, by changing the Maze config and hitting Run.
