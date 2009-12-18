/*
 * EX5B    ::
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

int bigger=0, gvul=0;
int big_count=0;
int start_r=0,end_r=0;
int start_c=0,end_c=0;
int dlina;
bigger=0;
    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
        {

            gvul = j;
            int max_can_be = (row-i)*(cols-j);
            if(bigger>max_can_be)
            {
             //cout << max_can_be << endl;
               break;
                // foud;
            }
            //cout << "\n";
            dlina=1;

int buy=cols;
int glub = 0;
            for(x=i;x<row;x++)
            { for(y=j;y<buy-1;y++)
                {
                    if(matrix[x][y] <= matrix[x][y+1])
                    {   dlina = ((y - j)+1);
                        //cout << matrix[x][y] << " " ;
                    }
                    else
                    {       buy = y-j;
                            break;
                    }
                }
                if((glub+1)*(y-j+1)>bigger){
                    //bigger
                  bigger=(glub+1)*(y-j+1);
                    //cout << matrix[i][j] << " " <<  matrix[x][y] << " :" <<  glub+1 << "*" << y-j+1  << "== " <<bigger << endl;

                         start_r=i;
                         end_r=j;
                         start_c=glub+1;
                         end_c=y-j+1;
                //cout <<(glub+1)*(y-j+1) << endl ;
                }
                if(matrix[x][y] > matrix[x+1][j])
                {

                    //cout << "\nx:" << x  << " y:" << y<< "\n";
                    //cout << "\nFirst:" << matrix[i][j] <<" Old:" << matrix[x][y]  << " new:" << matrix[x+1][j]<< "\n";
                    //cout << "\n" << glub * buy;
                    break;
                    //glub = 0;
                }

                glub++;

            }
        }

cout <<                  start_r    << " " <<
                         end_r      << " " <<
                         start_c    << " " <<
                         end_c      << " " <<
 endl;
    return(0);
}

