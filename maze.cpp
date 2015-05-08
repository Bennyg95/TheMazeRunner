#include "tile.h"
#include "maze.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <time.h>
//#include<unistd.h>
#include <iostream>
#include <iomanip>

using namespace std;

// ##############################################################
Maze::Maze()
// ##############################################################
{

	ifstream openfile;
	char temp;

	openfile.open("/Users/Seichan/Documents/CSITin3/Spring2015/CSS-2A/programs/gamjie/paths.txt");
	if(openfile.fail())
	{
		cout << "Could not open file." << endl;
		exit(1);
	}
	int x = 0;
	int y = 0;
	while(openfile >> temp)
	{

		//openfile >> temp;



		if(temp == 'w')
		{
			board[x][y].setPath();
		}


		else if(temp == 'x')
		{
			board[x][y].setWall();
		}
		else if(temp == 'S')
		{
			board[x][y].setIsStart();
			board[x][y].setPath();
		}
		else if(temp == 'F')
		{
			board[x][y].setIsEnd();
			board[x][y].setPath();
		}

		y++;
		if(y == 40)
		{
			y = 0;
			x++;
		}


	}

	openfile.close();
}
// ##############################################################

// ##############################################################
void Maze::display()
// ##############################################################
{
	for(int i = 0; i < 50; i++)	// loops through the rows of the maze
	{
		for(int j = 0; j < 40; j++) // loops through the columns of the maze
			cout << board[i][j].getTile(); // gets a tile
		cout << endl;
	}
}
// ##############################################################


