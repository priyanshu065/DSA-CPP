//container deque - double ended queue

#include<iostream>
#include<deque>
using namespace std;

int main () {
    deque<int> d = {1,2,3,4,5};

    for (int val : d) {
        cout << val << " "; //1 2 3 4 5
    }
    cout << endl;

    cout << d[2] << endl; // 3
    return 0;
}