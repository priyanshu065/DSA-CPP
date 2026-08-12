#include<iostream>
using namespace std;

void update(int n) 
{
    n++;
} 
void update1(int &n) 
{
    n++;
} 

int main () {
    int n = 5;

    cout <<"before " << n << endl;
    update (n);
    cout << "after update " << n << endl;
    update1(n);
    cout << n;
}
