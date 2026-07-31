#include<iostream>
#include<vector>
using namespace std;

int main () {
    int a = 10;
    int *p = &a;
    int **q = &p;

    cout<<a<<endl; //10
    cout<<*p<<endl; //10
    cout<<*(&a)<<endl;
    cout<<p<<endl; //address of a
     cout<<q<<endl; //address of p
     cout<<*q<<endl; //print p which is &a
}
