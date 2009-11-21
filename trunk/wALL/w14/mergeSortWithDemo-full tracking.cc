 /*
 * Merge Sort
 * =============================================================
 * Writen by: Dani Zobin
 *
 * input:
 *  Array of integers of size ARR_SIZE
 *
 * output:
 * 	The integers from the array, sorted
 *
 * Algortihm:
 *  Mergesort
 *  
 * Special adition - Program running tracking:
 * Every recursive call the range (left, middle, right) is exposed (---l-m--r--)
 * Every call to the merge routine which actually does the work exposed are: 
 * 	a. the range (    l  m  r   ) 
 *  b. the array after the change
 * 
 */


//-------------- include section --------------

#include <iostream>
#include <iomanip>

//-------------- using section --------------

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

//-------------- const and enum section --------------

const int ARR_SIZE = 15;
const int NUMBER_WIDTH = 2;
//-------------- Prototypes section --------------

void readArr(int arr[ARR_SIZE]);
void printArr(int arr[ARR_SIZE]);
void sortArr(int arr[ARR_SIZE]);
void mergeSort(int arr[], int left, int right);
void merge(int arr[], int right, int middle, int left);
void copyArr(int src[], int srcLast, int dst[], int dstFirst);
void printRange(int left, int middle, int right);
void printRangeCapital(int left, int middle, int right);

//--------------  main --------------

int main()

{
	int arr[ARR_SIZE];							// Array to be sorted
	
	readArr(arr);								// Read the array froom user
	sortArr(arr);								// Sort it using merge sort
	//printArr(arr);							// Print the result
	
	return EXIT_SUCCESS ;
}

//------------------------------------------------------------------
// Reads values to the passed array
// Parameters:
// 		arr: array to be filled with read values
void readArr(int arr[ARR_SIZE])
{
	for(int i=0; i<ARR_SIZE; i++)
		cin >> arr[i];
}

//------------------------------------------------------------------

// Prints passed array
// Parameters:
// 		arr: array to be printed
void printArr(int arr[ARR_SIZE])
{
	for(int i=0; i<ARR_SIZE; i++)
		cout << std::setw(NUMBER_WIDTH) << arr[i] << " ";
	cout << endl;
}

// visualization function - no further commenting
void printRange(int left, int middle, int right)
{
	int i;

	for(i=0; i<left; i++)
		cout << std::setw(NUMBER_WIDTH + 1) << " ";
	cout << std::setw(NUMBER_WIDTH) << "l" << " ";

	if(middle != left && middle != right)
	{		
		for(i++; i<middle; i++)
			cout << std::setw(NUMBER_WIDTH + 1) << " ";
		cout << std::setw(NUMBER_WIDTH) << "m" << " ";
	}	

	if(right != left)
	{
		for(i++; i<right; i++)
			cout << std::setw(NUMBER_WIDTH + 1) << " ";
		cout << std::setw(NUMBER_WIDTH) << "r" << " ";
	}

	for(i++; i<ARR_SIZE; i++)
		cout << std::setw(NUMBER_WIDTH + 1) << " ";

	cout << endl;
}

// visualization function - no further commenting
void printRangeCapital(int left, int middle, int right)
{
	int i;

	cout.fill('-');

	for(i=0; i<left; i++)
		cout << std::setw(NUMBER_WIDTH + 1) << "-";
	cout << std::setw(NUMBER_WIDTH) << "L" << "-";

	if(middle != left && middle != right)
	{		
		for(i++; i<middle; i++)
			cout << std::setw(NUMBER_WIDTH + 1) << "-";
		cout << std::setw(NUMBER_WIDTH) << "M" << "-";
	}	

	if(right != left)
	{
		for(i++; i<right; i++)
			cout << std::setw(NUMBER_WIDTH + 1) << "-";
		cout << std::setw(NUMBER_WIDTH) << "R" << "-";
	}

	for(i++; i<ARR_SIZE; i++)
		cout << std::setw(NUMBER_WIDTH + 1) << "-";

	cout << endl;
	cout.fill(' ');
}

//------------------------------------------------------------------

// Wrapper function to call mergeSort with the proper initial parameters
// Parameters:
//		arr: array to be sorted
void sortArr(int arr[ARR_SIZE])
{
	mergeSort(arr, 0, ARR_SIZE - 1);
}

// The main recursive function of the program
// Parameters:
//		arr : array to be sorted
//		left, right: rrange in the array to be sorted
void mergeSort(int arr[], int left, int right)
{
	if(right == left)						// one cell is always sorted
		return;
	
	int middle = (right + left)  / 2;		// dividing the range
	printRangeCapital(left, middle, right);
	
	if(right - left > 1)					// otherwise just call merge to... 
											//..set proper order between the two
	// Sort every half separately:
	{										
		mergeSort(arr, left, middle);
		mergeSort(arr, middle + 1, right);
	}
	
	// Merge the two halfs
	merge(arr,left, middle, right);
}

// Merges two adjucent sorted parts of the array, so the merged result will 
// also be sorted. 
//
// Parameters:
// 		arr: the array
//		left, right: needed range
//		midle: range partition
void merge(int arr[], int left, int middle, int right)
{
	
	static int result[ARR_SIZE]; 		// Temp array for holding merged result
	int leftCur=left, rightCur=middle+1, resCur=0;	// Cursors 
	
	bool 	leftFinished = false, 					//Finish flags for each part
			rightFinished = false;
	
	// each iteration copy's another cell to result
	while(!leftFinished || !rightFinished)
	{
		if(rightFinished || (!leftFinished && arr[leftCur] <= arr[rightCur]) )
		// copy a cell from the left part:
		{
			result[resCur] = arr[leftCur];
			leftCur ++;
		}
		else if(leftFinished || (!rightFinished && arr[leftCur]>arr[rightCur]))
		// copy a cell from the right part:
		{
			result[resCur] = arr[rightCur];
			rightCur ++;		
		}
		
		resCur++;
		
		// Update finish flags:
		if(leftCur > middle)
			leftFinished = true;
		if(rightCur > right)
			rightFinished = true;
	}
	
	// Copy the result to its proper place inside the main array
	copyArr(result, resCur - 1, arr, left);		
	
	//Verbose:
	printRange(left, middle, right);
	printArr(arr);

}

// Copys from a temporal array into a location in a dest array
// Parameters:
//		src: src (temporal) array
//		srcLat: points to the last cell to be copied
//		dst: destination array
//		dstFirst: start location in the dest array
void copyArr(int src[], int srcLast, int dst[], int dstFirst)
{
	for(int i = 0; i <= srcLast; i++)
		dst[dstFirst + i] = src[i];
}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
