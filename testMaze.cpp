#include "maze.h"
#include "tile.h"
#include <iostream>
using namespace std;


int main()
{
	Maze first; // creates a maze
	first.display(); // displays the object created
	cout << first.Board[1][1].getIsWall();

}
