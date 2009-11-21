#include <iostream>
#include <cmath>
 
using std::cout;
using std::cin;
using std::cerr;

int main()
{
	double a, b, c;
	double root1, root2;
	double discriminanta;
	
	cout << "Enter square equation parameters a, b, c: ";
	cin >> a >> b >> c;
	
	discriminanta = b*b - 4*a*c; // Why do I define a variable? Code copying
	
	if(discriminanta < 0)
	{
		cout << "No roots \n";
		return; // Why this?
	}
	
	if(a!=0)
	{
		root1 = (sqrt(discriminanta) - b) / (2*a);
		root2 = (-sqrt(discriminanta) - b) / (2*a);
	}
	else
	{
		root1 = (-c)/b;
		root2 = root1;
	}
	
	cout << "root1: " << root1 << " root2: " << root2;
	
	return 0;
}
