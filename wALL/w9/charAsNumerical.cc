/*
 * The char type as a numerical type
 * =============================================================
 * Writen by: Dani Zobin
 *
 * This program demonstrates work with char variables as 
 * small integer variables.
 * It predefines two char variables with hardcoded values
 * and then prints their sum, difference, product and quotient.
 *
 * input: none. The initial values are predefined.
 * 
 * output:  as described above.
 * 
 * comment: casting is used to iutput the char values as numbers.
 * 
 */


//-------------- include section --------------

#include <iostream>

//-------------- using section --------------

using std::cin;
using std::cout;
using std::endl;

//-------------- const and enum section --------------

//--------------  main --------------

int main()
{
	char 	num1, num2, 			// numbers to manipulate with
			charResult; 			// container for the result
	
	//initialization
	num1 = 18;
	num2 = 3;
	
	//sum
	charResult = num1 + num2;
	cout << (int)num1 << " + " << (int)num2 << " = " << (int)charResult << endl;

	//difference
	charResult = num1 - num2;
	cout << (int)num1 << " - " << (int)num2 << " = " << (int)charResult << endl;

	//product
	charResult = num1 * num2;
	cout << (int)num1 << " * " << (int)num2 << " = " << (int)charResult << endl;

	//quotient
	charResult = num1 / num2;
	cout << (int)num1 << " / " << (int)num2 << " = " << (int)charResult << endl;
	
	
	return EXIT_SUCCESS ;
}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
