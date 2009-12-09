/*
 * EX4B    :: U.S. President selection system
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh

 *  Each country is allocated a fixed number in the United States of Alktorim.
 *  "Winner in that country 'won' every 'Halktorim" of that country.
 *  Winning the general election is accumulated more Alktorim
 *  (even if in practice he gained fewer votes of his
 *  colleagues among the voters, as indeed happened Kennedy against Nixon).
 *  to assume that interest if any in his bag, then none of the candidates
 *  does not get Balktorim of that country.
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
    const int NUM_OF_STATES=6;          // max lentgh of array
    int electoral[NUM_OF_STATES],       // array of electorals
        voters[NUM_OF_STATES][2],       // array of voters
        voters_sum[2],                  // arr sum of voters by electoral A:B
        electoral_sum[2];               // arr electoral sum  A:B

    for(int j=0;j<2;j++)
    {   // set the default variables
        voters_sum[j]       = 0;        // sum to voters
        electoral_sum[j]    = 0;        // sum to electorats
    }

    for(int i=0;i<NUM_OF_STATES;i++)
        cin >> electoral[i];    // Putting lentgh of lectorats in all coutry


    for(int i=0;i<NUM_OF_STATES;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin >> voters[i][j];    // Getting voters in all country by group
            voters_sum[j] += voters[i][j];//Sum voters in all country by group
        }
        if(voters[i][0] > voters[i][1])
            electoral_sum[0] += electoral[i];    // sum electorats to A;
        else if(voters[i][1] > voters[i][0])
            electoral_sum[1] += electoral[i];    // sum electorats to B;
    }
    // printing data
    cout    << electoral_sum[0] << " "  // printing Electorats sum for A
            << electoral_sum[1] << " "  // printing Electorats sum for B
            << voters_sum[0] << " "     // printing Voters sum for A
            << voters_sum[1] << " ";    // printing Voters sum for B

    // Printing results of group or A or B or DRAW
    if(electoral_sum[0] > electoral_sum[1])
        cout << "A";        // print A!
    else if(electoral_sum[0] < electoral_sum[1])
        cout << "B";        // print B!
    else
        cout << "draw";     // print DRAW!

    cout << endl;           // print end-of-line (EOL)!

    return(0);
}
