/*
 * EX4A    :: Income classification
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *
 *  Plan that defines an array of integers twenty cells.
 *  The plan calls for the user natural number n less than
 *  or equal to twenty, which indicates how many numbers the
 *  user wants to enter the array. Then the program reads n numbers.
 */

//--------------- including section -------------
#include <iostream>

//--------------- using section        -------------
using std::cout;
using std::cin;
using std::endl;

const int MAX_ARRAY_LENTGH=20;
//--------------- main                 -------------
int main()
{
    int array_lentgh;           // length of the array
        round[MAX_ARRAY_LENTGH],// Array
        counter1,counter2,      // Counters for FORS
        save;                   // temp variable

    cin >> array_lentgh;        // getting array lentgh (max=MAX_ARRAY_LENTGH)

    for(counter1=0; counter1<array_lentgh; counter1++)  // Getting value to arr
        cin >> round[counter1]; // putting value into array

    for(counter1=0; counter1<array_lentgh; counter1++)  //
        for (int counter2=0; counter2<array_lentgh-counter1-1; counter2++)
            if(round[counter2] > round[counter2+1])
            {   // if smaller index array have value biger then next array
                // change valus between array blocks
                save = round[counter2] ;    // save value into save
                round[counter2] = round[counter2+1];// change value between
                round[counter2+1] = save;   // putting from save new value
                round[counter2+1] = save;   // putting from save new value
            }

    for(counter1=0; counter1<array_lentgh; counter1++)  // printing array
        cout << round[counter1] << " ";                 // couting array

    return(0);                              // exiting from programm
}
