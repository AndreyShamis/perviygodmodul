//-------------- include section -----------------------------------------------
#include <iostream>

//-------------- using section -------------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//-------------- void section --------------------------------------------------
void f();
void p();

//-------------- main ----------------------------------------------------------
int main ()
{
	cout << "hi";
		f();	//calling fonction "f" from void.
	cout << "bye";
		p();	//calling fonction "p" from void.
	cout << "fly";

return (EXIT_SUCCESS);
}
//-------------- void f --------------------------------------------------------
void f() 		//definition fonction "f".
{
	cout << "In f()";
}
//-------------- void p --------------------------------------------------------
void p() 		//definition fonction "p".
{
	cout << "In p()";
}
//------------------------------------------------------------------------------
