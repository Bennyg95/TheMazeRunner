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



/*    int locRow,
        locColumn,
        type;
    bool isAdvancing;
    Tile mapMemory[50][40];*/

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

void Robot::setIsAdvancing(bool isAdvancing)
{
    this->isAdvancing = isAdvancing;
}

void Robot::moveRobot(int locRow, int locColumn)
{
    this->locRow = locRow;
    this->locColumn = locColumn;
    if(getIsAdvancing() == false && mapMemory[locRow][locColumn].getIsKeyLoc() == true)
        setIsAdvancing(true);
}

void Robot::findStart(Tile board[][40])
{
    for(int i = 0; i < 50; i++)
    {
        if(board[i][0].getIsWall() == false)
        {
            mapMemory[i][0].setIsStart();
            moveRobot(i,0);
        }
    }
}

void Robot::findEnd(Tile board[][40])
{
    for(int i = 0; i < 50; i++)
    {
        if(board[i][40].getIsEnd() == true)
        {
            cout << board[i][38].getIsEnd();
           // mapMemory[i][39].setIsEnd();
            //cout << "END: x " <<  i << " y 39" << endl;
        }

    }
}

void Robot::runRobot(Maze m)
{
    findStart(m.board);
    findEnd(m.board);
    //cout << " x " <<  getLocRow() << " y " << getLocColumn() << endl;
    while(m.board[getLocRow()][getLocColumn()].getIsEnd() == false)
    {
        checkDirections(m.board);
        attemptMove();
        //cout << " end: "<< mapMemory[getLocRow()][getLocColumn()].getIsEnd() << endl;
    }
}

void Robot::checkDirections(Tile board[][40])
{
    int direction_counter = 0;
    if(getLocRow() > 0)
    {
        if(board[getLocRow()-1][getLocColumn()].getIsWall() == false) // check north
        {
            direction_counter++;
            mapMemory[getLocRow()-1][getLocColumn()].setPath();
        }
        else
        {
            mapMemory[getLocRow()-1][getLocColumn()].setWall();
        }
    }

    if(getLocColumn() > 0)
    {
        if(board[getLocRow()][getLocColumn()-1].getIsWall() == false) // check west
        {
            direction_counter++;
            mapMemory[getLocRow()][getLocColumn()-1].setPath();
        }
        else
        {
            mapMemory[getLocRow()][getLocColumn()-1].setWall();
        }
    }

    if(getLocRow() < 49)
    {
        if(board[getLocRow()+1][getLocColumn()].getIsWall() == false) // check south
        {
            direction_counter++;
            mapMemory[getLocRow()+1][getLocColumn()].setPath();
        }
        else
        {
            mapMemory[getLocRow()+1][getLocColumn()].setWall();
        }
    }

    if(getLocColumn() < 39)
    {
        if(board[getLocRow()][getLocColumn()+1].getIsWall() == false) // check east
        {
            direction_counter++;
            mapMemory[getLocRow()][getLocColumn()+1].setPath();
        }
        else
        {
            mapMemory[getLocRow()][getLocColumn()+1].setWall();
        }
    }


    if(direction_counter > 1)
    {
        mapMemory[getLocRow()][getLocColumn()].setIsKeyLoc(true);
    }
}

void Robot::attemptMove()
{
    if(getIsAdvancing() == true)
    {
        if(mapMemory[getLocRow()][getLocColumn()+1].getIsWall() == false
            && mapMemory[getLocRow()][getLocColumn()].getOriginDirection() != 'e')                // check east
        {
            moveRobot(getLocRow(),getLocColumn()+1);
            mapMemory[getLocRow()][getLocColumn()+1].setOriginDirection('w');
        }
        else if(mapMemory[getLocRow()-1][getLocColumn()].getIsWall() == false
            && mapMemory[getLocRow()][getLocColumn()].getOriginDirection() != 'n')                // check north
        {
            moveRobot(getLocRow()-1,getLocColumn());
            mapMemory[getLocRow()-1][getLocColumn()].setOriginDirection('s');
        }
        else if(mapMemory[getLocRow()+1][getLocColumn()].getIsWall() == false
            && mapMemory[getLocRow()][getLocColumn()].getOriginDirection() != 's')                 // check south
        {
            moveRobot(getLocRow()+1,getLocColumn());
            mapMemory[getLocRow()+1][getLocColumn()].setOriginDirection('n');
        }
        else if(mapMemory[getLocRow()][getLocColumn()-1].getIsWall() == false
            && mapMemory[getLocRow()][getLocColumn()].getOriginDirection() != 'w')                 // check west
        {
            moveRobot(getLocRow(),getLocColumn()-1);
            mapMemory[getLocRow()][getLocColumn()-1].setOriginDirection('e');
        }
    }
    else
    {
        switch(mapMemory[getLocRow()][getLocColumn()].getOriginDirection())
        {
        case 'n': moveRobot(getLocRow()-1,getLocColumn());
            break;
        case 'e': moveRobot(getLocRow(),getLocColumn()+1);
            break;
        case 's': moveRobot(getLocRow()+1,getLocColumn());
            break;
        case 'w': moveRobot(getLocRow(),getLocColumn()-1);
            break;
        }
    }
}