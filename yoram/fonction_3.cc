//sum_dif
//-------------- include section -----------------------------------------------
#include <iostream>

//-------------- using section -------------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//-------------- prototype -----------------------------------------------------
void sum_dif (int n1, int n2, int &sum, int &dif); //the & make them bi-directional

//-------------- main ----------------------------------------------------------
int main ()
{
	int num1, num2, num3, num4;
	
	cin >> num1 >> num2;
	sum_dif (num1, num2, num3, num4);	//call to the "sum_dif" fonction.
	cout << num1 << num2 << num3 << num4;
}
//-------------- void sum_dif --------------------------------------------------
void sum_dif (int n1, int n2, int &sum, int &dif) //definition fonction "sum_dif".
{
	sum=n1+n2;
	dif=n1-n2;
	n1=0;
	n2=0;
}
//------------------------------------------------------------------------------
