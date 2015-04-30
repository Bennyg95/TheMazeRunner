
#include "tile.h" // includes the tile.h file

#include <iostream>

using namespace std;

// ##############################################################
Tile::Tile()
// ##############################################################

{
	tile = 'x'; // initializes tile to 'x'
}
// ##############################################################

// ##############################################################
void Tile::setIsWall(char tile)
// ##############################################################
{
	this->tile = tile;
	if(tile == 'x')
		isWall = true; // returns true if tile == 'x'
	isWall = false;
}
// ##############################################################

// ##############################################################
char Tile::setWall()
// ##############################################################
{
	tile = 'x'; // sets tile to 'x'
	setIsWall('x');
	return tile;
}
// ##############################################################

// ##############################################################
char Tile::setPath()
// ##############################################################
{
	tile = ' '; // sets tile to ' '
	return tile;
}
// ##############################################################

// ##############################################################
void Tile::setIsStart(bool isStart)
// ##############################################################
{
	this->isStart = isStart;
}
// ##############################################################

// ##############################################################
void Tile::setIsEnd(bool isEnd)
// ##############################################################
{
	this->isEnd = isEnd;
}
// ##############################################################

// ##############################################################
void Tile::setOriginDirection(bool originDirection)
// ##############################################################
{
	this->originDirection = originDirection;
}
// ##############################################################