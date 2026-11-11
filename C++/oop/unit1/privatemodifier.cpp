#include<iostream>
using namespace std;

class A {
    int r;

    public:

    void get_data(int x) {
        r = x;
    }

    void show() {
        cout << 3.14*r*r;
    }
};

int main() {
    int r;

    cout << "enter radius" << endl;
    cin >> r;

    A obj;
   // obj.r = r;
    obj.get_data(r);
    obj.show();
}