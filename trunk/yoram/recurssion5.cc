//QuickSort

//----- include section --------------------------------------------------------
#include <iostream>

//----- using section ----------------------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//----- const section ----------------------------------------------------------
const int N=1000;

//----- prototypes -------------------------------------------------------------
void InPut(int arr[], int &hi);
void QuickSort(int arr[], int lo, int hi);
int PlaceThePivot(int arr[], int lo, int hi);
void Swap(int &v1, int &v2);
void OutPut(const int arr[], int hi);

//----- main -------------------------------------------------------------------
int main()
{
int arr[N], max;
	
	InPut(arr, max);
	
	QuickSort(arr, 0, max-1);
	
	OutPut(arr, max);
	
	return (0);
}
//----- Input ------------------------------------------------------------------
void InPut(int arr[], int &max)
{
	cin >> max;
	
	for (int i=0; i<max; i++)
		cin >> arr[i];
}
//----- QuickSort --------------------------------------------------------------
void QuickSort(int arr[], int lo, int hi)
{
int pivot_place=PlaceThePivot(arr, lo, hi);
	
	if (pivot_place-1>lo)
		QuickSort(arr, lo, pivot_place-1);
	
	if (pivot_place+1<hi)
		QuickSort(arr, pivot_place+1, hi);
}
//----- PlaceThePivot ----------------------------------------------------------
int PlaceThePivot(int arr[], int lo, int hi)
{
int pivot_place=lo;
	
	for (int i=lo+1; i<=hi; i++)
		if (arr[i]<=arr[pivot_place])
		{
			Swap(arr[i], arr[pivot_place+1]);
			Swap(arr[pivot_place+1], arr[pivot_place]);
			
			pivot_place++;
		}
	return(pivot_place);
}
//----- Swap -------------------------------------------------------------------
void Swap(int &v1, int &v2)
{
	int temp=v1;
	v1=v2;
	v2=temp;
}
//----- OutPut -----------------------------------------------------------------
void OutPut(const int arr[], int max)
{
	for (int i=0; i<max; i++)
		cout << arr[i] << " ";
	cout << endl;
}
//------------------------------------------------------------------------------
