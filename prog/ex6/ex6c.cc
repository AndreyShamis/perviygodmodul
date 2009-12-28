/*
 * EX6C  :: 
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *
 */

//--------------- including section -------------
#include <iostream>

//--------------- using section        -------------
using std::cout;
using std::cin;

//--------------- main                 -------------
int main()
{
    const int MAX_ROWS = 10;    // Max array rows
    const int MAX_COLS = 20;    // Max array cols

    bool diam = false;        //

    int matrix[MAX_ROWS][MAX_COLS], // array
        row, cols;      // parameters matrix, geted from user


    cin >> row  >> cols; // getting param for matrix

    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
            cin >> matrix[i][j];    // putting value into matrix elements

    return(0);
}
