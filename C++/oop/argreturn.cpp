//argument with  return type
#include<iostream>
using namespace std;

class hello {
    public:
    int hi (int a, int b) //parameter (a,b) = (formal argument)
    {
        return a+b; // return type
    }
};

int main()
{
    hello s1;
    cout<<s1.hi(10,20)<<endl; //(actual arguments)
}

