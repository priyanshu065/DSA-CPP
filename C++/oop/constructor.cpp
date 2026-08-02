#include<iostream>
#include<string>
using namespace std;

class teacher  {
    public:

    string name;
    int salary;
    string subject;

    teacher(string n, int sal, string sub) {
        name = n;
        salary = sal;
        subject = sub;
    }

    void getInfo() {
        cout << name << endl;
        cout << salary << endl;
    }


};

int main () {
    teacher t1("priyanshu", 25000, "computerscience");
    t1.getInfo();
    return 0;
}