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
    cout << rand();
    cout << " " << rand();
    cout << " " << rand();
    cout << " " << rand();
  
    return 0;
}
