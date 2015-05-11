#include <iostream>
#include <string>
#include <cstdlib>
#include "Robot.h"
#include "tile.h"
#include "maze.h"
using namespace std;

int main()
{
    cout << "Welcome! Say Hello to the Maze Runner." << endl;
    cout << "The Maze Runner is a robot that uses AI to navigate through a selected maze." << endl;
    cout << "Press any Key to begin." << endl << endl;
    system("PAUSE");
    int rowPosition, colPositon;
    Maze m1;
    Robot chappie;
    chappie.runRobot(m1);
//    rowPosition = chappie.getLocRow();
//    colPositon = chappie.getLocColumn();


//    cout << colPositon<< " " << rowPosition;
//



    return 0;

}
