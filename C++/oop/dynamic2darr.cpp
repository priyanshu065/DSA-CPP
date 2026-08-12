//print 2d array dynamically
#include<iostream>
using namespace std;

int main () {
    int r;
    cout << "enter the row" << endl;
    cin >> r;

    int c;
    cout << "enter the column " << endl;
    cin >> c;

    int **arr = new int *[r];

    for (int i = 1; i < r ; i++) {
        arr[i] =new int[c];
    }

    //taking input
    cout << "enter the array element" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr [i][j] ;
        }
        
    }
    cout << endl;
        //taking output
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr [i][j] << " ";
        }
        cout << endl;
    }

    //releasing memory
    for (int i = 0; i < r; i++) {
        delete [] arr [i];
    }

    delete [] arr;
}