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
