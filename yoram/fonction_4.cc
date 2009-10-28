//swap
//-------------- include section -----------------------------------------------
#include <iostream>

//-------------- using section -------------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//-------------- prototype -----------------------------------------------------
void swap (int &v1, int &v2);  //the fonction will recive & send
	
//-------------- main ----------------------------------------------------------
int main ()
{
	int num1, num2;
	
	cin >> num1 >> num2;
	swap (num1, num2);	//call to the "swap" fonction.
	cout << num1 << num2;
}
//-------------- void swap -----------------------------------------------------
void swap         //definition fonction "swap".
{
	int temp=v1;
	v1=v2;
	v2=temp;
}
//------------------------------------------------------------------------------
