/* rand example: guess the number */
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
  int iSecret, iGuess;

  /* initialize random seed: */
  srand ( time(NULL) );

  /* generate secret number: */
  iSecret = rand() % 10 + 1;

  do {
    cout << "Guess the number (1 to 10): ";
    cin >> iGuess;

    if (iSecret<iGuess)
        cout << "The secret number is lower\n";
    else if (iSecret>iGuess)
        cout << "The secret number is higher\n";
  } while (iSecret!=iGuess);

  cout << "Congratulations!\n";

  return 0;
}