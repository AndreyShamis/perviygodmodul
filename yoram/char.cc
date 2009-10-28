#include <cctype>

if (islower(c1)) // "a"
if (isupper(c1)) // "A"
if (isalpha(c1)) // "a" or "A"
if (isdigit(c1)) // "1"
if (isalnum(c1)) // "a" or "A" or "1"
if (isspace(c1)) // " "
if (ispunct(c1)) // ","
	
c1=cin.get(); //it will take also " "

//==============================================================================

int letter=0,
	digits=0;

char c;

cin >> c;

while (c!='.')
{
	if (isdigit(c))
		digits++;
	else if (isalpha(c))
		letters++;
	cin >> c;
}
cout << digits << " " << letter << endl;

//==============================================================================

cout << int (c1); //it will cout the ascii num of it.
cout << c1+1; //he will cout the num of next ascii.
c1=char(c1+1); //in c1 will be the sign of next ascii.

//==============================================================================

cin >> c1;
if (isdigit(c1))
	num=c1-'0';	//num will have the ascii value

//==============================================================================
int main()
}
unsigned num;
if (my_read_unsigined(num))
	//use num
else
	cout << "Erorr";

//--------------- my_read_unsigined --------------------------------------------
bool my_read_unsigined(unsigned &n)
{
	char c;
	n=0;
	
	do
	{
	c=cin.get();
	}
	while (isspace(c));
	
	while (isdigit(c));
	{
	n=n*10+c-'0';
	c=cin.get();
	}
	if (isspace(c))
		return (true);
	else
		return (false);
	
//==============================================================================
