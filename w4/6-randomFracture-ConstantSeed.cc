#include <iostream>

//This are new!
#include <ctime>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    srand(1);
    int mone, mechane, mechaneRange=0;
    
    while(mechaneRange >=0 )
    {
        cout << "Enter mechane range: ";
        cin >> mechaneRange;
        mechane = rand()%mechaneRange;
        mone = rand() % mechane;
        cout << mone << "/" << mechane << endl;
    }
    cout << endl;
    return 0;
}
