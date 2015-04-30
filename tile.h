#ifndef TILE_H_INCLUDED
#define TILE_H_INCLUDED

#include <string>
using namespace std;


class Tile 	// creates an object Tile
{
	private:
		char tile; // character tile
        bool isStart,
             isEnd,
             isWall;
        char originDirection;

	public:
		Tile();	// constructor to initialize a tile

		char setWall(); // will set the tile to a wall
		char setPath();	// will set a tile to a path
		void setIsStart(bool isStart);
        void setIsEnd(bool isEnd);
        void setIsWall(char tile);
        void setOriginDirection(bool originDirection);

		char getTile() const {return tile;}	// returns the value of the tile
        bool getIsStart()const {return isStart;}
        bool getIsEnd()const {return isEnd;}
        bool getIsWall()const {return isWall;}
        bool getOriginDirection()const {return originDirection;}

};

#endif
