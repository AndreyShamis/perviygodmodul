/*
 * 
 * =============================================================
 * Writen by: Dani Zobin
 *
 * input:
 *		N - here a constant. Size of the set to choose from
 *		k - Size of the subset to choose
 *
 * output:
 *		All subsets of the set 1..N , of size k
 *
 * Algortihm:
 * 		For each number, you either take it or not. Both lead to a recursive call
 */


//-------------- include section --------------

#include <iostream>

//-------------- using section --------------

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

//-------------- const and enum section --------------
int N = 7;									// Size of the set to choose from
//-------------- Prototypes section --------------
 
void kSubSets(const int arr[], bool chosen[], int start, int k);
void printChosen(const int arr[], bool chosen[]);
//--------------  main --------------

int main()

{
	int arr[N];								// Will be the set to choose from
	bool chosen[N];							// Used to track the current choice
	
	// initialization
	for(int i = 0 ; i < N; i++)
	{
		arr[i] = i;
		chosen[i]=false;
	}
	
	int k;									// size of the subset to choose
	cin >> k;
	
	kSubSets(arr, chosen, 0, k);
	
	return EXIT_SUCCESS ;
}

//------------------------------------------------------------------

// Prints all subsets of arr, of size k.
// Parameters:
//		arr - superset to choose from
//		chosen - holds info about chosen values before start 
// 		start - beginning of the untouched values
//
// For the first call (from outside):
// 		start == 0
// 		chosen[] initialized to false
void kSubSets(const int arr[], bool chosen[], int start, int k)
{
	if(k == 0)									// we're finished
	{
		printChosen(arr, chosen);
		return;
	}
	
	if(start - 1 + k >= N) 						// this choice won't work
		return;

	// Choose value number start
	chosen[start] = true;
	kSubSets(arr, chosen, start + 1, k - 1);	
	
	// Don't choose value number start
	chosen[start] = false;
	kSubSets(arr, chosen, start + 1, k);	
}

// Prints values from arr[] according to guidelines from chosen[]
// Parameters:
//		arr - array of values
//		chosen - states which values should be printed
void printChosen(const int arr[], bool chosen[])
{
	int i;									// loop index
	for(i = 0; i < N; i++)
		if(chosen[i])
			cout << arr[i] << " ";
	cout << endl;
}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
