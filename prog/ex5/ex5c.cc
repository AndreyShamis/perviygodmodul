/*
 * EX5C  :: Locating Diamonds
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *
 *  Program represents the details of all diamonds found in the array.
 *  For each diamond has to print the three following data (in this order,
 *  with space between them, a separate line for each diamond and diamond);
 *
 *  To compile : use g++ -Wall ex5c.cc -o ex5c
 *
 *      Input:  Array size rows Max 10 Cols Max 20
 *              and array Table row*cols
 *      Output:
 *      1   -   Line number which is the diamond,
 *      2   -   The column number where he is.
 *      3   -   Size.
 */

//--------------- including section -------------
#include <iostream>

//--------------- using section        -------------
using std::cout;
using std::cin;

//--------------- main                 -------------
int main()
{
    const int MAX_ROWS = 10;    // Max array rows
    const int MAX_COLS = 20;    // Max array cols

    bool diam = false;        //

    int matrix[MAX_ROWS][MAX_COLS], // array
        row, cols,      // parameters matrix, geted from user
        i,j,x,y,        // counters :index for loops
        diameter,       // diameter (size) of diamond
        sidel,          // length of any side diamond center
        rift, //threshold,gives the length of negative steps in the staircase
        up_row, // used to minimize the counting of the upper element in array
        left_col,//used to minimize the counting of the left element in array
        max_avail=0;    //max len can be count

    cin >> row  >> cols; // getting param for matrix

    // Looking for max len can be count
    max_avail = (row<cols)? row:cols; // taken from inters
    max_avail = (max_avail%2)? max_avail:max_avail-1; // putting to izugi

    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
            cin >> matrix[i][j];    // putting value into matrix elements

    for(i=0;i<row-2;i++)
        for(j=1;j<cols-1;j++)
            if( matrix[i][j] != matrix[i][j+1] &&   // This condition must
                matrix[i][j] != matrix[i][j-1] &&   // always occur for each
                matrix[i][j] == matrix[i+1][j] &&   // diamond, not dependent
                matrix[i][j] == matrix[i+1][j-1] && // on its length
                matrix[i][j] == matrix[i+1][j+1] &&
                matrix[i][j] == matrix[i+2][j])
            {
                diameter =   3; // length of which we have already found
                // find the length of the workpiece diamond from 3 (we have)
                for(x=i+2;x<row-1;x+=2)
                    if(matrix[i][j] == matrix[x][j]
                    && matrix[i][j] == matrix[x+1][j])
                        diameter+=  2;  // add 2 to the length
                    else
                        break;          // ended length, we suppress the cycle

                sidel =  (diameter+1)/2;// length of any side diamond center

                // validation of latitude, so as not to go beyond the field
                if(1+j-sidel>=0)
                {
                    diam =   true;
                    // Forget we are looking for a diamond.     //13 13 13 #
                    // To begin with fold our diamond in two    //13 13 !
                    // and get the step ladder ,check it by     //13 !
                    // the same laws                            //$
                    // 13-our diamond. $-vertical.#-horizontal
                    // !-edge of the stairs (4 in diamond)

                    rift =  0; // negative step
                    // looking from i(up) to i++(down)
                    for(x=i+sidel-1;x<2*sidel+i-1 && diam;x++)
                    {
                        if(x==i+sidel-1)
                        {   // check the top and bottom (outside) {"$"}
                            if(x-sidel>=0)  // up side
                                if(matrix[i][j]==matrix[x-sidel][j])
                                    diam =  false;

                            if(x+sidel<row) // down side
                                if(matrix[i][j]==matrix[x+sidel][j])
                                    diam =  false;
                        }

                        for(y=j;y<j+sidel-rift && diam;y++)
                        {   // looking from left to right
                            up_row   =  x-(2*rift); // upper element in array
                            left_col =  (2*j)-y;    // left element in array

                            if(y==j)
                            {   // check the outside {"#"}
                                if(j-sidel>=0)      // left side
                                    if(matrix[i][j]==matrix[x][j-sidel])
                                        diam =  false;

                                if(j+sidel<cols)    // right side
                                    if(matrix[i][j]==matrix[x][j+sidel])
                                        diam =  false;
                            }
                            else if(y==j+sidel-rift-1)//check the edges {"!"}
                                if(matrix[i][j]==matrix[x][y+1]
                                || matrix[i][j]==matrix[x][left_col-1]
                                || matrix[i][j]==matrix[up_row][y+1]
                                || matrix[i][j]==matrix[up_row][left_col-1])
                                    diam =  false;

                            // check inside {"13"}
                            if(matrix[i][j]!=matrix[x][y]
                            || matrix[i][j]!=matrix[x][left_col]
                            || matrix[i][j]!=matrix[up_row][y]
                            || matrix[i][j]!=matrix[up_row][left_col])
                                diam =  false;
                        }
                        rift++; // add the negative step
                    }

                    if(diam)  // if found something output him parameters
                        cout << i << " " << j << " " << diameter  <<  "\n";
                }
            }

    return(0);
}
