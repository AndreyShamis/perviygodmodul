//fibonachy's set
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::cerr;

unsigned fib(unsigned place);

int main ()
{
int place;

	cin >> place;
	
	cout << fib(place) << endl;
return (0);
}	
unsigned fib(unsigned place)
{
int prev1, prev2;
	
	if (place<=1)
		return(place);
	
	prev1=fib(place-1);
	prev2=fib(place-2);
	return (prev1+prev2);
}
