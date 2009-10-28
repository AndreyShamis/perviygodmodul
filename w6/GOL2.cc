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
	bool prevArr[SIZE+2][SIZE+2]; //to hold a copy of arr
	int i,j; // for iterating through the array
	int input; //temporal var for reading input: cell content
	int neighbours; //counting the neighbours of the current cell

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
	
	//generating next generation:

	//first save the previous generation
	for(i=0; i<SIZE+2; i++) // There is also a way to do it in one efficient command: memcpy
		for (j=0; j<SIZE+2; j++)
			prevArr[i][j]=arr[i][j]; 

	//actualy generate the next generation
	for(i=1; i<SIZE+1; i++) //note, we don't update the margines
		for(j=1; j<SIZE+1; j++)
		{
			//count the neighbours
			neighbours=0;
			if(prevArr[i-1][j-1]==true)
				neighbours++;
			if(prevArr[i-1][j]==true)
				neighbours++;
			if(prevArr[i-1][j+1]==true)
				neighbours++;
			if(prevArr[i][j-1]==true)
				neighbours++;
			if(prevArr[i][j+1]==true)
				neighbours++;
			if(prevArr[i+1][j-1]==true)
				neighbours++;
			if(prevArr[i+1][j]==true)
				neighbours++;
			if(prevArr[i+1][j+1]==true)
				neighbours++;
			
			if(prevArr[i][j]) //note, I can use it istead of prevArr[i][j]==true
			{
				switch(neighbours)
				{
					case 0: case 1: 
						arr[i][j]=false; break; //dying from loneliness

					case 2: case 3:
						arr[i][j]=true; break; //OK

					case 4: case 5: case 6: case 7: case 8:
						arr[i][j]=false; break; //dying from overpopulation
				}
			}
			else //this was an empty cell
			{
				if(neighbours==3)
					arr[i][j]=true;
				else
					arr[i][j]=false;
			}
		}
	
	//output
	cout << endl;
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
