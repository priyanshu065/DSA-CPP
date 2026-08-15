#include<iostream>
using namespace std;

union hello {
    //int a; //0
    double a;
    double b;

};
int main ()
{
    union hello s1;
    s1.a = 10;
    s1.b = 20;
    cout<<s1.a<<endl;
    cout<<s1.b<<endl;
}