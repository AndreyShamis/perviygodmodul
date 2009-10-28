#include <iostream>
#include <iomanip>
#include <cstring>

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
	if (argc!=5)
	{
		cerr << "Usage: " << argv[0] << "str1 str2" << endl;
			exit (EXIT_FAILURE);
	}
	for (int round=0; round<argc-2; round++)
		for (int place=1; place<argc-round-1; place++)
			if (atoi(argv[place])>atoi(argv[place+1]))
			{
			char temp[MAX_STR_LEN];
				
				strcpy(temp, argv[place]);
				strcpy(argv[place], argv[place+1]);
				strcpy(argv[place+1], temp);
			}
	for (int place=1; place<argc; place++)
		cout << argv[place] << endl;
	
	return (EXIT_SUCCESS);
}
