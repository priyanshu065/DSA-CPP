//initilize array by user and print its address 
#include <iostream>
using namespace std;

int main()
{
    int A[3][4];
    int i, j;

    cout << "Enter arrays Elements:\n";

    // Input elements
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "\nAddresses of Elements:\n";

    // Print addresses
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cout << "A[" << i << "][" << j << "] = "
                 << &A[i][j] << endl;
            
        }
    }

    return 0;
}