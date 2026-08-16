#include<iostream>
using namespace std;

int main () {
    int a = 10;

    //creating refrence variable (alias)
    int &b = a;

    cout <<"before " << a << endl;
    cout << "before " << b << endl;

    b = 50;

    cout << "after " << a << endl;
    cout <<"after " << b << endl;
}