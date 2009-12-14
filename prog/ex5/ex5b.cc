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

int bigger=0;
int big_count=0;
int start_r=0,end_r=0;
int start_c=0,end_c=0;

    for(i=0;i<row-1;i++)
        for(j=0;j<cols-1;j++)
        {
            for(x=i;x<row;x++)
            {
                for(y=j;y<cols;y++)
                {
                    if(matrix[x][y+1]>=matrix[x][y])
                    {
                        big_count = ((y - j)+1)*((x - i)+1);
                        if(big_count>bigger)
                        {
                            bigger =big_count;
                            start_r=i;
                            end_r=x+1;
                            start_c=j;
                            end_c=y;
                            cout << "bi t " << big_count << "\n";
                        }
                       //     start=y;
                      //  side_horisontale =p;

                    }
                    else
                    {
                       // end = y - j;
                       // side_horisontale = end;
                       // cout << ((y - j)+1)*((x - i)+1) << endl << endl;
\
                        break;
                    }
                    //cout << matrix[x][y] << "\t " << start_r << " " << end_r << "\t " << i  << " " << j << " " << x << " " << y  << "\n";
                }


            }
           // cout <<"\t " << start_r << " " << end_r << "\t " << start_c  << " " << end_c<< "\n";
        }
        cout
                <<  start_r     << " "
                <<  start_c     << " "
                <<  end_r       << " "
                <<  end_c       << " ";

cout << endl;
    return(0);
}

