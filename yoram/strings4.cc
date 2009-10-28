#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::cerr;

const int MAX_STR_LEN=17;

int main (int argc, char *argv[])   //argc is the quantity of cells in argv array
									//argv is an array for strings 
									//cell num 0 contain the name of the program,
									//and the next are contain the users input.
{
	if (argc!=3)
	{
		cerr << "Usage: " << argv[0] << "str1 str2" << endl;
			exit (EXIT_FAILURE);
	}
	int result;
	
	result=strcmp(argv[1], argv[2]);
	
	if (result<0)
		cout << "first smaller\n";
	else if (result==0)
		cout << "equals\n";
	else
		cout << "first greater\n";
		
	return (EXIT_SUCCESS);
}
