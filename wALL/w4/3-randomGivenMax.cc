#include <iostream>

//This are new!
#include <ctime>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    srand(time(0));
    cout << "Random untill 9 :" << rand()%10 << endl;
    cout << "Random untill 99 :" << rand()%100 << endl;
    cout << "Random untill 999 :" << rand()%1000 << endl;
    cout << "Binary random :" << rand()%2 << endl;

    int topLimit, i;

    while(true)
    {
        cout << "Enter top limit for the random sequence, negative to exit: ";
        cin >> topLimit;

        if(topLimit < 0)
            break;

        i=0;
        while(i<5)
        {
            cout << rand()%topLimit << " ";
            i++;
        }
        cout << endl << endl;
    }
    return 0;
}
