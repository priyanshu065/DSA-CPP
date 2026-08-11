#include<iostream>
using namespace std;

//static
// int main (){
//     int a = 10;
//     int *ptr = &a;

//     cout << a << endl; //10
//     cout << ptr << endl; // address
//     cout << *ptr << endl; 10

//     return 0;
// }

//dynamic
int main () {
    int *a = new int (10);
    cout << *a << endl; //10
    cout << a << endl; //address
    delete a; // memory release not delete

    cout << *a; // garbage value 
    return 0;
}