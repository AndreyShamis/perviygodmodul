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
    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
        {

            gvul = j;
            int max_can_be = (row-i)*(cols-j);
            if(big_count>max_can_be)
            {
            // cout << max_can_be << endl;
               // break;
                // foud;
            }
            cout << "\n";
            dlina=1;


            for(x=i;x<row;x++)
            {
                for(y=j;y<cols-1;y++)
                {
                    if(matrix[x][y] <= matrix[x][y+1])
                    {
                        //cout << "dlina bolshe " << x <<  endl;
                        dlina = ((y - j)+1);
                        cout << matrix[x][y] << " d:" << dlina  << " " ;
                    }
                    else
                    {
                        cout << matrix[x][y] << ":" <<  x-i << "*" << cols*(x-i);

                        break;
                    }


                }
                cout << endl;

                /*
                for(y=j;y<cols-1;y++)
                {
                    if(matrix[x][y] <= matrix[x][y+1])
                    {
                        big_count = ((y - j)+1)*((x - i)+1);
                        if(big_count>bigger)
                        {
                            bigger =big_count;
                            start_r=i;
                            end_r= (x+1) - i;
                            start_c=j;
                            end_c=y-j;
                            cout << " bi t " << big_count << "\n";
                        }
                    }
                    else
                    {
                        //gvul = y-1;
                        break;
                    }

                    //cout << matrix[x][y] << "\t " << start_r << " " << end_r << "\t " << i  << " " << j << " " << x << " " << y  << "\n";
                }
  */
            }
        }
        cout    <<  "\n"
                <<  start_r     << " "
                <<  start_c     << " "
                <<  end_r       << " "
                <<  end_c       << " ";

cout << endl;
    return(0);
}

