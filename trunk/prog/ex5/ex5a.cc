/*
 * EX5A :: Row/Column gap between the amount of positive and negative values
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh

 *  If the maximum gap in the row number i, then row i (for example: row 3),
 *  if the maximum gap in column number col i then i (eg col 3).
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
    const int MAX_ROWS = 10;// Max array rows
    const int MAX_COLS = 20;// Max array cols

    int matrix[MAX_ROWS][MAX_COLS], // array main Matrix
        matrix_rows[MAX_ROWS][3],   // array rows
        matrix_cols[MAX_COLS][3],   // array cols
        row, cols,      // parameters matrix, geted from user
        i,j,            // counters
        bigger = 0,     //
        output_col = 0, //
        output_row = 0; //

    cin >> row >> cols; // Get from user matrix param

    for(i=0;i<row;i++)
    {   // Setting parameters for target counter/rows
        matrix_rows[i][0] = 0; // negative
        matrix_rows[i][1] = 0; // positive
    }
    for(i=0;i<cols;i++)
    {   // Setting parameters for target counter/cols
        matrix_cols[i][0] = 0;  // negative
        matrix_cols[i][1] = 0;  // positive
    }

    //Getting data into matrix
    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
            cin >>  matrix[i][j];  // Puting into

    // Summing rows and cols
    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
            if (matrix[i][j]>= 0)
            {   // Positive value
                matrix_rows[i][1]+= matrix[i][j];
                matrix_cols[j][1]+= matrix[i][j];
            }
            else
            {   // Negative value
                matrix_rows[i][0]+= matrix[i][j];
                matrix_cols[j][0]+= matrix[i][j];
            }

    // Summing results
    for(i=0;i<row;i++)  // from rows
        matrix_rows[i][2] = abs(matrix_rows[i][1] + matrix_rows[i][0]);

    for(i=0;i<cols;i++) // from cols
        matrix_cols[i][2] = abs(matrix_cols[i][1] + matrix_cols[i][0]);

    // Looking for biger value in rows
    for(i=0;i<row;i++)
        if(matrix_rows[i][2]>bigger)
        {
            bigger = matrix_rows[i][2]; // Biger value
            output_row = i;             // row index
        }
    // Looking for biger value in cols
    for(i=0;i<cols;i++)
        if(matrix_cols[i][2]>bigger)
        {
            bigger = matrix_cols[i][2]; //Biger value
            output_col = i;             // col index
        }

    // Print results
    if(output_row>=output_col)
        cout << "row "  << output_row << endl; // Print row if biger then cols
    else
        cout << "col "  << output_col << endl; // Pring col

    return(0);
}

