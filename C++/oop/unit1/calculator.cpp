#include<iostream>
using namespace std;

struct calculator {
   
    int a;
    int b;

    void input() {

    cout << "enter the nos. " << endl;
    cin >> a;
    cin >> b;

    }

    int sum () {
        return a+b;
    }

    int difference () {
        return a-b;
    }

    int multiple () {
        return a*b;
    }

    float divide () {
        return (float) a/b;
    }


};
int main ()
{
    calculator c1;
    c1.input();
    cout << "the sum is " << c1.sum() << endl;
    cout << "the difference is " << c1.difference() << endl;
    cout << "the multiple is " << c1.multiple() << endl;
    cout << "the division is " << c1.divide() << endl;

    return 0;
}