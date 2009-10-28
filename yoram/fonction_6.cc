find primary
//-------------- include section -----------------------------------------------
#include <iostream>

//-------------- using section -------------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//-------------- prototype -----------------------------------------------------

//-------------- main ----------------------------------------------------------
int main ()
{
	int num;
	cin >> num;
	if (is_prime(num)==true)
		cout << "primary\n";
	else
		cout << "detachable\n";
}
//-------------- is_prime ------------------------------------------------------
bool is_prime(int n)
{
	bool prime=true;
	
	for (int div=2; div<=n/2; div++)
		if (n%div==0)
			prime=false;
	
	return (prime);  //it will return what it is in prime bool true or false
}
//better way
bool is_prime(int n)
}
	for (int div=2; div<=n/2; div++)
		if (n%div==0)
			return (false);  //we didn't need create a bool variable to send bool messages
		
	return (true);
}	
	//breack from a fonction is "return;" 
	//void x(...) need a line for herself. we can't ask "if(void x(...)"
