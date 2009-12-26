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



int start_r=0,end_r=0;
int start_c=0,end_c=0;

int height,width,len_width,bigger=0;

    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
        {
            //int max_can_be = (row-i)*(cols-j);
            //if(bigger>max_can_be)
            //{

            //   break;
            //}

            height  = 0;

            len_width = cols-1-j;
           //     cout << cols-1-j << "\n" ;
           cout << "+++\n";
            for(x=i;x<row;x++)
            {
                height++;
                width   = 1;
                for(y=j;y<len_width+j;y++)
                {
                    if(matrix[x][y] > matrix[x][y+1])
                    {
                        len_width = y-j;
                        //cout << x << ":" << len_width << " ";
                        break;
                    }
                    else
                    {
                        width++;
                //      cout << height << "*" << width << "==" << height*width << " " ;
                    }
                   // cout << height << ":" << width << " "  << ". ";
                }
                if((height*width) > bigger)
                {
                    bigger = height*width;
                    start_r =   i;
                    end_r   =   j;
                    start_c =   height;
                    end_c   =   width;
                }
                if(x+1 != row)
                {
                   if(matrix[x][y] > matrix[x+1][j]){
                        //break;
                        if(len_width>0)
                            len_width--;
                        else
                            break;

                   }
                   cout  << x << "-" << y<< "--" << x+1 << "-" << j<< "--" << matrix[x][y] << " == " << matrix[x+1][j] << "\n";
                }
                //cout << "\n";
            }
        }

cout <<                  start_r    << " " <<
                         end_r      << " " <<
                         start_c    << " " <<
                         end_c      << "\n" ;
    return(0);
}

