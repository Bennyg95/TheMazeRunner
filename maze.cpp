#include "tile.h"
#include "maze.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
//#include <time.h>
//#include<unistd.h>
#include <iostream>

using namespace std;

// ##############################################################
Maze::Maze()
// ##############################################################
{

	ifstream openfile;
	char temp;

	openfile.open("paths.txt");
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
			Board[y][x].setPath();
		}
		

		else if(temp == 'x')
		{
			Board[y][x].setWall();
		}
		else if(temp == 'S')
		{
			Board[y][x].setIsStart(true);
			Board[y][x].setPath();
		}
		else if(temp == 'F')
		{
			Board[y][x].setIsEnd(true);
			Board[y][x].setPath();
		}
		
		x++;
		if(x == 40)
		{
			x = 0;
			y++;
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
		for(int j = 4; j < 44/*44*/; j++) // loops through the columns of the maze
			cout << Board[i][j].getTile(); // gets a tile
		cout << endl;	
	}
}
// ##############################################################

void Maze::changeTiles()
{
	
}	
