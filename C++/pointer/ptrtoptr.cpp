//ptr to ptr only subtract hot hai
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};

   int *p2 ;
   int *p1 = p2 + 2;
    cout << "the ineteger value is" << p1 - p2 << endl; //+8 (2 int = 8 byte in pointer)
    return 0;
}