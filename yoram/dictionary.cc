#include <iostream>
#include <iomanip>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

const int MAX_STR_LEN=17;
const int MAX_WORDS=999;

void ReadDict (char dict[][MAX_STR_LEN], int &dict_size);
bool Found (const char curr[], const char dict[][MAX_STR_LEN], int dict_size, int &place);
void Insert (const char curr[], char dict[][MAX_STR_LEN], int &dict_size, int place);

int main()
{
char dict[MAX_WORDS][MAX_STR_LEN];

int dict_size=0;
	
	ReadDict (dict, dict_size);

return (0);
}
void ReadDict (char dict[][MAX_STR_LEN], int &dict_size)
{
	char curr[MAX_STR_LEN];
	int place;
	
	cin >> setw(MAX_STR_LEN) >> curr;	
	
	while (strcmp(curr, ".")!=0 && dict_size<MAX_WORDS)
	{
		if (!Found (curr, dict, dict_size, place)) 
			Insert (curr, dict, dict_size, place);
		
		cin >> stew(MAX_STR_LEN) >> curr;
	
	}
}
//------------------------------------------------------------------------------
bool Found (const char curr[], const char dict[][MAX_STR_LEN], int dict_size, int &place)
{
	for (place=0; place<dict_size && strcmp (curr, dict[place])>0; place++)
		;
	if (strcmp(curr, dict[place])==0)
		return (true);
	else
		return (false);
}
void Insert (const char curr[], char dict[][MAX_STR_LEN], int &dict_size, int place)
{
	for (int i=dict_size; i>place; i--)
		strcpy(dict[i], dict[i-1]);
	strcpy (dict[place], curr);
	dict_size++;
}
