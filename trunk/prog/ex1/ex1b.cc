/*
 * EX1B:: Point of intersection of the triangle median
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh(dosn`t work!)
 *	
 *	Program that finds the intersection of the two medians in a 
 *	triangle comprising the specified coordinates.
 */

//--------------- including section -------------
#include <iostream>
#include <iomanip>

//--------------- using section		-------------
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;

//--------------- main 				-------------
int main()
{
	double 	side1x,	side1y,	//	Coordinates x y point 1
			side2x,	side2y,	//	Coordinates x y point 2
			side3x,	side3y;	//	Coordinates x y point 3
	
	cin		>> side1x >> side1y 
			>> side2x >> side2y
			>> side3x >> side3y;
	
	cout 	<< setprecision(3);
	
	// Check if this is a line
	if((side1x-side3x)*(side2y-side3y)-(side2x-side3x)*(side1y-side3y)==0)
	{
		cout	<< "nan nan" << endl;
	}else
	{
		cout 	<< (side1x+side2x+side3x)/3 << " ";
		cout 	<< (side1y+side2y+side3y)/3 << endl;
	}
	
	return(0);
}
