//take an example of member function outside of class
#include<iostream>
using namespace std;

class student {
    public :
    int roll_no;
    char name[20];

    void readdata();
    void displaydata();

};

void student ::  readdata() {
cout<<"enter the roll no"<<endl;
cin >> roll_no;
cout<<"enter the name"<<endl;
cin >> name ;
}

void student :: displaydata() {
    cout << roll_no << endl;
    cout << name << endl;
}

int main () {
    student s1;
    s1.readdata();
    s1.displaydata();
}