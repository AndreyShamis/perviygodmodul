/*
 * EX2C    :: Replacement of variable values
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *
 */

//--------------- including section -------------
#include <iostream>
#include <ctime>

//--------------- using section        -------------
using std::cout;
using std::cin;
using std::endl;

//--------------- main                 -------------
int main()
{

    int day, month, year,   // Variables day month year
        foramatMonDay,//Variable is pointing to a European or American format
        formatLongShort;//Variable indicating the average long and short format

    int monLen;

    cin >> day >> month >> year;


    switch(month)
    {
        case 2: monLen =(year%4 == 0 && year%100!=0 || year%400==0) ? 29:28;
                break;
        case 4:
        case 6:
        case 9:
        case 11:monLen = 30;
                break;
        default:monLen = 31;

    }


    if(day<1 || day>31 || month <1 || month>12
        || year<0 || year >99 && year < 1950 || year > 2049
        || day > monLen)
    {
        cout  << "Error: illegal input." << endl;
        return(0);
    }

    cin >> foramatMonDay >> formatLongShort;
    // //
    if(year < 100 && year>=50)
        year = 1900 + year;
    else if(year<50)
        year = 2000 + year;

    //cout << year << endl;

    if(formatLongShort == 1)
    {
        if(year>=2000)
            year= year - 2000;
        else if(year<2000)
            year= year - 1900;
    }

    if(formatLongShort != 3)
    {
        if(foramatMonDay == 1)
        {
            if(day<10)
                cout << "0";
            cout << day << "/";
            if(month<10)
                cout << "0";
            cout << month;
        }
        else
        {
            if(month<10)
                cout << "0";
            cout << month << "/";;
            if(day<10)
                cout << "0";
            cout << day;
        }

        cout << "/";
    }
    else if(formatLongShort == 3)
    {
        if(foramatMonDay == 1)
        {
            if(day<10)
                cout << "0";
            cout << day << " ";
        }

        switch(month){
            case 1:     cout << "January ";
                        break;
            case 2:     cout << "February ";
                        break;
            case 3:     cout << "March ";
                        break;
            case 4:     cout << "April ";
                        break;
            case 5:     cout << "May ";
                        break;
            case 6:     cout << "June ";
                        break;
            case 7:     cout << "July ";
                        break;
            case 8:     cout << "August ";
                        break;
            case 9:     cout << "September ";
                        break;
            case 10:    cout << "October ";
                        break;
            case 11:    cout << "November ";
                        break;
            case 12:    cout << "December ";
                        break;
        }

        if(foramatMonDay == 2)
        {
            if(day<10)
                cout << "0";
            cout  << day;
        }
        cout << " ";
    }
    if (year<10)
        cout << "0";
    cout << year << endl;

    return(0);
}

