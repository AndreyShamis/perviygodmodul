#include <iostream>

using std::cout;
using std::cin;

const int FINISH = -1;  // Explain the use of const

int main()
{
	int num;

	cin >> num;

	while(num != FINISH) 
	{	
		switch(num)
		{
			case 1: 
			case 5:
			case 6:
			case 10:
				cout << "EHEVI ";		
				break;
		
			case 9:
				cout << "NAHATSIT "; 
				break;

			default: cout << "A standard letter";		
		}	
		cout << std::endl;
		cin >> num;
	}
	
	
	return 0;
}
