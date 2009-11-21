#include <iostream>

//This are new!
#include <ctime>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

// Generating "random" fraction
// but, this time even distribution not exactly guaranteed

int main()
{
    srand(time(0));
    int numerator, denominator, denominatorTop;

    while(true)
    {
        cout << "Enter denominator top: ";
        cin >> denominatorTop;

        if(denominatorTop <=0)
            return 0;

        denominator = rand()%(denominatorTop+1) + 1;
        numerator = rand() % (denominator + 1);
        cout << numerator << "/" << denominator << endl;
    }

    cout << endl;
    return 0;
}
