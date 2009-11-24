/*
 * EX3A    :: Return value of fibonacci by index
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *
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
    long int    result,         // Result Variable
                firstP  = 0,    // First and then back fibo variable
                secondP = 1;    // Second and then front fibo variable

    int     countIndex=0,       //
            fibomacciIndex;     // ID of fibonacci needed

    cin >> fibomacciIndex;      // Get id needed

    if (fibomacciIndex == 0 || fibomacciIndex == 1) // First and second id in
        result = fibomacciIndex;                // fibo simillar to their value
    else
        while(countIndex <= fibomacciIndex)
        {
        result = firstP + secondP;
        firstP = secondP;
        secondP = result;
        countIndex++;
        }

    cout  <<    result << endl;

    return(0);
}

