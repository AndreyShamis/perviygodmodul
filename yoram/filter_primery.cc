//-------------- include section -----------------------------------------------
#include <iostream>

//-------------- using section -------------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//-------------- const and enum section ----------------------------------------
const int size=25;						      	   //num of cells in the arrayal

//-------------- main ----------------------------------------------------------
int main ()
{
	bool arr[size];													//our arryal
	int i, j;
	
	for (i=2; i<size; i++)
		arr[i]=true;
	
	for (i=2; i<size/2; i++)
	{
		if (arr[i])
		{
			for (j=2; j*i<size; j++)
				arr[i*j]=false;
		}
	}	
	for (i=2; i<size; i++)
	{	
		if (arr[i])
			cout << i << " ";
	}
return (0);
}
