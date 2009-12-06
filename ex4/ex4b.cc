/*
 * EX4B    ::
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 */

//--------------- including section -------------
#include <iostream>

//--------------- using section        -------------
using std::cout;
using std::cin;
using std::endl;

const int NUM_OF_STATES=6;  // max lentgh of array
//--------------- main                 -------------
int main()
{
    int electoralA[NUM_OF_STATES];
    int voters[NUM_OF_STATES][2];

    for(int i=0;i<NUM_OF_STATES;i++)
    {
        cin >> electoralA[i];
    }

    for(int i=0;i<NUM_OF_STATES;i++)
    {
        cin >> electoralA[i];
    }

    for(int i=0;i<NUM_OF_STATES;i++)
    {
        cout << electoralA[i] << " | ";
    }
    return(0);
}
