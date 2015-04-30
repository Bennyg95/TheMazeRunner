#ifndef MAZE_H_INCLUDED
#define MAZE_H_INCLUDED

#include "tile.h" // includes the tile.h file
#include <iostream>
using namespace std;


class Maze
{
	public:
		Tile Board[40][80]; // creates a Board of Tiles
		Maze();	// Initializes the maze

		void changeTiles(); // will be changing the maze every 10 seconds
		bool isTime(); // true if time is up for the 10 seconds
		void display(); // displays the maze
};

#endif
