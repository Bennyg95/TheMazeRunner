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
             isWall,
             isKeyLoc,
             isVisited;
        char originDirection;

	public:
		Tile();	// constructor to initialize a tile

		char setWall(); // will set the tile to a wall
		char setPath();	// will set a tile to a path
		void setIsStart();
        void setIsEnd();
        void setIsWall(char tile);
        void setOriginDirection(char originDirection);
        void setIsKeyLoc(bool isKeyLoc);
        void setIsVisited();

		char getTile() const {return tile;}	// returns the value of the tile
        bool getIsStart()const {return isStart;}
        bool getIsEnd()const {return isEnd;}
        bool getIsWall()const {return isWall;}
        char getOriginDirection()const {return originDirection;}
        bool getIsKeyLoc()const {return isKeyLoc;}
        bool getIsVisited()const {return isVisited;}


		//bool isWall(char tile);	// true if Tile is wall
		//bool isPath(char tile);	// true if Tile is a path <- *****this function seems to be redudant, can you explain its need?*****



};

#endif
