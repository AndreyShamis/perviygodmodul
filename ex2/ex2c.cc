/*
 * EX2C    :: Transformation of input dates in a calendar format
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *  With the input date and the two parameters,
 *  which amounts to six types of the format
 *  of a calendar date, we obtain the result.
 *
 *	Input data:
 *			1 - day				between 1-31
 *			2 - month			between 1-12
 *			3 - year			between 0:(2000-2049)	-99:(1950-1999)
 *			or 					between	1950-2049
 *			4 - foramatMonDay	1=European
 *								2=American format
 *			formatLongShort		indicate average
 *								1=long
 *								2=medium
 *								3=short
 *		Example: 	28 	12 	89 		1 	2
 *					1	2	1982	2	3
 *	Returnening data:
 *		Correct data(was entered):
 *			Description:With the input date and the two parameters,
 *						which amounts to six types of the format
 *						of a calendar date, we obtain the result.
 *			Code:		return 0
 *		Incorrect data:
 *			Description:Error: illegal input.
 *			Code:		return 0
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
    int day, month, year,   // Variables day month year
        foramatMonDay,      //pointing to a 1=European or 2=American format
        formatLongShort,    //indicate average 1=long 2=medium 3=short format
        monLen;             //variable have right month length

    cin >> day >> month >> year;

    switch(month)
    {   // There is a verification of the correctness of the length
        // of the month, test result is passed to the variable "monLen"
        case 2: monLen =(year%4 == 0 && year%100!=0 || year%400==0) ? 29:28;
                break;
        case 4:
        case 6:
        case 9:
        case 11:monLen = 30;
                break;
        default:monLen = 31;

    }

    //  Validation of input data, also includes checking the length
    //  of the month from the last switches
    if(day<1 || day>31 || month <1 || month>12
        || year<0 || year >99 && year < 1950 || year > 2049
        || day > monLen)
    {   //  if the check is not correct
        cout  << "Error: illegal input." << endl;
        return(0);
    }

    cin >> foramatMonDay >> formatLongShort;
    // Beforehand translating entered by date, in the correct format
    if(year < 100 && year>=50)
        year = 1900 + year;
    else if(year<50)
        year = 2000 + year;

    if(formatLongShort == 1)
        year = year%100;    // translate the correct date in short
                            // format if requested by the user
    //{
        //if(year>=2000)
        //    year= year - 2000;
        //else if(year<2000)
        //    year= year - 1900;

    //}

    if(formatLongShort != 3)
    {   //  The block is triggered in the event of a
        //  query a short or medium date format

        if(foramatMonDay == 1)
        {   //  If the first printed the day
            if(day<10)
                cout << "0";    //  zero for a string type of date
            cout << day << "/";
            if(month<10)
                cout << "0";    //  zero for a string type of date
            cout << month;
        }
        else
        {   //  If the first printed the month
            if(month<10)
                cout << "0";    //  zero for a string type of date
            cout << month << "/";;
            if(day<10)
                cout << "0";    //  zero for a string type of date
            cout << day;
        }

        cout << "/";
    }
    else if(formatLongShort == 3)
    {   //  block is triggered only if the
        //  user wants to get long date format

        if(foramatMonDay == 1)
        {   //  If the first printed the day
            if(day<10)
                cout << "0";    //  zero for a string type of date
            cout << day << " ";
        }

        //  Transform and derive nazvpnie months from number to string
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
        {   //  If the seconf printed the day
            if(day<10)
                cout << "0";    //  zero for a string type of date
            cout  << day;
        }
        cout << " ";
    }

    if (year<10)
        cout << "0";            //  zero for a string type of date
    cout << year << endl;

    return(0);
}
