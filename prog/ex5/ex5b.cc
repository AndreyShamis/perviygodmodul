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
        i,j,x,y, // counters
        start_r=0,end_r=0,  // Output index coordinates
        start_c=0,end_c=0,  // Output Height and Width
        height,width,len_width,bigger=0,
        max_can_be=0,
        next_cols_width;

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

            for(x=i;x<row;x++)
            {   // looking in height
                height++;   // Set new height
                width   = 1;// Set new width
                next_cols_width=0; // Set new line checker
                for(y=j;y<len_width+j;y++) // looking in width
                {
                    if(matrix[x][y] > matrix[x+1][j] && x+1 != row)
                        next_cols_width = (y-j-1<0)?  y-j : y-j-1; //line check

                    if(matrix[x][y] > matrix[x][y+1])
                    {   // if next value small than this value
                        len_width = y-j;    // set new value for looking width
                        break;
                    }
                    else
                        width++;            // width + 1

                }

                if(next_cols_width) //if found that some balue biger than value
                    len_width=next_cols_width;// off new line, set new value/
					
                if(x+1 != row)
                   if(matrix[x][y] > matrix[x+1][j])
                   {
                        if(len_width  >  0)
                            len_width--;
                        if(len_width ==  0)
                            break;

                if((height*width) > bigger)
                {   // If this space bigger than previous founded
                    bigger = height*width;  // Sets new values
                    start_r =   i;          // index height
                    end_r   =   j;          // index width
                    start_c =   height;     // len height
                    end_c   =   width;      // len width
                }
                   }

                if(x+1 != row)  // Check if we not out of range
                   if(matrix[x][y] > matrix[x+1][j]) // check last value with
                        if(len_width  >  2)          // new value
                            len_width-=2;            // set new param for loop
                        else
                            break;                   // exit if len_width == 0
            }
        }

    cout    << start_r << " " << end_r << " "       // Output data
            << start_c << " " << end_c << "\n" ;    // Output Data
    return(0);
}

