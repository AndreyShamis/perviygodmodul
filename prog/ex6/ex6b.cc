/*
 * EX6B  ::
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *
 */

//--------------- including section -------------
#include <iostream>

//--------------- using section        -------------
using std::cout;
using std::cin;

const int MAX_ROWS = 10;// Max array rows
const int MAX_COLS = 20;// Max array cols

void read_input(int &row, int &cols, int mat[][MAX_COLS]);
void max_monotonic(int row, int cols, int mat[][MAX_COLS],int &start_r, int &end_r,int &start_c ,int &end_c);
void write_output(int start_r, int end_r,int start_c ,int end_c);
void is_monotonic();
void next_cell();
//--------------- main                 -------------
int main()
{


    int matrix[MAX_ROWS][MAX_COLS], // Matrix
        row, cols,// parameters matrix, geted from user
        start_r=0,end_r=0,  // Output index coordinates
        start_c=0,end_c=0;  // Output Height and Width

    read_input(row,cols,matrix);    // read input
    max_monotonic(row, cols, matrix,start_r,end_r,start_c ,end_c);
    write_output(start_r, end_r, start_c, end_c);  // Output Data)

    return(0);
}

void max_monotonic(int row, int cols, int mat[][MAX_COLS],int &start_r, int &end_r,int &start_c ,int &end_c)
{
    int i,j,x,y, // counters
        height,width,len_width,bigger=0,
        max_can_be=0,
        next_cols_width;

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
                    if(mat[x][y] > mat[x+1][j] && x+1 != row)
                        next_cols_width = (y-j-1<0)?  y-j : y-j-1; //line check

                    if(mat[x][y] > mat[x][y+1])
                    {   // if next value small than this value
                        len_width = y-j;    // set new value for looking width
                        break;
                    }
                    else
                        width++;            // width + 1

                }
                if(next_cols_width) //if found that some balue biger than value
                    len_width=next_cols_width;// off new line, set new value/

                if((height*width) > bigger)
                {   // If this space bigger than previous founded
                    bigger = height*width;  // Sets new values
                    start_r =   i;          // index height
                    end_r   =   j;          // index width
                    start_c =   height;     // len height
                    end_c   =   width;      // len width
                }
                if(x+1 != row)  // Check if we not out of range
                   if(mat[x][y] > mat[x+1][j]) // check last value with
                        if(len_width  >  2)          // new value
                            len_width-=2;            // set new param for loop
                        else
                            break;                   // exit if len_width == 0
            }
        }

}
void read_input(int &row, int &cols, int mat[][MAX_COLS])
{
    int i,j;
    cin >> row >> cols;// Get from user matrix param
    //Getting data into matrix
    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
            cin >> mat[i][j];// Puting into
}

void write_output(int start_r, int end_r,int start_c ,int end_c)
{
    cout    << start_r << " " << end_r << " "       // Output data
            << start_c << " " << end_c << "\n" ;    // Output Data
}
