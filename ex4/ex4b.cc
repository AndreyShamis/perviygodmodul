/*
 * EX4B    ::
 * =============================================================
 * Writen by: Andrey Shamis, id: 321470882, login:andreysh
 */

//--------------- including section -------------
#include <iostream>

//--------------- using section        -------------
using std::cout;
using std::cin;
using std::endl;

const int NUM_OF_STATES=6;  // max lentgh of array
//--------------- main                 -------------
int main()
{
    int electoralA[NUM_OF_STATES];
    int voters[NUM_OF_STATES][2];
    int voters_sum[2];
    int electoral_sum[2];

    for(int j=0;j<2;j++)
    {
        voters_sum[j]       = 0;
        electoral_sum[j]    = 0;
    }

    for(int i=0;i<NUM_OF_STATES;i++)
    {
        cin >> electoralA[i];
    }




    for(int i=0;i<NUM_OF_STATES;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin >> voters[i][j];

            voters_sum[j] += voters[i][j];
            //cout << j << " " << voters_sum[j] << " \n";
        }
        if(voters[i][0] > voters[i][1])
            electoral_sum[0] += electoralA[i];    //cout << "A";
        else if(voters[i][1] > voters[i][0])
            electoral_sum[1] += electoralA[i];    //cout << "B";
        else if(voters[i][j] == voters[i][j])
            cout << "draw";
    }



    cout    << electoral_sum[0] << " "
            << electoral_sum[1] << " "
            << voters_sum[0] << " "
            << voters_sum[1] << " ";

    if(voters_sum[0] > voters_sum[1])
        cout << "A";
    else if(voters_sum[1] > voters_sum[0])
        cout << "B";
    else if(voters_sum[0] == voters_sum[1])
        cout << "draw";

    cout << endl;
/*
    for(int i=0;i<NUM_OF_STATES;i++)
        cout << electoralA[i] << " | ";

    cout << "\n";
    for(int i=0;i<NUM_OF_STATES;i++)
    {
        for(int j=0;j<2;j++)
            cout << voters[i][j] << " | ";
        cout << "\n";
    }

*/
    return(0);
}
