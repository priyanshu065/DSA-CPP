//no argument  return type
#include<iostream>
using namespace std;

class hello {
    public:
    int hi()
    {
        int a = 10;
        int b= 20;
        return a+b;
    }
};
int main()
{
    hello s1;
    cout<<s1.hi()<<endl;
}