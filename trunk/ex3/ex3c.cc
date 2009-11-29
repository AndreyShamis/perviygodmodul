/*
 * EX3C    ::
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
int main()
{
    int input_number, previos=0;

    int up_way=0;

    do
    {
        cin >> input_number;
        if(!previos)
        {
            cout << input_number << " ";
        }
        if(previos <= input_number)

            if(up_way == -1 || !up_way)
                up_way = 1;
        }
        else if(previos >= input_number)
        {
            if(up_way  || !up_way)
                up_way = -1;
        }

                previos = input_number;
    }
    while(input_number);

    return(0);
}
