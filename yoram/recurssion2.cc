#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::cerr;

unsigned sum(unsigned num1, unsigned num2);

int main ()
{
int num1, num2, x;
	cin >> num1 >> num2;
	
	x=sum (num1, num2);

	cout << x << endl;

return (0);
}

unsigned sum(unsigned num1, unsigned num2)
{
	unsigned temp;
	if (num2==0)
		return (num1);
	else
	{
		temp=sum(num1, num2-1);
		return (temp+1);
	}
}
