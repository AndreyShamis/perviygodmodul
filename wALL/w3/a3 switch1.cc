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
			case 1: cout << "Aleph"; break;
			case 2: cout << "Bet"; break;
			case 3: cout << "Gimel"; break;
			case 4: cout << "Dalet"; break;
			case 5: cout << "He"; break;
			case 6: cout << "Vav"; break;
			case 7: cout << "Zain"; break;
			case 8: cout << "Het"; break;
			case 9: cout << "Tet"; break;
			case 10: cout << "Yud"; break;
			default: cout << "Ilegal letter code";		
		}	
		cout << std::endl;
		cin >> num;
	}
	
	return 0;
}
