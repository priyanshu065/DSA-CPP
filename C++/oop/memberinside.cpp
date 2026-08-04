//take an example of memberfunction inside of class
#include<iostream>
using namespace std;

class student {
    public :
    int roll_no;
    char name[20];

   void readdata() {
cout<<"enter the roll no"<<endl;
cin >> roll_no;
cout<<"enter the name"<<endl;
cin >> name ;
}

void displaydata() {
    cout << roll_no << endl;
    cout << name << endl;
}


};

int main () {
    student s1;
    s1.readdata();
    s1.displaydata();
}