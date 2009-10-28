#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
int div, num;
bool prime;
	
cin >> num;
prime=true;
div=2;
	
	while (div<=sqrt(num) && prime)
	{
		if (num%div==0)
		{
		prime=false;
			break;
		}
	div++;
	}
	if (prime)
		cout << "primary" << endl;
	else
		cout << "detachable" << endl;

return (0);
}
