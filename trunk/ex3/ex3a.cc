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
    int res = 0, n;
    int firstP  = 0,
        secondP = 1;


    cin >> n;
    if (n == 1 || n == 2) return n - 1;

    for (int i = 3; i <= n; i++)
    {
    res = firstP + secondP;
    firstP = secondP;
    secondP = res;
    }
    cout  <<res << endl;
    return(0);
}

