//difference btw protected and private

#include<iostream>
using namespace std;
class A {
private:
    int x = 10;

protected:
    int y = 20;
};

class B : public A {
public:
    void show() {
        // cout << x;  // Error
        cout << y;     // Correct
    }
};

int main () {
    B obj;
    obj.show();
}