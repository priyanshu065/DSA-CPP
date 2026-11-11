#include<iostream>
using namespace std;

class A {
    public:
    int r;

    void show() {
        cout << 3.14*r*r;
    }
};

int main() {
    int r;

    cout << "enter radius" << endl;
    cin >> r;

    A obj;
    obj.r = r;
    obj.show();
}