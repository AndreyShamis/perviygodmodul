/*
 * EX4C    ::Counting negative / E - Negative array sorted
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *
 *  The program sorts the numbers entered her small grow using Bubble
 *  sort algorithm. After sorting the program to some negative values,
 *  and some non negative values (positive or zero) are a pair of
 *  array and display data. So let the program includes two numbers
 *  with a space between them (the first indicates how the array contains
 *  negative values, a few other non negative values).
 */

//--------------- including section -------------
#include <iostream>
#include <algorithm>
#include <functional>
//--------------- using section        -------------
using std::cout;
using std::cin;
using std::endl;

//--------------- main                 -------------
int main()
{
    const int ARRAY_LEN=10; // max lentgh of array
    int us_arr_len,         // array len seting by user
        arr[ARRAY_LEN],     // array of numbers max len ARRAY_LEN
        negative=0,         // sum of negative numbers
        counter1,           // counter for FOR
        counter2,           // counter for FOR
        save;               // temprorary variable

    cin >> us_arr_len;      // getting from user arr lentgh

    for(counter1=0; counter1<us_arr_len; counter1++)
        cin >> arr[counter1];      // putting some numbers into array by user
    // start Bubble sort algorithm
    for(counter1=0;counter1<us_arr_len;counter1++)
        for(counter2=1;counter2<(us_arr_len-counter1);counter2++)
            if( arr[counter2-1]>arr[counter2] ) // check if arr[n-1] > arr[n]
            {   // start change between values
                save = arr[counter2-1];         //  save to temporary variable
                arr[counter2-1] = arr[counter2];//  berween them
                arr[counter2]= save;            // and token from saved
            }

    // checking how meny negative numbers we are have
    // if we dont have any negative nymbers cicle dosn` work
    for(counter1=0; counter1<us_arr_len && arr[counter1]<0; counter1++)
        if(arr[counter1]<0)
            negative++;
    // print result
    cout << negative << " " << us_arr_len-negative << endl;

    return(0);
}
