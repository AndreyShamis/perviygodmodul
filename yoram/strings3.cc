#include <iostream>
#include <iomanip>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

const int MAX_STR_LEN=17;

int main()
{
char my_set[MAX_STR_LEN];

cin.getline(my_str, MAX_STR_LEN);       //it will take a whole line & MAX_STR_LEN is the limit for '\0'.
cin.getline(my_str, MAX_STR_LEN, '\n'); // "  "     "   " 	 "   "   "   "      "   " "    "    "

cin.getline(my_str, MAX_STR_LEN, 'x'); //it will take all words until it will find the 'x' is the limit if it is enough in MAX_STR_LEN.

return (0);	
}
