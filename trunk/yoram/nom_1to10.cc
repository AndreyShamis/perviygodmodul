#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
int num;

	do 
	{
	cout << "num between 1 to 10\n";
	cin>>num;
	}	
	while (num<1 || num>10);
		
return (0);
}
