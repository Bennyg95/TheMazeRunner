#include "maze.h"
#include "tile.h"
#include "Robot.h"
#include <iostream>
using namespace std;


int main()
{
	Maze first; // creates a maze
	//first.display(); // displays the object created
	first.display();
    Robot nop;
    nop.runRobot(first);
}
