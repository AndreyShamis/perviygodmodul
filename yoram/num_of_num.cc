#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
int num, digits;

digits=0;
	
	cin >> num;
	
	for (int temp=num; temp>0; temp/=10, digits++)
			;
	
	cout << num << " " << digits << endl;

	return (0);
}
