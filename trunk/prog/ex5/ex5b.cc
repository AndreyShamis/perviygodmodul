/*
 * EX5B  :: Maximum Sub Array monotonous immigrants whose values
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *
 *  Detect sub - set a very large rectangular platform (maximum area)
 *  located at - matrix maintains underground organs - the array are
 *  in ascending order; Set Ascending: each cell is less than or
 *  equal to the next cell row, last cell in a row less than or equal
 *  first cell in the next row.
 */

//--------------- including section -------------
#include <iostream>

//--------------- using section        -------------
using std::cout;
using std::cin;

//--------------- main                 -------------
int main()
{
    const int MAX_ROWS = 10;// Max array rows
    const int MAX_COLS = 20;// Max array cols

    int matrix[MAX_ROWS][MAX_COLS], // Matrix
        row, cols,// parameters matrix, geted from user
        i,j,x,y; // counters
    int start_r=0,end_r=0;
    int start_c=0,end_c=0;

    int height,width,len_width,bigger=0;
    int max_can_be=0;
    int next_cols_width;

    cin >> row >> cols;// Get from user matrix param
    //Getting data into matrix
    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
            cin >> matrix[i][j];// Puting into

    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
        {
            max_can_be = (row-i)*(cols-j); // Check if posible find biger

            if(bigger>max_can_be)
               break;               // if not

            height  = 0;            // set height
            len_width = cols-1-j;   // set width of cols
           //cout << "+++\n";
            for(x=i;x<row;x++)
            {
                height++;
                width   = 1;
                next_cols_width=0;
                for(y=j;y<len_width+j;y++)
                {
                    if(matrix[x][y] > matrix[x+1][j])
                        next_cols_width = y-j;
                    else
                        next_cols_width = 0;

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
                    //cout << len_width << "+" << height << ". ";
                   // cout << height << ":" << width << " "  << ". ";
                }
                if(next_cols_width)
                    len_width=next_cols_width;

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
                        if(len_width==0)
                            break;

                   }
                   //cout  << x << "-" << y<< "--" << x+1 << "-" << j<< "--" << matrix[x][y] << " == " << matrix[x+1][j] << "\n";
                }
                //cout << "\n";
            }
        }

    cout    << start_r << " " << end_r << " "
            << start_c << " " << end_c << "\n" ;
    return(0);
}

