#include<iostream>
#include<vector>
#include<list>
using namespace std;



int main () {
    list<int> l = {1,2,3,4,5};

    l.push_back(10); // 1 2 3 4 5 10
    l.pop_back(); // 10 is deleted

      
      l.pop_front(); // 1 deleted

    for (int val : l) {
        cout << val << " " ; //2 3 4 5
    }

    cout << endl;

    return 0;
}