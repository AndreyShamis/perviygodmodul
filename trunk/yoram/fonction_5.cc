//sum & my_div
//-------------- include section -----------------------------------------------
#include <iostream>

//-------------- using section -------------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//-------------- prototype -----------------------------------------------------
void sum (int n1, int n2, &s);  //the fonction will recive & send
int sum2 (int n1, int n2);
bool my_div (int n1, int n2, int &quot);

//-------------- main ----------------------------------------------------------
int main ()
{
	int num1, num2;
	
	cin >> num1 >> num2;
	sum (num1, num2);	//num1+num2=num3
	if (num3>0)
		bla
	
	//second way (nicer...)
	num3=sum2(num1, num2)  //num1+num2=num3
	if (num3>0)
		bla
	
	//nicer way
	if (sum2(num1, num2)>3)
		bla
	
	
	if (my_div(num1, num2, num3))   //will see if num2!=0
		cout << num3 << endl;
	else
		cout << "can't divide\n";
}
//-------------- void sum ------------------------------------------------------
void sum (int n1, int n2, &s)        //definition fonction "sum".
{
	int temp=v1;
	v1=v2;
	v2=temp;
}
//-------------- int sum2 ------------------------------------------------------
int sum2 (int n1, int n2)        //definition fonction "sum2".
{
	int s=n1+n2;
	return (s);
}
//-------------- bool my_div ---------------------------------------------------
bool my_div(int n1, int n2, int &quot)
{
	if (n2==0)
		return (false);
	else
	{
		quot=n1/n2;
		return (true);
	}
}
//------------------------------------------------------------------------------
