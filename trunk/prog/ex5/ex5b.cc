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
        //matrix_sum[MAX_ROWS+MAX_COLS][1], // [][0 negative or 1=positive]
        matrix_rows[MAX_ROWS][1],
        matrix_cols[MAX_COLS][1],
        row, cols,i,j;
    //abs(x)
    cin >> row >> cols;
    for(i=0;i<row;i++)
    {
        cout << i << endl;
        matrix_rows[i][0]=0;
        matrix_rows[i][1]=0;
    }
    //for(i=0;i<cols;i++)
    //{
    //    matrix_cols[i][0]=0;
    //    matrix_cols[i][1]=0;
    //}

    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
            cin >> matrix[i][j];


 //   for(i=0;i<row;i++)
 //   {
 //       for(j=0;j<cols;j++)
 //           cout << matrix[i][j] << "\t";
 //       cout << endl;
 //   }

    for(i=0;i<row;i++)
    {
        cout <<   matrix_rows[i][0] << " " <<    matrix_rows[i][1] << endl;
    }
    for(i=0;i<row;i++)
    {
        cout << "\n Start Rows \n";
        for(j=0;j<cols;j++)
        {
            cout << "\t Matrix:" << matrix[i][j] << "\t i:"
            << i<< "\t j:" << j  << endl;

                cout << matrix_rows[i][1] << " " << matrix_rows[i][0] << "\n";

            if (matrix[i][j]>= 0)
            {
                matrix_rows[i][1]=matrix_rows[i][1]+matrix[i][j];
                //matrix_cols[j][1]+=matrix[i][j];

            }
            else
            {
                cout << "\n else \n";
                matrix_rows[i][0]=matrix_rows[i][0] + matrix[i][j];
               // matrix_cols[j][0]+=matrix[i][j];

            }
                cout << matrix_rows[i][1] << " " << matrix_rows[i][0] << "\n";
        }
    }

cout << "\n";

    for(i=0;i<row;i++)
    {
          cout << "\n\t row" << i
          << " \t| " << matrix_rows[i][0] << ": \t | " << matrix_rows[i][1]
          << "\t\tABS= " << abs(matrix_rows[i][1]+matrix_rows[i][0]) ;

   }
   // for(i=0;i<cols;i++)
  //  {
   //       cout << "\n\t" << i<< ": \t (-) | " << matrix_cols[i][0] << "\t+" << matrix_cols[i][1]
 //         << "\t|\tABS= " << abs(abs(matrix_rows[i][0])-matrix_rows[i][1]) ;
// }

cout << endl;
    return(0);
}

