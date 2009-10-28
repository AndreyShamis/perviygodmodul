#include <iostream>

using std::cout;
using std::cin;
using std::endl;

unsigned Factorial (unsigned n);

int main ()
{
	int n;
	
	cin >> n;
	
	cout << Factorial(n) << endl;
	
return (EXIT_SUCCESS);
}
//----------  Factorial --------------------------------------------------------
unsigned Factorial (unsigned n)
{
	unsigned temp;
	
	if (n<=1)
		return(1);
	else
	{
		temp=Factorial(n-1);
		return(temp*n);
	}
}
