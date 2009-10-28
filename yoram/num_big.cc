#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
int num, div;

	cin >> num;
	
	while (num<=100)
	{
		for (div=num/2; div>=1; div--)
			if (num%div==0)
				break;				
		
		num+=div;
		cout<<num<<endl;
	}
return (0);
}
