#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
int num, div, sum_div;
	
cin >> num;
sum_div = 0;

	for (div=1; div<=num/2; div++)
		if (num%div==0)
			sum_div+=div;
		
		cout<<sum_div<<endl;
return (0);
	}
