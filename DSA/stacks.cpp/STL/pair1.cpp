#include<iostream>
#include<deque>
using namespace std;

int main () {
    pair <int , pair<char , int>> p = {10 , {'b', 20}};

    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;
    return 0;
}