/*
 * EX4A    :: Income classification
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *
 *  Plan that defines an array of integers twenty cells.
 *  The plan calls for the user natural number n less than
 *  or equal to twenty, which indicates how many numbers the
 *  user wants to enter the array. Then the program reads n numbers.
 *
 *      Input:  getting lentgh of array(between 1 20)
 *      Output: sorted array
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
    const int MAX_ARRAY_LENTGH=20;  // Max lentgh of array
    int array_lentgh,           // length of the array
        round[MAX_ARRAY_LENTGH],// Array
        count1,count2,          // Counters for FORS
        save;                   // temp variable

    cin >> array_lentgh;        // getting array lentgh (max=MAX_ARRAY_LENTGH)

    for(count1=0; count1<array_lentgh; count1++)    // Getting value to arr
        cin >> round[count1];                       // putting value into array

    for(count1=0; count1<array_lentgh; count1++)    // Scaning what to change
        for(count2=0; count2<array_lentgh-count1-1; count2++) // Scaning
            if(round[count2] > round[count2+1])
            {   // if smaller index array have value biger then next array
                // change valus between array blocks
                save = round[count2] ;          // save value into save
                round[count2] = round[count2+1];// change value between
                round[count2+1] = save;         // putting from save new value
            }

    for(count1=0; count1<array_lentgh; count1++)        // printing array
        cout << round[count1] << " ";                   // couting array
    cout << endl;
    return(0);                            // exiting from programm
}
