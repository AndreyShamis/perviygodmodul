#include <iostream>
#include <cmath>
 
using std::cout;
using std::cin;
using std::cerr;

int main()
{
	double a, b, c;
	double root1, root2;
	
	cout << "Enter square equation parameters a, b, c: ";
	cin >> a >> b >> c;
	
	root1 = (sqrt(b*b - 4*a*c) - b) / (2*a);
	root2 = (-sqrt(b*b - 4*a*c) - b) / (2*a);
	
	cout << "root1: " << root1 << " root2: " << root2;
	
	return 0;
}
