/*
 * The Game of Life - first stage
 * Writen by: Dani Zobin
 *
 * At this stage we only treat input & output
 */


//-------------- include section --------------

#include <iostream>

//-------------- using section --------------

using std::cin;
using std::cout;
using std::endl;

//-------------- const and enum section --------------
const int SIZE = 3;

//--------------  main --------------

int main()
{
	bool arr[SIZE+2][SIZE+2]; //+2 for margines
	int i,j; // for iterating through the array
	int input; //temporal var for reading input: cell content

	//input
	for(i=0; i<SIZE+2; i++)
		for(j=0; j<SIZE+2; j++)
		{
			if(i==0 || i==SIZE+1 || j==0 || j==SIZE+1) //we're in a margine
				arr[i][j]=false;
			else
				{
					cin >> input;
					arr[i][j] = (input != 0); //could be directly cin >> arr[i][j]
				}
		}
	
	//output
	for(i=1; i<SIZE+1; i++)
	{
		for(j=1; j<SIZE+1; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
			
}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
