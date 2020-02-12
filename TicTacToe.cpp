#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

//master version

//Fill the board with 0's, 1's can be X's and 2's can be O's
//-1 as a return or at a location can denote failure.
//there are only three keys to display.
vector<vector<int>> createBoard()
{
    vector<vector<int>> our_board; //solution
    vector<int> row_array; //values in a row
    for (int i = 0; i < 3; i++) //col#
    {
        for (int j = 0; j < 3; j++) //row element
        {
            row_array.push_back(0); //populate all columns with 0's
        }
        our_board.push_back(row_array); //populate the row
        row_array.clear(); //clear the old vector for the next rows elements
    }
    return our_board;
}

int main()
{
    //a tictactoe board does not require anything too creative. It is a 3x3 matrix
    //nothing more, nothing less.
    vector<vector<int>> board = createBoard(); 
}