//-------------- include section -----------------------------------------------
#include <iostream>

//-------------- using section -------------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//-------------- prototype -----------------------------------------------------
void Hanoi (int size, char src, char dest, char aux, int &i);

//-------------- main ----------------------------------------------------------
int main()
{
	int size, i=0; 
	
	cin >> size;
	
	Hanoi (size, 'a', 'c', 'b', i);

	cout << "num of actions: " << i << endl;
return (0);
}	
//-------------- Hanoi ---------------------------------------------------------
void Hanoi (int size, char src, char dest, char aux, int &i)
{
	if (size==1)
	{
		cout << "Move ring of size 1 from " << src << " to " << dest << endl; 
		i++;
	}
	else
	{
		Hanoi (size-1, src, aux, dest, i);
		cout << "Move ring of size " << size << " from " << src << " to " << dest << endl;
		i++;
		Hanoi (size-1, aux, dest, src, i);
	}
}
//------------------------------------------------------------------------------
