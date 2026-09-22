#include<iostream>
using namespace std;

class Animal {
    public :
    void eat () {
        cout << "Animal can eat" << endl;
    }
};

class dog : public Animal {
    public :
    void bark () {
        cout << "Dog can bark" << endl;
    }
};


int main () {

    dog d1;
    d1.bark();
    d1.eat();

}