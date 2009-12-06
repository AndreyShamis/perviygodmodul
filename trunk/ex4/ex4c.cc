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
    cin >> user_array_l;


    for(int y=0; y<user_array_l; y++)
        cin >> arr[y];

    for(int i=user_array_l;i>=0;--i)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j]  = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int y=0; y<user_array_l; y++)
        if(arr[y]=>0)
            minused = y;

    cout << minused << " " << user_array_l-minused;

    return(0);
}
