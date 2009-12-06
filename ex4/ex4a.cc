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
    int array_lentgh; // length of the array
    int round[MAX_ARRAY_LENTGH];
    int counter1,counter2;
    int save;
    cin >> array_lentgh;


    for(counter1=0; counter1<array_lentgh; counter1++)
        cin >> round[counter1];

    for(counter1=0; counter1<array_lentgh; counter1++)
        for (int counter2=0; counter2<array_lentgh-counter1-1; counter2++)
            if(round[counter2] > round[counter2+1])
            {
                save = round[counter2] ;
                round[counter2] = round[counter2+1];
                round[counter2+1] = save;
            }

    for(counter1=0; counter1<array_lentgh; counter1++)
        cout << round[counter1] << " ";
    return(0);
}
