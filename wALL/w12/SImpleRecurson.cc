/*
 * 
 * =============================================================
 * Writen by: Dani Zobin
 *
 * .
 *
 * input: 
 * 
 *
 * output: 
 * 
 *  Algortihm: 
 */


//-------------- include section --------------

#include <iostream>
#include <iomanip>
#include <cmath>

//-------------- using section --------------

using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::cerr;

//-------------- const and enum section --------------

const int ARR_SIZE = 10;

//-------------- Prototypes section --------------

bool primeCheck(int num, int divisor);
void copyArray(const int arr1[], int arr2[], int size);
int indexOfMax(int arr[], int arrSize);
bool identical(const int arr1[], const int arr2[], int size);
void recPrintArrOdds(int arr[], int size, int start);
void recPrintArrOdds2(int arr[], int size);
//--------------  main --------------

int main()
{
	return EXIT_SUCCESS ;
}

// Checks whether the parameter num is primal
// Parameters:
// 		num: the number to check
// 		divisor: should be initially called with 2 .Used for the recursion step
// Returns:
// 	boolean value, whether num is prime or not
// Algorithm:
// 		Runs on all the divisors from 2 to sqrt(num)
// 		Actually the function answers the question whether num is devided by
// 		any value >= divisor.
bool primeCheck(int num, int divisor)
{
	if(divisor > sqrt(num))
		return true;
		
	if(num%divisor==0)
		return false;
	
	//else:
	return primeCheck(num, divisor+1);
}

// Copys array content to another array.
// Parameters:
// 		arr1: source
//		arr2: destination
//		size: how many cells to copy
// Returns: 
// 		void
// Algorithm:
// 	Copying an array is like copying ther last cell manually,
//	and then copying a shorter by one array, by recursive call
void copyArray(const int arr1[], int arr2[], int size)
{
	if(size == 0)
		return;
	
	arr2[size-1] = arr1[size-1];
	copyArray(arr1, arr2, size-1);
}

// Index of the maximal value in an array
// Parameters:
//		arr : the array
//		arrSize: size of the array that should be considered
// Returns:
//		the index of the cell that holds the maximal value
// Algortihm:
// 	Finding the maximal value is like finding the maximal value of shorter 
//	by one array (recursive call), and then comparing it to the last value 
//	of the array.
int indexOfMax(int arr[], int arrSize)
{
	if(arrSize == 1)
		return 0;
	
	int othersMax = indexOfMax(arr, arrSize-1);
	return (arr[othersMax] < arr[arrSize-1] ? (arrSize-1) : othersMax);
}

// Checks identity of two arrays
// Parameters:
//		arr1: first arrays
//		arr2: second arrays
//		size: size of the arrays that should be checked
//	Returns:
//		boolean value, whether the arrays are identical
// Algorithm:
// 		Arrays are identical if the shorter by one heads are identical 
//		(recursive call), and the last elements are also identical
bool identical(const int arr1[], const int arr2[], int size)
{
	if (size == 0)
		return true;
	
	return (	(arr1[size-1] == arr2[size-1]) && 
				identical(arr1, arr2, size -1));
}

//	Prints all cells in array that hold odd numbers
//	Parameters:
//		arr : the array
//		size: the size to be printed
//		start: 	Cell index to start with.
//				For printing all the array should be called with 0.
//				Used for the recursion stepChange
// Algortihm:
//	Printing sub array (or array tail) is like printing the first cell and then
//	printing the shorter by one tail (recursive call).
void recPrintArrOdds(int arr[], int size, int start)
{
	if(start >= size)
	{
		cout << endl;
		return;
	}
	
	if(arr[start]%2!=0)
		cout << arr[start] << " ";
	recPrintArrOdds(arr, size, start+1);
}


//	Prints all cells in array that hold odd numbers
//	Parameters:
//		arr : the array
//		size: the size to be printed
//
// Algortihm:
//	Printing an array is like printing a shorter by one head, and then 
//	printing the last cell.
void recPrintArrOdds2(int arr[], int size)
{
	if(size <= 0)
		return;
	
	recPrintArrOdds2(arr, size -1);
	if( arr[size -1] % 2 != 0)
		cout << arr[size - 1] << " ";
}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
