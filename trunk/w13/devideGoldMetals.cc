/*
 * DEvide Gold metals
 * =============================================================
 * Writen by: Dani Zobin
 *
 * input:
 *  List of metal values
 *
 * output:
 * 	All assignments of metals to 2 goldsmithes when the overall welth of them
 *  are equal.
 *
 * Algortihm:
 *  Assign current metal to goldsmith1 then assign it to golsmith 2.
 */


//-------------- include section --------------

#include <iostream>

//-------------- using section --------------

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

//-------------- const and enum section --------------
const int METALS_NUM = 6;

enum MetalOwners {GOLDSMITH1, GOLDSMITH2};

//-------------- Prototypes section --------------

void printEqualAssignments(	const int metals[],
							MetalOwners metalsAssignment[],
							int index, int sum1, int sum2);
void printAsignment(const int metals[], MetalOwners metalsAssignment[]);

//--------------  main --------------

int main()

{
	int metals[METALS_NUM];						// Array of metal sizes

	MetalOwners metalsAssignment[METALS_NUM];	// For tracking the owners of
												// each metal.

	int i;										// Loop index

	// Input
	cout << "Enter list of " << METALS_NUM << " metal sizes: ";
	for(i=0; i<METALS_NUM; i++)
		cin >> metals[i];

	printEqualAssignments(metals, metalsAssignment, 0, 0, 0);

	return EXIT_SUCCESS ;
}

//------------------------------------------------------------------

// Prints all the possible assignments of metals to 2 golsmithes
// when the overall value of metals that each golsmith owns are equal.
// Parameters:
//		metals: lists of metal values
//		metalsAssignment: list of assignments made before "index"
// 		index: index of the current metal to assign
//		sum1, sum2: sums of the metals that each Golsmith own *until now*
void printEqualAssignments(	const int metals[],
							MetalOwners metalsAssignment[],
							int index, int sum1, int sum2)
{
	// Assignment finished
	if(index == METALS_NUM)
	{
		if(sum1 == sum2)
			printAsignment(metals, metalsAssignment);
		return;
	}

	// assign current metal to golsmith1
	metalsAssignment[index] = GOLDSMITH1;
	printEqualAssignments(	metals, metalsAssignment,
							index+1,
							sum1 + metals[index],
							sum2);

	// assign current metal to golsmith2
	metalsAssignment[index] = GOLDSMITH2;
	printEqualAssignments(	metals, metalsAssignment,
							index+1,
							sum1,
							sum2 + metals[index]);
}

// Prints a configuration of metals assignments to Golsmithes
// Parameters:
//	metals: 			list of metal sizes
//  metalsAssignment: 	list of assignments
void printAsignment(const int metals[], MetalOwners metalsAssignment[])
{
	int i; 								// loop index
	//print goldsmith1 metals
	cout << "Goldsmith1: ";
	for(i=0; i < METALS_NUM; i++)
		if(metalsAssignment[i] == GOLDSMITH1)
			cout /* << i << ": " */ << metals[i] << ", ";

	cout << endl;
	//print goldsmith2 metals
	cout << "Goldsmith2: ";
	for(i=0; i < METALS_NUM; i++)
		if(metalsAssignment[i] == GOLDSMITH2)
			cout /* << i << ": " */ << metals[i] << ", ";

	cout << endl;
	cout << endl;

}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
