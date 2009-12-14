/*
 * EX5C    ::
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 */

//--------------- including section -------------
#include <iostream>

//--------------- using section        -------------
using std::cout;
using std::cin;
using std::endl;


//--------------- main                 -------------
int main()
{
    const int MAX_ROWS = 10;
    const int MAX_COLS = 20;

    int matrix[MAX_ROWS][MAX_COLS],
        //matrix_sum[MAX_ROWS+MAX_COLS][1], // [][0 negative or 1=positive]

        row, cols,i,j,x,y;

    cin >> row >> cols;

    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
            cin >> matrix[i][j];



cout << endl;
    return(0);
}

