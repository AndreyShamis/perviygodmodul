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

        row, cols,i,j,x,y;

    cin >> row >> cols;

    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
            cin >> matrix[i][j];

int side_horisontale=0;
int side_verticale=0;
int max_found=0;
int start=0,end=0;
int p=0;

    for(i=0;i<row-1;i++)
    {
            p=0;
        for(j=0;j<cols-1;j++)
        {
            for(x=i;x<row-1;x++)
            {
                for(y=j;y<cols-1;y++)
                {
                    if(matrix[x][y+1]>matrix[x][y])
                    {

                            start=y;
                      //  side_horisontale =p;
                    }
                    else
                    {
                        end = y - start;
                        side_horisontale = end;
                        break;
                    }
                    cout << "\t " << start << " " << end
                    << "\t " << i  << " " << j << " " << x << " " << y  << "\n";
                }



            }
        }
    }
cout << endl;
    return(0);
}

