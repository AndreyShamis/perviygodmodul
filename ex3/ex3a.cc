/*
 * EX3A    :: Return value of fibonacci by index
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *
 *	input data:	index of fibonacci
 *					max 46
 *	ouput data: fibonache value
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
    long int    temp,         // temp Variable
                // MAX value can get in index 46 = 1836311903 (start from 0)
                firstP  = 0,    // First and then back fibo variable
                secondP = 1;    // Second and then front fibo variable

    int     countIndex=0,       // Real Program ID
            fibomacciIndex;     // ID of fibonacci needed

    cin >> fibomacciIndex;      // Get id needed

    while(countIndex < fibomacciIndex)
    {
        temp    = firstP + secondP;
        firstP  = secondP;
        secondP = temp;
        countIndex++;
    }

    cout << firstP << endl;     // Return Value

    return(0);
}

