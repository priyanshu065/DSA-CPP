// protected : derived class can access easily
// #include<bits/stdc++.h>
// using namespace std;

// class parent {
//     protected:

//     int id_protected;
// };

// class child : public parent 
// {
//     public:
//     void setid(int id) {
//         cout << "id_protected is : " << id_protected<< endl;
//     }
//         void displayId()
//     {
//         cout << "id_protected is: " << id_protected << endl;
//     }

// };

// int main() {
//     child obj1;
//     obj1.setid(81);
//     obj1.displayId();
//     return 0;

// }



#include<iostream>
using namespace std;

class A {
protected:
    int x = 100;
};

class B : public A {
public:
    void show() {
        cout << x;
    }
};

int main() {
    B obj;
    obj.show();

    return 0;
}