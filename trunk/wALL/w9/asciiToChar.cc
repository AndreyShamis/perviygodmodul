/*
 * Ascii to chars
 * =============================================================
 * Writen by: Dani Zobin
 * 
 * input: 
 * 	 ascii codes of characters
 * 
 * output:
 * 	the characters
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
	int asciiCode; 		// For reading the ascii code of chars
	
	do
	{
		cin >> asciiCode;
		if(asciiCode>=0)
			cout << (char)asciiCode;
	} while(asciiCode>=0);
	
	return EXIT_SUCCESS ;
}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
