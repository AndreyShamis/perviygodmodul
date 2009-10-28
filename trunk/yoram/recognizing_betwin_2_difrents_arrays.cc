//-------------- include section -----------------------------------------------
#include <iostream>

//-------------- using section -------------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//-------------- const and enum section ----------------------------------------
const unsignd ROWS_BIG=4,
              COLS_BIG=5,
              ROWS_SMALL=2,
              COLS_SMALL=3;
              
//-------------- main ----------------------------------------------------------
int main ()
{
int big[ROWS_BIG][COLS_BIG],
    small[ROWS_SMALL][COLS_BIG];
int row_big, col_big, row_small, col_big;
bool equal;
    
    for (row_big=0; row_big<ROWS_BIG-ROWS_SMALL+1; row_big++)     //this 2 loops runing above the high/left corner 
    {    
        for (col_big=0; col_big<COLS_BIG-COLS_SMALL+1; col_big++)
        {
			equal=true;
			
            for (row_small=0; row_small<ROWS_SMALL && equal; row_small++)
                
                for (col_small=0; col_small<COLS_SMALL && equal; col_small++)
                
                    if (small[row_small][col_small]!=big[row_big+row_small][col_big+col_small])
                        equal=false;
    
            if (equal)
                cout << row_big << " " << col_big;
        }
	}
return(0);
}
