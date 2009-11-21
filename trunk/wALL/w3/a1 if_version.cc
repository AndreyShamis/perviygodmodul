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
		if (num == 2)
			cout << "Bet";
		if (num == 3)
			cout << "Gimel"; 
		if (num == 4)
			cout << "Dalet"; 
		if (num == 5)
			cout << "He"; 
		if (num == 6)
			cout << "Vav"; 
		if (num == 7)
			cout << "Zain"; 
		if (num == 8)
			cout << "Het"; 
		if (num == 9)
			cout << "Tet"; 
		if (num == 10)
			cout << "Yud"; 
		
		if(num!=1 && num!=2 && num!=3 && num!=4 && num!=5
			&&num!=6 && num!=7 && num!=8 && num!=9 && num!=10)
			cout << "Ilegal letter code";		

		cout << std::endl;

		cin >> num;
	}
	
	return 0;
}
