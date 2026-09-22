//dog class override animal(parent) class
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
    void eat () {                    // also virtual void eat
        cout << "Dog can bark" << endl;
    }
};


int main () {

    dog d1;
    //d1.bark();
    d1.eat();

}