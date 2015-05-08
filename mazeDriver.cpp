#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    char menuSelection;

    cout << "Welcome! Say Hello to the Maze Runner." << endl;
    cout << "The Maze Runner is a robot that uses AI to navigate through a selected maze." << endl;
    cout << "Press any Key to begin." << endl << endl;

    //system("PAUSE");
    cin.ignore(); // ignores the newline
    cin.get(); //waits for character

    //system("cls");
    for(int i = 0; i < 25; i++)
    {
        cout << i <<endl;
    }

    cin.ignore(); // ignores the newline
    cin.get(); //waits for character
    return 0;
}
