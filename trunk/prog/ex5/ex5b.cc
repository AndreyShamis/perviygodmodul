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

//--------------- main                 -------------
int main()
{
    const int MAX_ROWS = 10;
    const int MAX_COLS = 20;

    int matrix[MAX_ROWS][MAX_COLS],
        row, cols,i,j,x,y;

    cin >> row >> cols;

    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
            cin >> matrix[i][j];

int bigger=0;

int start_r=0,end_r=0;
int start_c=0,end_c=0;
int dlina;
bigger=0;
    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
        {
            int max_can_be = (row-i)*(cols-j);
            if(bigger>max_can_be)
            {

               break;
            }
            dlina=1;

int buy=cols;
int glub = 1;
            for(x=i;x<row;x++)
            {

                for(y=j;y<buy-1;y++)
                {
                    if(matrix[x][y] <= matrix[x][y+1])
                    {
                        continue;
                    }
                    else
                    {       buy = y-j+1;
                            break;
                    }
                }

                if(glub*(y-j+1)>bigger)
                {
                    bigger=glub*(y-j+1);
                 //   cout << matrix[i][j] << " " <<  matrix[x][y] << " :" <<  glub << "*" << y-j+1 << "|" << buy << "== " <<bigger << "\n";
                    start_r =   i;
                    end_r   =   j;
                    start_c =   glub;
                    end_c   =   y-j+1;
                }


                if(x+1 < row)
                {
                    if(matrix[x][y] > matrix[x+1][j])
                    {
                        //cout << x-i << " " << y-j << "\n";
                       // cout << matrix[i][j] << " " << matrix[x+1][j]
                     //   << "||" << j << " " <<  x+1 << " :" <<  glub+1 << "*" << y-j+1  << "== " <<bigger << " buy: " << buy << "\n" ;
                        break;
                    }
                }
                 glub++;
            }
        }

cout <<                  start_r    << " " <<
                         end_r      << " " <<
                         start_c    << " " <<
                         end_c      << "\n" ;
    return(0);
}

