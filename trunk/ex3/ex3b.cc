/*
 * EX3B    ::
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh

 */

//--------------- including section -------------
#include <iostream>

//--------------- using section        -------------
using std::cout;
using std::cin;
using std::endl;

//--------------- main                 -------------

    int stam[100];
    int found = 0;

int simple(int input)
{   // Function to find if input number is simple
    int index;                          // Used in cicle

        for(index=2; index <= input/2; index++)
            if((input%index) ==  0)     // if find devider return 0
                return (0);

    return(1);                          // return 1 if not find devider
}

int check_stam(int integer)
{
    for(int i=1;i<=found; i++)
    {
        if(stam[i] == integer)
        {
            return(0);
        }
    }
    found++;
    stam[found] = integer;

}
int PrintStam()
{
    for(int i=1;i<=found; i++)
    {
        cout << stam[i] << endl;
    }
    return 0;
}
int main()
{
    int minNumber,  // min Input number variable
        maxNumber,  // max Input number variable,
                    // used too in for cicle
        temp;       // used to save in back finded simle number


    cin >> minNumber >> maxNumber;

    if(minNumber < 3 || minNumber+3 > maxNumber)
        cout << "Error: Illegal input" << endl;
    else
        if(minNumber%2 == 0)
            minNumber++;
        for (minNumber; minNumber <= maxNumber; minNumber+=2)
        //cout << minNumber << endl ;
            if(simple(minNumber) == 1)
            {
                if(minNumber - temp == 2)
                {
                    cout << temp << " " << minNumber << endl;
                   // return (0);
                }
                //cout << minNumber - temp << endl;
                check_stam(minNumber - temp);
                temp = minNumber;
            }
PrintStam();
    return(0);
}
