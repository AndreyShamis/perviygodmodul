/*
 * EX3A    ::
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
    int result,
        countIndex=2,
        fibomacciIndex,
        firstP  = 0,
        secondP = 1;


    cin >> fibomacciIndex;

    if (fibomacciIndex == 0 || fibomacciIndex == 1)
        result = fibomacciIndex;
    else
    {
        while(countIndex <= fibomacciIndex)
        {
        result = firstP + secondP;
        firstP = secondP;
        secondP = result;
        countIndex++;
        }
    }

    cout  <<    result << endl;

    return(0);
}

