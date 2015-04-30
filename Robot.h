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

using namespace std;

class Robot
{
private:
    int locRow,
        locColumn,
        type;
    bool isAdvancing;
    Tile mapMemory[80][40];
public:
    Robot();
    Robot(int type);
    int getLocRow()const {return locRow;}
    int getLocColumn()const {return locColumn;}
    void setLocation();
    void moveRobot();

};

#endif // ROBOT_H_INCLUDED
