/*
 * do-while simple example
 * =============================================================
 * Writen by: Dani Zobin
 *
 * The aim of the program is to demonstrate a case when do-while is superior 
 * over while.
 * The program reads integers and sums them, untill one of the two happens:
 * 1. A negative number entered
 * 2. The sum exceeds SUM_CEILING
 *
 * Input: series of integers
 * Output: series sum
 */


//-------------- include section --------------

#include <iostream>

//-------------- using section --------------

using std::cin;
using std::cout;
using std::endl;

//-------------- const and enum section --------------
const int SUM_CEILING = 100; 	// sum of read integers shouldn't exceed this

//--------------  main --------------

int main()
{
	int num;
	int sum=0;
	
	do
	{
		cin >> num;
		sum+=num;
	} while (num>=0 && sum <= SUM_CEILING); 
	
    return EXIT_SUCCESS ;
}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
