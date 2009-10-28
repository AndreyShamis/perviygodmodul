//-------------- include section -----------------------------------------------
#include <iostream>

//-------------- using section -------------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//-------------- const and enum section ----------------------------------------
const int MAX_COURSES=7, CLASS_SIZE=40, NUM_OF_CLASSES=3;         //num of cells

//-------------- main ----------------------------------------------------------
int main ()
{
int dept[NUM_OF_CLASSES][CLASS_SIZE][MAX_COURSES],                  //our arryal
    my_class, stud, course;

for (my_class=0; my_class<NUM_OF_CLASSES; my_class++) //each teacher for each stud.
    for (stud=0; stud<CLASS_SIZE; stud++)
        for (course=0; course<MAX_COURSES; course++)
            cin >> dept[my_class][stud][course];
            
for (course=0; course<MAX_COURSES; course++)          //each course for each class.
    for (my_class=0; my_class<NUM_OF_CLASSES; my_class++)
        for (stud=0; stud<CLASS_SIZE; stud++)
            cin >> dept[my_class][stud][course];
