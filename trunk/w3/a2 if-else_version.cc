#include <iostream>

using std::cout;
using std::cin;

const int FINISH = -1;  // Explain the use of const

int main()
{
	int num;

	cin >> num;
/* 
	Waste:
	- asking about the variable many times (annoying)
	- Runtime! We're checking conditions that only one of them may occure
*/
	
	
	while(num != FINISH) 
	{	
		if (num == 1)
			cout << "Aleph"; 
		else if (num == 2)
			cout << "Bet";
		else if (num == 3)
			cout << "Gimel"; 
		else if (num == 4)
			cout << "Dalet"; 
		else if (num == 5)
			cout << "He"; 
		else if (num == 6)
			cout << "Vav"; 
		else if (num == 7)
			cout << "Zain"; 
		else if (num == 8)
			cout << "Het"; 
		else if (num == 9)
			cout << "Tet"; 
		else if (num == 10)
			cout << "Yud"; 
		else			
			cout << "Ilegal letter code";		

		cout << std::endl;

		cin >> num;
	}
	
	return 0;
}
