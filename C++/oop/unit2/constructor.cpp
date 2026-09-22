//same name as class name
#include<iostream>
#include<string>
using namespace std;

class teacher  {
    public:

    string name;
    int salary;
    string subject;

    //constructor = special member function which auto call obj.

    teacher(string n, int sal, string sub) {
        name = n;
        salary = sal;
        subject = sub;
    }

    void getInfo() {
        cout << name << endl;
        cout << salary << endl;
        cout << subject;
    }


};

int main () {
    teacher t1("priyanshu", 25000, "computerscience");
    t1.getInfo();
    return 0;
}