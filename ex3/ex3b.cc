/*
 * EX3B    ::
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

int simple(int n)
{
        for(int i=2;i<=n/2;i++)
                if( (n%i)==0 )
                        return 0;
        return 1;
}

int main()
{
    int minNumber,
        maxNumber;

    int x , y ;

    cin >> minNumber >> maxNumber;

    if(minNumber < 3 || minNumber+3 > maxNumber)
        cout << "Error: Illegal input" << endl;
    else
        for (int i=minNumber;i<=maxNumber;i++)
            if( simple(i)==1 )
            {
                if(i - y == 2)
                {
                    cout << y << " " << i << endl;
                }
                y = i;
            }

    return(0);
}
