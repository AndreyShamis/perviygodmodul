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
    const int MAX_ROWS = 10;
    const int MAX_COLS = 20;

    int matrix[MAX_ROWS][MAX_COLS],
        matrix_rows[MAX_ROWS][3],
        matrix_cols[MAX_COLS][3],
        row, cols,
        i,j,
        bigger=0,
        output_col=0,
        output_row=0;

    cin >> row >> cols;

    for(i=0;i<row;i++)
    {
        matrix_rows[i][0]=0;
        matrix_rows[i][1]=0;
    }
    for(i=0;i<cols;i++)
    {
        matrix_cols[i][0]=0;
        matrix_cols[i][1]=0;
    }

    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
            cin >> matrix[i][j];

    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
            if (matrix[i][j]>= 0)
            {
                matrix_rows[i][1]+=matrix[i][j];
                matrix_cols[j][1]+=matrix[i][j];

            }
            else
            {
                matrix_rows[i][0]+=matrix[i][j];
                matrix_cols[j][0]+=matrix[i][j];
            }

    for(i=0;i<row;i++)
        if(matrix_rows[i][3]>bigger)
        {
            bigger = matrix_rows[i][3];
            output_row = i;
        }

    for(i=0;i<cols;i++)
        if(matrix_cols[i][3]>bigger)
        {
            bigger = matrix_cols[i][3];
            output_col = i;
        }

    if(output_row>=output_col)
        cout << "row "  << output_row << endl;
    else
        cout << "col " << output_col << endl;

    return(0);
}

