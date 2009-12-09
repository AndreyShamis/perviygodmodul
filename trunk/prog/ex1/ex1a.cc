/*
 * EX1A	:: Replacement of variable values
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh(dosn`t work!)
 *
 *	The program receives at the beginning of the two values, 
 *	such as integer, print it had received. 
 *	And then change values between two variables, 
 *	displays once again the importance of these variables, 
 *	with variable NUM1 has a value of another variable NUM2 
 *	and vice versa.
 */

//--------------- including section -------------
#include <iostream>

//--------------- using section		-------------
using std::cout;
using std::cin;
using std::endl;

//--------------- main 				-------------
int main()
{
	int 	number1_int, number2_int,	// Variable receive incoming values
			mediator_int;				// Temporary variable
	
	cin		>> number1_int >> number2_int;
	cout 	<< number1_int << " " << number2_int << endl;
	
	mediator_int 	= number1_int;
	number1_int 	= number2_int;
	number2_int		= mediator_int;
	
	cout 	<< number1_int << " " << number2_int << endl;	
	
	return(0);
}
