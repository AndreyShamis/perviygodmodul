//-------------- include section -----------------------------------------------
#include <iostream>

//-------------- using section -------------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//-------------- const and enum section ----------------------------------------
const int arr_size=5;					      	   //num of cells in the arrayal

//-------------- main ----------------------------------------------------------
int main ()
{
	int ids[arr_size], round, place, temp;
		
		for (round=0; round<arr_size-1; round++)
			for (place=0; place<arr_size-round-1; place++)
				if (ids[place]>ids[place+1])
				{
					temp=ids[place];
					ids[place]=ids[place+1];
					ids[place+1]=temp;
				}
	return(0);
}
