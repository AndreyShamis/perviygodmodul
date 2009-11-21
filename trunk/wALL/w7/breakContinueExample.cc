 /*
 * break, continue example
 * =============================================================
 * Writen by: Dani Zobin
 *
 * Demonstrates cases when use of break / continue is convinient
 * 
 * The program reads integers one by one, and prints the decomposition to primes
 * for each.
 *
 * Input: integers
 * Output: 
 * 	For positives: primes decomposition
 *	For zero: exit
 *	For negatives: ignores
 */


//-------------- include section --------------

#include <iostream>

//-------------- using section --------------

using std::cin;
using std::cout;
using std::endl;

//-------------- const and enum section --------------

const int EXIT_FLAG = 0; // The program will stop on this input

//--------------  main --------------

int main()
{
	int num;
	int divisor;
	
	do
	{
		cin >> num;
		
		if(num < 0)
			continue; 		// no prime decomposition for negatives
							// note that it could be also break here, for 
							// instance if we wanted negatives to be exit flags
		
		//primes decomposition (not the best algorithm... but works!)
		while(num>1)
			for(divisor=2; divisor<=num; divisor++)
				if(num%divisor == 0)
				{
					cout << divisor << " ";
					num/=divisor;
					break;
				}
		cout << endl;
				
	} while (num!=EXIT_FLAG);
	
    return EXIT_SUCCESS ;
}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
