#include<iostream>
using namespace std;
int main()
{
  int n;
  int sum = 0;
  cout << "enter the no " << endl;
  cin >> n ;
  
  for (int i = 0; i <= n; i++) {
    sum = sum + i;
  }

  cout << "the sum is " << sum << endl;

}  

