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
    int res = 0,countIndex=3, fibomacciIndex;
    int firstP  = 0,
        secondP = 1;


    cin >> fibomacciIndex;
    if (fibomacciIndex == 1 || fibomacciIndex == 2)
        cout << fibomacciIndex - 1;
    else
    {
        //for (int i = 3; i <= fibomacciIndex; i++)
        //{
        while(countIndex <= fibomacciIndex)
        {
        res = firstP + secondP;
        firstP = secondP;
        secondP = res;
        countIndex++;
        }
        //}
        cout  <<res << endl;
    }
    return(0);
}

