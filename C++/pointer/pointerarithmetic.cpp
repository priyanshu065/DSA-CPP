//increment
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};

    int a = 10;
    int *p = &a;

    cout <<p<<endl;

    p++;
    cout << p << endl;
    return 0;
}