
/*
 * The Game of Life - first stage
 * =============================================================
 * Writen by: Dani Zobin, id = 333444555, login = danizo
 *
 * This program simulates a colony of germs. Each cell in ther matrix may
 * either be empty or holds a germ. The colony evolves from generation to
 * generation, according to the following rules:
 * A germ with 0,1 neighbours dies from loneliness.
 * A germ with 4-8 neighbours dies from crowdedness,
 * In an empty cell with 3 neigbours a new germ is created.
 * input:
 *  a. the initial board
 *  b. does the user want to continue another round (after any round)
 * output: board number n, for every n
 */


//-------------- include section --------------

#include <iostream>

//-------------- using section --------------

using std::cin;
using std::cout;
using std::endl;

//-------------- const and enum section --------------
const int SIZE = 3;                // size of colony matrix as user sees it

                                   // the effect of the num of nei. on the
                                   // life situation in the next gen.
const bool neighbours_effect[9] = 
			{false, false, 
             true, 
             true,                 // unless it was empty (then it remains so)
             false, false, false, false, false } ;

const int AS_IT_WAS = 3 ;          // with 3 nei. future == past

//--------------  main --------------

int main()
{
	bool colony[SIZE+2][SIZE+2];             //+2 for margines
	bool prevColony[SIZE+2][SIZE+2];         //to hold a copy of colony
	int i,j;                                 // for iterating through the array
	                                         // (Biberman does not like them)
	int input;                               // temporal for reading input
	int neighbours;                          // counting the neighbours of the 
	                                         // current cell
	bool nextGen;                            // just for asking the user whether 
	                                         // he wants another generation
	int genCount = 0;

	//Reading the input
	for(i=0; i<SIZE+2; i++)
		for(j=0; j<SIZE+2; j++)
		{
			if(i==0 || i==SIZE+1 || j==0 || j==SIZE+1) //we're in a margine
				colony[i][j]=false;
			else
			{
				cin >> input;
				colony[i][j] = (input != 0);           // could be directly: 
			}                                          // cin >> Colony[i][j]
		}

	cout << "Another generation? (0/1) ";
	cin >> nextGen;
	while(nextGen)
	{
		// cout << "in loop\n" ;                       // note: output fr debug

	    //generating next generation:

		//first save the previous generation
		for(i=0; i<SIZE+2; i++)                         // There is also a way
			for (j=0; j<SIZE+2; j++)                    // to do it in one 
				prevColony[i][j] = colony[i][j];        // effcnt cmmnd: memcpy

		// cout << "about to gen next generation\n" ;
		//actualy generate the next generation
		for(i=1; i<SIZE+1; i++)                         // note, we dont update 
			for(j=1; j<SIZE+1; j++)                     // the margines
			{
				//count the neighbours
				neighbours = ((colony[i][j]) ? -1 : 0);

				for (int row = i-1; row <= i+1; row++)
					for (int col = j-1; col <= j+1; col++)
				        if(prevColony[row][col])
					           neighbours++;
                 // cout << i << " " << j << "=" << neighbours << endl ;
                 colony[i][j] = neighbours_effect[neighbours] ;
				 if (!prevColony[i][j] && neighbours == AS_IT_WAS)
                        colony[i][j] = false ;
			}
		genCount++;

		//Display an output
		cout << "Generation N" << genCount << endl;
		for(i=1; i<SIZE+1; i++)
		{
			for(j=1; j<SIZE+1; j++)
				cout << ((colony[i][j]) ? '+' : '-') << " ";
			cout << endl;
		}
		cout << "Another generation? (0/1) ";
		cin >> nextGen;
	}
    return EXIT_SUCCESS ;
}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
