#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

//Devins version
void DisplayBoard(vector<vector<int>> current_board) //takes the current board as input
{
    for (int i = 0; i < 3; i++) //3's are faster than vector.size() calls. It'll always be 3
    {
        for (int j = 0; j < 3; j++)
        {
            cout << current_board[i][j] << " "; //prints the row, no endl
        }
        cout << endl; //once a row exits an endl is used
    }
}


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
    //board[1][1] = 8; //used to test memory
    DisplayBoard(board); 
}