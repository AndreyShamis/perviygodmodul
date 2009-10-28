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
    cout << "Random in range 7-16: " << 7+rand()%10 << endl;
    cout << "Random in range 30-129: " << 30+rand()%100 << endl;
    cout << "Random in range 452-1451: " << 452+rand()%1000 << endl;
    cout << "Random in range 5-6: " << 5+rand()%2 << endl;

    int topLimit, bottomLimit, i;

    while(true)
    {
        cout << "Enter bottom & top limits for the random sequence, negative to exit: ";
        cin >> bottomLimit >> topLimit;

        if(topLimit <0 || bottomLimit <0 )
            break;

        i=0;
        while(i<5)
        {
            cout << bottomLimit + rand()%(topLimit-bottomLimit) << " ";
            i++;
        }
        cout << endl << endl;
    }
    return 0;
}
