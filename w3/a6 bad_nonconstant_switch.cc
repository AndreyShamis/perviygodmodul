#include <iostream>

using std::cout;
using std::cin;

const int FINISH = -1;  // Explain the use of const

int main()
{
	int num1, num2, num3, othernum;

	cin >> num1 >> num2 >> num3 >> othernum;

	//This *doesn't* work! Only constant cases!
	while(othernum != FINISH)
	{	
		switch(othernum)
		{
			case num1: cout << "Like first"; break;
			case num2: cout << "Like second"; break;
			case num3: cout << "Like third"; break;
			default: cout << "Different";		
		}	
		cout << std::endl;
		cin >> num1 >> num2 >> num3 >> othernum;
	}
	
	
	return 0;
}
