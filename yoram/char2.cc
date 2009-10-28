//average of a line
const int LF = 10;

int average_of_a_line();

int main ()
{
cout << average_of_a_line();
}
//-------------  average_of_a_line ---------------------------------------------
int average_of_a_line()
{
int num,
	sum=0,
	counter=0;
	
char c;
	
	while (true)
	{
		do
		{
			c=cin.get();
		}	while (c==' ')
		
		if (c==LF)
			return (sum/counter)
		
		cin.putback(c);
		cin>>num;
		sum+=num;
		counter++;
	}
return (0);
}
