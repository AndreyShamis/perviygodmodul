
/*
 * EX5A    ::
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 */

//--------------- including section -------------
#include <iostream>
#include <cstdlib>

//--------------- using section        -------------
using std::cout;
using std::cin;
using std::endl;


//--------------- main                 -------------
int main()
{
    const int MAX_ROWS = 110;
    const int MAX_COLS = 120;

    int matrix[MAX_ROWS][MAX_COLS];
    int row, cols,i,j;
    //abs(x)
    cin >> row >> cols;

    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
        {
            cin >> matrix[i][j];
        }

    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout << matrix[i][j] << "\t";

        }
        cout << endl;
    }

    return(0);
}
