/*
 * The char type as representation of letters
 * =============================================================
 * Writen by: Dani Zobin
 *
 * This program demonstrates work with char variables as 
 * containers of letters.
 * It reads a word and counts vowels and consonants.
 *
 * input: a predefined quantity of chars.
 * 
 * output:  the number of vowels and consonants in the word.
 * 
 *  
 */


//-------------- include section --------------

#include <iostream>

//-------------- using section --------------

using std::cin;
using std::cout;
using std::endl;

//-------------- const and enum section --------------

const int WORD_LENGTH = 8;

enum CharType {VOWEL, CONSONANT, ILEGAL_CHAR};
	


//-------------- Prototypes section --------------

CharType charType(char ch);

//--------------  main --------------

int main()
{
	char letters[WORD_LENGTH]; 				// For reading word
	int i, 									// Just array/loop counter
		vowels = 0, consonants = 0;			// Counters for letter types
	
	//input
	cout << "Please enter exactly " << WORD_LENGTH << " small letters" << endl;
	for(i=0; i < WORD_LENGTH; i++)
		letters[i] = cin.get();	
	
	//counting
	for(i=0; i< WORD_LENGTH; i++)
	{	
		switch(charType(letters[i]))
		{
			case VOWEL:
				vowels++;
				break;
			case CONSONANT:
				consonants++;		
			default:
				break;	
		}		
	}
	
	//output
	cout 	<< "You entered " << vowels << " vowels, " << consonants << 
			" consonants, and " << WORD_LENGTH - (vowels + consonants) <<
			" ilegal characters." << endl;
	
	return EXIT_SUCCESS ;
}

//----------------------------------------------

/*
 *	parameters:
 *  char - a character to be checked
 *  
 *  return value:
 *  CharType - whether the character is vowel, consonant or ilegal.
 */
CharType charType(char ch)
{
	CharType ret;
	
	switch(ch)
		{
			case 'a': 
			case 'e':
			case 'i':
			case 'o':
			case 'u': 
				ret = VOWEL;
				break;
			
			case 'b':
			case 'c':
			case 'd':
			case 'f': 
			case 'g':
			case 'h':
			case 'j':
			case 'k': 
			case 'l':
			case 'm':
			case 'n':
			case 'p': 
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':
				ret = CONSONANT;
				break;
			
			default:
				ret = ILEGAL_CHAR;
				break;
		}	
	return ret;
}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
