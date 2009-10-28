//-------------- include section -----------------------------------------------
#include <iostream>

//-------------- using section -------------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//-------------- const and enum section --------------
const int arr_size=20;

//-------------- main ----------------------------------------------------------
int main ()
{
int ids[arr_size],
	lo=0,
	hi=arr_size-1,
	med,
	wanted;

bool found=false;
	
	cin >> wanted;

	while (lo<=hi && !found)
	{	
		med=(lo+hi)/2;
		
		if (ids[med]==wanted)
			found=true;
		else if (ids[med]<wanted)
			lo=med+1;
		else
			hi=med-1;
	}
	
	
	return (0);
}
