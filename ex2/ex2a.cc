/*
 * EX2A    :: Program issuing the name of the day of this era
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *  The program takes three parameters,
 *  the day of the month and year and displays the name of the day.
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
    int        day,            // Day variable
            month,          // Month variable
            year,           // Year variable
            monthCode,      // Specific month code variable
            day_of_weak;    // Day of weal variable

    cin     >> day >> month >> year;

    // Check if the input data is legal, exit if not
    if(day<1 || day>31 || month<1 || month>12 || year<0 || year>99)
    {
        cout  << "Error: illegal date." << endl;
        return (-1);
    }

    //Calculating month code
    switch (month)
    {
        case 7:
        case 4:     monthCode = 0;
                    break;
        case 1:
        case 10:    monthCode = 1;
                    break;
        case 5:     monthCode = 2;
                    break;
        case 8:     monthCode = 3;
                    break;
        case 6:     monthCode = 5;
                    break;
        case 2:
        case 3:
        case 11:    monthCode = 4;
                    break;
        case 9:
        case 12:    monthCode = 6;
                    break;
    }

    // Calculating day of weak
    day_of_weak = (day + year + year/4 + monthCode) % 7;

    // Print Name of the day
    switch(day_of_weak)
    {
        case 0:     cout << "Saturday"  << endl;
                    break;
        case 1:     cout << "Sunday"    << endl;
                    break;
        case 2:     cout << "Monday"    << endl;
                    break;
        case 3:     cout << "Tuesday"   << endl;
                    break;
        case 4:     cout << "Wednesday" << endl;
                    break;
        case 5:     cout << "Thursday"  << endl;
                    break;
        case 6:     cout << "Friday"    << endl;
                    break;
    }

    return(0);
}
