#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED

//
// Class Name: Robot
//
// Description: the AI for a robot which attempts to navigate a 2D maze
//
// =============================================================================

#include <iostream>
#include <string>
#include "Tile.h"
#include "maze.h"
using namespace std;

class Robot
{
private:
    int locRow,
        locColumn,
        type;
    bool isAdvancing;
    Tile mapMemory[50][40];
public:
    Robot();
    Robot(int type);
    int getLocRow()const {return locRow;}
    int getLocColumn()const {return locColumn;}
    bool getIsAdvancing()const {return isAdvancing;}
    void setIsAdvancing(bool isAdvancing);
    void moveRobot(int locRow, int locColumn);
    void findStart(Tile board[][40]);
    void findEnd(Tile board[][40]);
    void runRobot(Maze m);
    void checkDirections(Tile board[][40]);
    void attemptMove();
};

#endif // ROBOT_H_INCLUDED
