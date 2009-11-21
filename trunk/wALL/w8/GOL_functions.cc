/*
 * The Game of Life 
 * Writen by: Dani Zobin
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
 * 
 * This version is the functions version 
 * 
 */


//-------------- include section --------------

#include <iostream>

//-------------- using section --------------

using std::cin;
using std::cout;
using std::endl;

//-------------- const and enum section --------------
const int SIZE = 3;

//--------------  Prototypes section --------------

void readBoard(bool board[SIZE+2][SIZE+2]);
void printBoard(bool board[SIZE+2][SIZE+2]);
void copyBoard(bool board1[SIZE+2][SIZE+2], bool board2[SIZE+2][SIZE+2]);
void generateNextBoard(	bool board[SIZE+2][SIZE+2], 
						bool prvBoard[SIZE+2][SIZE+2]);
int neighboursCount(bool board[SIZE+2][SIZE+2], int i, int j);
						
//--------------  main --------------

int main()
{
	bool board[SIZE+2][SIZE+2]; 			//+2 for margines
	bool prvBoard[SIZE+2][SIZE+2]; 			//to hold a copy of arr
	bool nextGen; 							//Just for asking the user 
											//whether he wants another generation
	int genCount = 0; 						//for counting generations
	
	readBoard(board);
	
	cout << "Another generation? (0/1) ";
	cin >> nextGen;
	while(nextGen)
	{		
	//generating next generation:

		//first save the previous generation
		copyBoard(board, prvBoard);
		//actualy generate the next generation
		generateNextBoard(board, prvBoard);
		genCount++;
			
		//output
		cout << "Generation N" << genCount << endl;
		printBoard(board);
		cout << "Another generation? (0/1) ";
		cin >> nextGen;
	}
			
}

//------------------------------------------------------------------

//	reads a full board from stdin
//	board: the array where the input should be read

void readBoard(bool board[SIZE+2][SIZE+2])
{
	int i, j;
	
	for(i=0; i<SIZE+2; i++)
		for(j=0; j<SIZE+2; j++)
		{
			if(i==0 || i==SIZE+1 || j==0 || j==SIZE+1) //we're in a margine
				board[i][j]=false;
			else
				cin >> board[i][j];
		}
}

//------------------------------------------------------------------

//	prints a board to stdout
//	board: the array representing the board to be printed

void printBoard(bool board[SIZE+2][SIZE+2])
{
	int i, j;

	for(i=1; i<SIZE+1; i++)
	{
		for(j=1; j<SIZE+1; j++)
			cout << board[i][j] << " ";
		cout << endl;
	}	
}

//------------------------------------------------------------------
//	Clone a board
// 	src: source
// 	trgt: target
void copyBoard(bool src[SIZE+2][SIZE+2], bool trgt[SIZE+2][SIZE+2])
{
	int i, j;

	for(i=0; i<SIZE+2; i++) // There is also a way to do it in one efficient command: memcpy
		for (j=0; j<SIZE+2; j++)
			trgt[i][j]=src[i][j]; 
}

//------------------------------------------------------------------
// Counts nieghbours of given cell in a given array.
// board - the array represetning the board
// i,j coordinates of the place to investigate
// returns: the number of neighbours
int neighboursCount(bool board[SIZE+2][SIZE+2], int i, int j)
{
	int neighbours=0; 						// For counting the neighbours
		
	if(board[i-1][j-1]==true)
		neighbours++;
	if(board[i-1][j]==true)
		neighbours++;
	if(board[i-1][j+1]==true)
		neighbours++;
	if(board[i][j-1]==true)
		neighbours++;
	if(board[i][j+1]==true)
		neighbours++;
	if(board[i+1][j-1]==true)
		neighbours++;
	if(board[i+1][j]==true)
		neighbours++;
	if(board[i+1][j+1]==true)
		neighbours++;
	
	return neighbours;
}

//------------------------------------------------------------------
// It's the function dealing with the main algorithm.
// board: the array for the future board
// prvBoard: assumed to contain a copy of the previous board

void generateNextBoard(	bool board[SIZE+2][SIZE+2], 
						bool prvBoard[SIZE+2][SIZE+2])
{
	int i,j, 								// for iterating through the board
		neighbours;							// counting the neighbours
	
	
	for(i=1; i<SIZE+1; i++) 				//note, we don't update the margines
		for(j=1; j<SIZE+1; j++)
		{
											//count the neighbours
			neighbours=neighboursCount(prvBoard,i,j);		
			
			if(prvBoard[i][j]) 				//note, I can use it instead of 
											//prvBoard[i][j]==true
				
			{
				switch(neighbours)
				{
					case 0: case 1: 
						board[i][j]=false; break; //dying from loneliness

					case 2: case 3:
						board[i][j]=true; break; //OK

					case 4: case 5: case 6: case 7: case 8:
						board[i][j]=false; break; //dying from overpopulation
				}
			}
			else //this was an empty cell
			{
				if(neighbours==3)
					board[i][j]=true;
				else
					board[i][j]=false;
			}
		}		
	
}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
