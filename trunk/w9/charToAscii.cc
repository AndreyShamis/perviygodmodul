/*
 * Showing the ascii code of chars
 * =============================================================
 * Writen by: Dani Zobin
 * 
 * input: 
 * 	 characters
 * 
 * output:
 * 	their asscii code
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
	char ch;
	
	cout << "Type characters sequence, 'q' to quit: ";
	do
	{
		ch=cin.get();
		cout << (int)ch << " ";
	} while(ch!='q');
	
	return EXIT_SUCCESS ;
}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
