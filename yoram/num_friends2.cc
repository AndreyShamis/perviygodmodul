#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
int num1, num2, sum_div1, sum_div2, div;

	for (num1=1; num1<=1000; num1++)
	{
		sum_div1=0;
		for (div=1; div<=num1/2; div++)
			if (num1%div==0)
				sum_div1+=div;
	
		num2=sum_div1;
		for (div=1; div<=num2/2; div++)
			if (num2%div==0)
				sum_div2+=div;
			
		if (sum_div2==num1)
			cout << num1 << " " << num2 << endl;
	}
	return (0);
}