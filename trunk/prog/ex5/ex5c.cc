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
//cout << row%2 << "\n";
int max_avail=0;
    // Looking for max len can be count
    max_avail = (row<cols)? row:cols; // taken from inters
    max_avail = (max_avail%2)? max_avail:max_avail-1; // putting to izugi
    cout << max_avail << "\n";
    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
            cin >> matrix[i][j];

int glub;
bool yaalom = false;
    for(i=0;i<row-2;i++)
    {
        for(j=1;j<cols-1;j++)
        {
            if( matrix[i][j] != matrix[i][j+1] &&
                matrix[i][j] != matrix[i][j-1] &&
                matrix[i][j] == matrix[i+1][j] &&
                matrix[i][j] == matrix[i+2][j] &&
                matrix[i][j] == matrix[i+1][j-1] &&
                matrix[i][j] == matrix[i+1][j+1] &&
                matrix[i][j] != matrix[i+1][j+2] &&
                matrix[i][j] != matrix[i+1][j-2] )
            {

                glub=3;
                for(x=i+3;x<row-2;x+=2)
                {
                    if(matrix[i][j] == matrix[x][j] && matrix[i][j] == matrix[x+1][j])
                    {
                        if(j-((glub+1)/2)>=0 && j+((glub+1)/2)<=cols)
                            glub+=2;
                        else
                            break;
                    }
                    else
                        break;
                }
                cout << i << " " << j << " " << glub  <<  " /" << matrix[i][j] << "/. " ;
                yaalom=true;

            }
        }
    }
cout << endl;
    return(0);
}

