#include <iostream>
using namespace std;

int x = 20;

int main () {
    int x = 10;

    cout << "the x is " << x << endl;
    cout << "the x is " << ::x << endl;
}