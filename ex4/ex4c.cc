/*
 * EX4C    ::
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 */

//--------------- including section -------------
#include <iostream>
#include <algorithm>
#include <functional>
//--------------- using section        -------------
using std::cout;
using std::cin;
using std::endl;

const int ARRAY_LEN=10;  // max lentgh of array
//--------------- main                 -------------
int main()
{
    int user_array_l;
    int arr[ARRAY_LEN];
    int minused=0;

    int i,j;
    cin >> user_array_l;


    for(int y=0; y<user_array_l; y++)
        cin >> arr[y];

     for(i=0;i<user_array_l;i++)
          for(j=1;j<(user_array_l-i);j++)
             if( arr[j-1]>arr[j] )
             {
                 int save = arr[j-1];
                 arr[j-1] = arr[j];
                 arr[j]= save;
             }

  //  for(int y=0; y<user_array_l; y++)
   //     if(arr[y]=>0)
    //        minused = y;

    cout << minused << " " << user_array_l-minused;

    return(0);
}
