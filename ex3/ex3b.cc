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

int simple(int input)
{   // Function to find if input number is simple
    int index;                          // Used in cicle

        for(index=2; index <= input/2; index++)
            if((input%index) ==  0)     // if find devider return 0
                return (0);

    return(1);                          // return 1 if not find devider
}

int main()
{
    int minNumber,  // min Input number variable
        maxNumber,  // max Input number variable,
                    // used too in for cicle
        temp;       // used to save in back finded simle number

    cin >> minNumber >> maxNumber;

    if(minNumber < 3 || minNumber+3 > maxNumber)
        cout << "Error: Illegal input" << endl;
    else
        for (minNumber; minNumber <= maxNumber; minNumber++)
            if(simple(minNumber) == 1)
            {
                if(minNumber - temp == 2)
                {
                    cout << temp << " " << minNumber << endl;
                   // return (0);
                }
                temp = minNumber;
            }

    return(0);
}
