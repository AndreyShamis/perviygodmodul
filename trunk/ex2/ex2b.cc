/*
 * EX2B    :: Replacement of variable values
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *
 */

//--------------- including section -------------
#include <iostream>

//--------------- using section        -------------
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

//--------------- main                 -------------
int main()
{
    int firstHour, secondHour,      // Program first and second hours
        firstMinute, secondMinute;  // Program first and second minutes

    int newHour,newMinute;      //////////.....

    cin >> firstHour >> firstMinute >> secondHour >> secondMinute;

    if(firstHour<0 || firstHour>23 || secondHour<0 || secondHour>23
    || firstMinute<0 || firstMinute>59 || secondMinute<0 || secondMinute>59)
    {   // checks for the correctness of the entered data
        // if the data is not correct exit from the program
        cerr << "Error: illegal input" << endl;
        return(0);
    }

    // implementation of the main goals of the program,
    // times one minus times two
    newHour     = secondHour    - firstHour;
    newMinute   = secondMinute  - firstMinute;

    if(newMinute<0)
    {   // if negative value for minutes,
        // changing to positive and edit hours
        newMinute   = 60 + newMinute;
        newHour--;
    }

    if(newHour<0)
    {   // translate a negative value of the int hours,
        // to the time appearance
        newHour   = (24 + newHour);
        cout << "-";
    }else
        cout << "+";

    if(newHour<10)
        cout << "0";

    cout    << newHour << ":";

    if(newMinute<10)
        cout << "0";

    cout    << newMinute << endl;


    return(0);
}
