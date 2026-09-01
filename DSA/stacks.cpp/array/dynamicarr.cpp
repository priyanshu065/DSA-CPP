#include<iostream>
using namespace std;


int main (){

    int n;
    cout << "enter value of n ";
    cin >> n;

    //dynamic array declearation 
    //using pointer because not directly cin in static(compile time)

    int *arr = new int [n];
    
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        cout << arr[i] << " ";
    }

    return 0;
}
