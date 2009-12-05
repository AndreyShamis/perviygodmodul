/*
 * EX3C    ::Monotonous rows of data showing up / down
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 *
 *  Program print the series of numbers in rows,
 *  with a line break is performed with changing the
 *  order of numbers Series up and down and vice versa
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
    int input_number,   // number be puted by user
        previos=0,      // last number
        direction=0,    // direction of numbers: 0-no direction, 1-up,2-down
        direct_up=0,    // asc counter
        direct_down=0;  // des counter
    do
    {
        cin >> input_number;

        if(!previos || !input_number)      // direction 0
            ;             // do nothing in start program and on end
        else if(previos < input_number)    // direction 1
            if(direction == -1 || !direction)
            {   // changing direction
                direct_up++;        // adding to counter 1
                direction = 1;      // changing direction variable value
                cout << "\n" << previos << " " << input_number << " ";
            }
            else // same direction
                cout << input_number << " ";
        else if(previos >= input_number)    // direction -1
            if(direction == 1  || !direction)
            {   // changing direction
                direct_down++;      // adding to counter 1
                direction = -1;     // changing direction variable value
                cout << "\n" << previos << " " << input_number << " ";
            }
            else // same direction
                cout << input_number << " ";

        previos = input_number;
    }
    while(input_number);

    cout << "\nasc=" << direct_up << "\ndes=" << direct_down << endl;

    return(0);
}
