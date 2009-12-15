/*
 * EX5C    ::
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 */

//--------------- including section -------------
#include <iostream>

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
//cout << row%2 << "\n";
int max_avail=0;
    // Looking for max len can be count
    max_avail = (row<cols)? row:cols; // taken from inters
    max_avail = (max_avail%2)? max_avail:max_avail-1; // putting to izugi
    //cout << max_avail << "\n";
    for(i=0;i<row;i++)
        for(j=0;j<cols;j++)
            cin >> matrix[i][j];

int glub;
bool yaalom = false;
    for(i=0;i<row-2;i++)
    {
        for(j=1;j<cols-1;j++)
        {
            //eto uslovie vsegda doljno proiskodit dlya kajdogo rubina
            if( matrix[i][j] != matrix[i][j+1] &&
                matrix[i][j] != matrix[i][j-1] &&
                matrix[i][j] == matrix[i+1][j] &&
                matrix[i][j] == matrix[i+1][j-1] &&
                matrix[i][j] == matrix[i+1][j+1] &&
                matrix[i][j] == matrix[i+2][j])
            {

                //nayti glubinu
                glub=3;
                // nahodim glubinu
                for(x=i+3;x<row-1;x+=2)
                    if(matrix[i][j] == matrix[x][j] &&  matrix[i][j] == matrix[x+1][j])
                        glub+=2;
                    else
                        break;
                // znaem tochnuyu glubinu
               // cout << "\n - # ---- " << glub << "--------------:   :  \t ." << 1+ j-((glub+1)/2) << " "   << endl ;

                // eta shtuchka esit vse levie rubini (pochti)
                if(1+ j-((glub+1)/2) >=0)
                {
                cout << i << " " << j << " " << glub  <<  "\n"; //" /" << matrix[i][j] << "/. " ;
                yaalom=true;
                }
                //cout << i << " " << j << " " << glub  <<  "\n"; //" /" << matrix[i][j] << "/. " ;
                // proverit pravelnost rubina
                // dlina doljna podhodit
                // esli ne podhoodit znachit eto ne rubin

                // 2 stolbca uje proverili
                // proveryaem pravilnost shirini if(j-((glub+1)/2)>=0 && j+((glub+1)/2)<=cols)

                // proveryaem pravilnie i nepravilnie kubiki


/*
                glub=1;
                for(x=i+1;x<row,yaalom;x++)
                {  if(j-((glub+1)/2)>=0 && j+((glub+1)/2)<=cols)
                        glub++;
                    else
                        break;
                   for(y=j-((glub+1)/2);y<j+((glub+1)/2);y++)
                        if(matrix[i][j] != matrix[y][x]){
                            glub--;
                            yaalom=false;
                            cout << "tut " << matrix[i][j] << " " << matrix[y][x] << "\n";
                            break;
                        }
                } */
                //po trokam proverit pravilnost kajdogog stolbca v dannom ryady


            }
        }
    }
//cout << endl;
    return(0);
}

