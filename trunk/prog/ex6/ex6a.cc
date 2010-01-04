/*
 * EX6A ::
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 */

//--------------- including section -------------------------------------------
#include <iostream>
#include <cstdlib>

//--------------- using section -----------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//-----------------------------------------------------------------------------
const int MAX_ROWS = 10;// Max array rows
const int MAX_COLS = 20;// Max array cols
//-----------------------------------------------------------------------------
void read_input(int &row,int &cols, int matrix[][MAX_COLS]);
void matrix2array(int row,int cols,const int matrix[][MAX_COLS] , int mat[]);
void sort_data(int array_lentgh, int round[]);
int  find_bigger(const int mat[],int arr_len);

//--------------- main --------------------------------------------------------
int main()
{
    int matrix[MAX_ROWS][MAX_COLS], // array main Matrix
        mat[MAX_ROWS*MAX_COLS], // array main Matrix
        row, cols;      // parameters matrix, geted from user


    //Getting data into matrix
    read_input(row,cols,matrix);
    matrix2array(row,cols,matrix,mat);
    sort_data(row*cols,mat);
    cout << find_bigger(mat,row*cols);
    //for(i=0; i<(row*cols); i++)
    //{
    //    cout << i << " " <<  mat[i] << "\n";
    //}


    //for(i=0;i<row;i++)
    //    for(j=0;j<cols;j++)
    //        if(matrix[i][j])
    //        {
    //            ;  // Puting into
    //        }
    cout << endl;
    return(0);
}
int find_bigger(const int mat[],int arr_len)
{
    int i,sctr,bigger=0,smaller=0;
    sctr = 0;

    smaller = mat[0];
    for (i=0;i<arr_len-1;i++)
    {

        if(mat[i] == mat[i+1] -1)
        {
            sctr++;
        }
        else
        {
            if(bigger < sctr)
            {
                bigger=sctr+1;
                smaller = mat[i+1];
            }
            sctr=0;
        }
        if(bigger < sctr)
        {
            bigger=sctr+1;
        }
    }
    return (bigger);
}
//-----------------------------------------------------------------------------
void matrix2array(int row,int cols,const int matrix[][MAX_COLS] , int mat[])
{
    int len=0;
    int i,j;            // counters
    for(i=0;i<row;i++)
        for(j=0;j<cols;j++,len++)
        {
            mat[len]    =   matrix[i][j];
        }

}
//-----------------------------------------------------------------------------
void read_input(int &row,int &cols, int matrix[][MAX_COLS])
{
    int   i,j;            // counters

    cin >> row >> cols; // Get from user matrix param

    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
            cin >>  matrix[i][j];  // Puting into

}
//-----------------------------------------------------------------------------
void sort_data(int array_lentgh, int round[])
{
    int save;
    int count1, count2;
    for(count1=0; count1<array_lentgh; count1++)    // Scaning what to change
        for(count2=count1; count2 >0; count2--)     // Scaning to back
            if(round[count2] < round[count2-1])
            {   // if smaller index array have value biger then next array
                // change valus between array blocks
                save = round[count2] ;          // save value into save
                round[count2] = round[count2-1];// change value between
                round[count2-1] = save;         // putting from save new value
            }
}
