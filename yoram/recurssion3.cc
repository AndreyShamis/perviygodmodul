#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::cerr;

double power(double base, unsigned exp);

int main ()
{
double base, exp;

	cin >> base >> exp;
	
	cout << power(base, exp) << endl;

return (0);
}	
double power(double base, unsigned exp)
{
	double temp;
	if (exp==0)
		return (1);
	else
	{
		temp=power(base, exp/2);
		if (exp%2==0)
			return (temp*temp);
		else
			return (temp*temp*base);
	}
}
