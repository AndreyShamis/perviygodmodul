//-------------- include section -----------------------------------------------
#include <iostream>

//-------------- using section -------------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//-------------- const and enum section ----------------------------------------
const unsignd SIZE=3;

//-------------- main ----------------------------------------------------------
int main ()
{
int matrix[SIZE][SIZE];
int row, col, curr_sum, the_sum=0;
bool magic=true;

	for (row=0; row<SIZE; roe++)     //sum of general diagonal
		the_sum+=matrix[row][row];
	
	for (row=0; row<SIZE && magic; roe++)     //sum of rows
	{
		curr_sum=0;
	
		for (col=0; col<SIZE; col++)
			curr_sum+=matrix[row][col];
		
		if (curr_sum!=the_sum)
			magic=false;
	}
	for (col=0; col<SIZE && magic; col++)     //sum of cols
	{
		curr_sum=0;
		
		for (row=0; row<SIZE; row++)
			curr_sum+=matrix[row][col];
		
		if (curr_sum!=the_sum)
			magic=false;
	}
	if (magic)     //sum of second diagonal
	{
		curr_sum=0;
		
		for (row=0; row<SIZE; row++)
			curr_sum+=matrix[row][SIZE-1-row];
		
		if (curr_sum!=the_sum)
			magic=false;
	}
	cout << ((magic)?"Magic\n":"Not Magic");
