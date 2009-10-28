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
char wanted[MAX_STR_LEN],
	 curr[MAX_STR_LEN];
	 
unsigned counter=0;

	cin >> setw(MAX_STR_LEN) >> wanted;

	cin >> setw(MAX_STR_LEN) >> curr;

while (strcmp(curr, ".")!=0)
{
	if (strcmp(curr, wanted)==0)
		counter++;
	cin >> setw(MAX_STR_LEN) >> curr;
}
cout << counter;

return (0);
}
