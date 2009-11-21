/*
 * EX2B :: Program to find the time difference between the two time variables
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *  To find the difference, are given by two variables,
 *  after calculating the numerical data are converted into time format

 *	Entered data:
 *			1 - firstHour 		between 0-23
 *			2 - firstMinute		between 0-59
 *			3 - secondHour		between 0-23
 *			4 - secondMinute	between 0-59
 *		Example: 	14 45	16 59
 *	Returnening data:
 *		Correct data(was entered):
 *			Description:Difference between the two time variables
 *				like: -00:12 or +23:26
 *				- 	when second time is smoller
 *				+	when second time is biger
 *			Code:		return 0
 *
 *		Incorrect data:
 *			Description:Error: illegal input
 *			Code:		return 0
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
        firstMinute, secondMinute,  // Program first and second minutes
        newHour,newMinute;          // New variables gona be printed

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
        // to minus one
        newMinute   = 60 + newMinute;
        newHour--;
    }

    // Start out hour           //
    if(newHour<0)
    {   // translate a negative value of the int hours,
        // to the time appearance
        newHour   = (24 + newHour);
        cout << "-";    // If negative print '-'
    }else
        cout << "+";    // If positive print '+'

    if(newHour<10)
        cout << "0";    // if hour < 10 print '0' like '02'

    cout    << newHour << ":";  //
    // end out hour WITH ':'    //

    //start out minute          //
    if(newMinute<10)
        cout << "0";    // if minute < 10 print '0' like '04'

    cout    << newMinute << endl;
    // end out minute with new line

    return(0);
}
