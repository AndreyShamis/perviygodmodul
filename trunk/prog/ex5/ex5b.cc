/*
 * EX5B    ::
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
        matrix_sum[MAX_ROWS+MAX_COLS][1], // [][0 negative or 1=positive]
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


    for(i=0;i<MAX_ROWS+MAX_COLS;i++)
    {
        if (matrix[i][j] >= 0){
            matrix_sum[(i+1)(j+1)+j][1]=+matrix[i][j];
        else
            matrix_sum[(i+1)(j+1)+j][0]=-matrix[i][j];

        for(j=0;j<MAX_ROWS+MAX_COLS;j++)
            if (matrix[j][j] >= 0)
                matrix_sum[(i+1)(j+1)+j][1]=+matrix[i][j];
            else
                matrix_sum[(i+1)(j+1)+j][0]=-matrix[i][j];
    }
    for(i=0;i<MAX_ROWS+MAX_COLS;i++)
    {
        cout << matrix_sum[i][1] << " " << matrix_sum[i][1] << e" " ;
        for(j=0;j<MAX_ROWS+MAX_COLS;j++)
            cout << matrix_sum[i][1] << " " << matrix_sum[i][1] << endl;
    }
    for(i=0;i<MAX_ROWS+MAX_COLS;i++)

    for(j=0;j<cols;j++)
        cout << matrix_sum[i][1] << " " << matrix_sum[i][1] << endl;

    return(0);
}

