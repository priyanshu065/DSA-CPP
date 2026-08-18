//no argument no return
#include<iostream>
using namespace std;

class hello {
    public:
    int a  = 10; //data member
    int b = 20;
    void hi()
    {
        cout<<"Member function"<<a+b<<endl;
    }
};
int main() {
    hello s1;
    cout<<"data member"<<s1.a+s1.b<<endl;
    s1.hi();
}