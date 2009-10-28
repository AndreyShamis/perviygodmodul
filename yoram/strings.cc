const int MAX_STR_LEN=17;

char c1, c2; //able to save only 1 sign in each cell
char str[MAX_STR_LEN];
char str2[MAX_STR_LEN];

int place=0;

for (int i=0; i<MAX_STR_LEN; i++) 				   //it's a normal array of ever
	str[i]='x';
	
	do
	{
		str[place]=cin.get();								  //read only 1 word
		place++;
	}	while (place<MAX_STR_LEN && str[place-1]!=' ');
	
for (int i=0; i<MAX_STR_LEN && str[i]!=' '; i++) 			   //print the array
	cout << str[i];
	
	cin >> str;  				 //we are alowed to do it although it's an array
								 //in the end of the input he put '\0'
								 //but it don't have a end for limit of input...
								 
	cin >> setw(MAX_STR_LEN) >> str;  		 //the 'setw' saved the array limits
											 //we need to use #include <iomanip>
											 
	cout >> str; 				 //we are alowed to do it although it's an array
								 //it will stop print until it had the '\0'
								 
	strcpy (str2, str)     //it will copy str to str2 (it need a '\0' in the end
						   //we need to use #include <cstring>
						   
	strlen(str); 			   //it will tell as how much cells are in the array

	if (strlen(str)<17)			//save copy
		strcpy (str2, str);
	
	size_t len=strlen(str);		//save the length of the string
	
	

	SORTING STRINGS
	
	strcmp(str, str2)    					   //it comparer between two strings
										 //if a<b it will return an negative num
										 //if a=b it will return '0'
										 //if a>b it will return an positive num
