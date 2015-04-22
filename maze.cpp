#include "tile.h"
#include "maze.h"
#include <iostream>

using namespace std;

// ##############################################################
Maze::Maze()
// ##############################################################
{
	for(int i = 0; i < 80; i++)	// loops trough the rows of the maze
	{
		for(int j = 0; j < 40; j++)	// loops through the columns of the maze
		{
			Board[i][j].setWall();	// sets all tiles to wall
		}
		
	}
	
}
// ##############################################################

// ##############################################################
void Maze::display()
// ##############################################################
{
	
	for(int i = 0; i < 80; i++)	// loops through the rows of the maze
	{
		for(int j = 0; j < 40; j++) // loops through the columns of the maze
			cout << Board[i][j].getTile(); // gets a tile
		cout << endl;	
	}
}
// ##############################################################


		
