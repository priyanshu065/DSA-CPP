//increment
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};

    int a = 10;
    int *p = &a;

    cout <<p<<endl;

    p = p +2;
    cout << p << endl; //+8 (2 int = 8 byte in pointer)
    return 0;
}