/*
 * Simple text coding 
 * =============================================================
 * Writen by: Dani Zobin
 *
 * Simple text coding usign characters exchange table.
 *
 * input: 
 * 	command line: 1. "encode"/"decode" 2. coding table
 *  stdin: text to encode/decode.
 * 
 * Assumption: text doesn't have capital letters
 *
 * output: 
 *  encoded / decoded text.
 * 
 *  Algortihm: simple replacement using the dictionary
 */


//-------------- include section --------------

#include <iostream>
#include <iomanip>
#include <cstdlib> 							// For dealing with strings
//-------------- using section --------------

using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::cerr;

//-------------- const and enum section --------------

const char BREAK_CHARACTER = '$';
const int BUFFER_SIZE = 200;
const int DICTIONARY_SIZE = 'z' - 'a' + 1; 	// amount of small letters in english abc

//-------------- Prototypes section --------------

void validateArgv(int argc, char* argv[]);
void readText(char buffer[]);
void encodeText(char buffer[], char dictionary[DICTIONARY_SIZE]);
void decodeText(char buffer[], char dictionary[DICTIONARY_SIZE]);
int chIndex(char ch, char str[]);

//--------------  main --------------

int main(int argc, char* argv[])
{
	char buffer[BUFFER_SIZE];		// buffer for storing the text
	
	//input
	validateArgv(argc, argv);			// Legality check for the parameters
	readText(buffer);
	
	//coding	
	if(strcmp(argv[1],"encode")==0)
		encodeText(buffer, argv[2]);
	else
		decodeText(buffer, argv[2]);

	//output
	cout << buffer << endl;
	
	return EXIT_SUCCESS ;
}
//------------------------------------------------------------------

// checks that command line parameters are legal,
// if no: prints error message with format directions 
// and exits

// parameters: argc, argv

void validateArgv(int argc, char* argv[])
{
	if(	argc!=3 || 							// encoding/decoding + dictionary
		( strcmp(argv[1],"encode")!=0 && strcmp(argv[1],"decode")!=0 ) ||
		( strlen(argv[2]) != DICTIONARY_SIZE)) 
	{
		cerr 	<< "Wrong command format." << endl 
				<< "Format is: " << argv[0] << " [encode/decode] [dictionary]\n";
		exit(EXIT_FAILURE);
	}
}
//------------------------------------------------------------------

// Reads input
// parameters: buffer

void readText(char buffer[])
{
	int i;							// loop counter

	for(i=0; i<BUFFER_SIZE; i++)
	{
		 buffer[i] = cin.get();
		if(buffer[i]==BREAK_CHARACTER)
		{
			buffer[i] = '\0';
			break;
		}
	}
}

//------------------------------------------------------------------

// encodes text using a dictionary
// parameters:
//		buffer
// 		dictionary

void encodeText(char buffer[], char dictionary[DICTIONARY_SIZE])
{
	char ch;
	for(int i =0;
		i < BUFFER_SIZE && buffer[i] != 0; 
		i++)
	{
		ch = buffer[i];
		if(ch >= 'a' && ch <= 'z')				// Apply for small letters only
			buffer[i] = dictionary[ch-'a'];
	}	
}

//------------------------------------------------------------------

// decodes text using a dictionary
// parameters:
//		buffer
// 		dictionary

void decodeText(char buffer[], char dictionary[DICTIONARY_SIZE])
{
	char ch;
	for(int i =0;
		i < BUFFER_SIZE && buffer[i] != 0; 
		i++)
	{
		ch = buffer[i];
		if(ch >= 'a' && ch <= 'z')				// Apply for small letters only
			buffer[i] = 'a' + chIndex(ch, dictionary);
	}	
}
//------------------------------------------------------------------

// Finds a character in a string
// PArameters:
// ch - character to find
// str - string to find in
// Returns:
// found ch index in the string, or -1 if not found

int chIndex(char ch, char str[])
{
	int i;
	
	for(i=0; str[i]!= '\0'; i++)
		if(str[i] == ch)
			break;
	
	return str[i]!=0 ? i : -1;
}
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
