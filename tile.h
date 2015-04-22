#ifndef TILE_H_INCLUDED
#define TILE_H_INCLUDED

#include <string>
using namespace std;


class Tile 	// creates an object Tile
{
	private:
		char tile; // character tile
	
	public:
		Tile();	// constructor to initialize a tile

		char setWall(); // will set the tile to a wall
		char setPath();	// will set a tile to a path

		char getTile() const {return tile;}	// returns the value of the tile


		bool isWall(char tile);	// true if Tile is wall
		bool isPath(char tile);	// true if Tile is a path

		
	
};

#endif
