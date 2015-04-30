/*  filename:  Robot.cpp
    description: Implementation file for robot class
    author: Pearce Reinsch
    date: 4/25/15
    Version 1
*/

#include <iostream>
#include <string>
#include "Robot.h"
using namespace std;


//int location[2]
//bool isAdvancing;

Robot::Robot()
{
    locRow = 0;
    locColumn = 0;
    type = 0;
    isAdvancing = true;
}

Robot::Robot(int type)
{
    locRow = 0;
    locColumn = 0;
    this->type = type;
    isAdvancing = true;
}

void Robot::setLocation()
{

}
