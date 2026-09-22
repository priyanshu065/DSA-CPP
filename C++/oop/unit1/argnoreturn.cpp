//with argument no return type
#include<iostream>
using namespace std;

class hello {
    public:
    int hi(int a, int b)
    {
        cout<<a+b<<endl;
    }
};
int main()
{
    hello s1;
   s1.hi(10,20);
}