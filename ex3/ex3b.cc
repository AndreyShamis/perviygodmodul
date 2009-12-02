/*
 * EX3B    :: Program that finds the two prime numbers.
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *
 *  Program that finds the two prime numbers,
 *  with the difference in the two and displays
 */

//--------------- including section -------------
#include <iostream>

//--------------- using section        -------------
using std::cout;
using std::cin;
using std::endl;
using std::cerr;

//--------------- function             -------------
int simple(int input)
{   // Function to find if input number is simple
    int index;                          // Used in cicle

    for(index=2; index <= input/2; index++)
        if((input%index) ==  0)         // if find devider return 0
            return (0);

    return(1);                          // return 1 if not find devider
}

//--------------- main                 -------------
int main()
{
    int minNumber,  // min Input number variable
        maxNumber,  // max Input number variable, used too in for cicle
        temp;       // used to save in back finded simle number

    cin >> minNumber >> maxNumber;

    if(minNumber < 3 || minNumber+3 > maxNumber)
    {   // exit end return 1 if input incorrect
        cerr << "Error: Illegal input" << endl;
        return(1);
    }

    if(minNumber%2 == 0) // working only with even numbers
        minNumber++;

    for (minNumber; minNumber <= maxNumber; minNumber+=2)
        if(simple(minNumber)) // check if this number simple
        {
            if(minNumber - temp == 2)
            {   // if found numbers output them and exit
                cout << temp << " " << minNumber << endl;
                break;
            }
            temp = minNumber; // send simple number to next for cicle
        }

    return(0);
}
