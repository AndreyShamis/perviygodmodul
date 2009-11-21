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
			case 1: cout << "Aleph"; 
			case 2: cout << "Bet"; 
			case 3: cout << "Gimel"; 
			case 4: cout << "Dalet"; 
			case 5: cout << "He"; 
			case 6: cout << "Vav"; 
			case 7: cout << "Zain"; 
			case 8: cout << "Het"; 
			case 9: cout << "Tet"; 
			case 10: cout << "Yud"; 
			default: cout << "Ilegal letter code";		
		}	
		cout << std::endl;
		cin >> num;
	}
	
	
	return 0;
}
