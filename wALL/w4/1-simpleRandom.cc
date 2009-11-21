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
    cout << rand(); // will be in the range : 0 .. RAND_MAX ,
                    // when RAND_MAX is granted to be at least 32767
    return 0;
}
