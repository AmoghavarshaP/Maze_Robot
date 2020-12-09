# Maze_Robot
## ENPM809Y Final Project: Group 4

### Instructions to run the code on Ubuntu 
Steps to install mms simulator:
Run the following code in sequence provided below:
```
# Clone the repo
git clone git@github.com:mackorone/mms.git

# Build the simulator
cd mms/src
qmake && make

# Run the simulator
../../bin/mms
```
Further detailed instructions and further information about the mms simulator can be found here  " https://github.com/mackorone/mms "

After running the mms simulator, open the Edit-Mouse Algorithm pop-up, which the can be accesed from the top right corner of the simulator interface. 

The fiels provided should be filled as follows:

Name: Input any desired name

Directory: /home/user_name/Final-Project-Group4/src. -- Directly browse to this directory. 

Build Command: ``` g++ API/api.cpp LandBasedRobot/landbasedrobot.cpp  LandBasedTracked/landbasedtracked.cpp LandBasedWheeled/landbasedwheeled.cpp Maze/maze.cpp Algorithm/algorithm.cpp ../main.cpp ```

Run Command: ./a.out

press OK.

An example: 

![Screenshot from 2020-12-09 02-32-58](https://user-images.githubusercontent.com/60764108/101598995-fdd78580-39c6-11eb-9092-beaefc147fe2.png)

Hit Build. Once it shows COMPLETE in the adjoining box, Hit Run. The robot will move in the maze till it finds and reaches the goal node.

Once the build is complete, you can run the code for multiple mazes, by changing the Maze config and hitting Run.
