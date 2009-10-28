//-------------- include section -----------------------------------------------
#include <iostream>

//-------------- using section -------------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//-------------- const and enum section ----------------------------------------
const int MAX_COURSES=3, CLASS_SIZE=2, END=-1, EXCEL=95;	   //num of cells in the arrayal

//-------------- main ----------------------------------------------------------
int main ()
{
	
int arr[CLASS_SIZE][MAX_COURSES],												//our arryal
	stud, course, counter, worst_sum=CLASS_SIZE*MAX_COURSES, worst_course, curr_sum;

	for (stud=0; stud<MAX_COURSES; stud++)		//it will take CLASS_SIZE... if I want take MAX_COURSES I'l replace stud~course
	{
		for (course=0; course<CLASS_SIZE; course++)
			cin >> arr [stud][course];
	}
	cin >> course >> stud;				//change degrees
	while (course!=END && stud!=END)
	{
		if (course<0 || course>=CLASS_SIZE || stud<0 || stud>=MAX_COURSES)
			cout << "Wrong input\n";
		else
			cin >> arr[stud][course];
	
		cin >> course >> stud;
	}
	for (course=0; course<CLASS_SIZE; course++)  								//finds EXCEL's
	{
		counter=0;
		for (stud=0; stud<MAX_COURSES; stud++)
		{
			if (arr[stud][course]>=EXCEL)
				counter++;
		}
		cout << stud << " " << counter << endl;
	}
	for (course=0; course<MAX_COURSES; course++)		//find the worsts course 
	{
		curr_sum=0;
		for (stud=0; stud<CLASS_SIZE; stud++)
			curr_sum+=arr[stud][course];
	
		if (curr_sum<worst_sum)
		{
			worst_sum=curr_sum;
			worst_course=course;
		}
	}
	cout << worst_course << " " << worst_sum/CLASS_SIZE;
	
return (0);
}
