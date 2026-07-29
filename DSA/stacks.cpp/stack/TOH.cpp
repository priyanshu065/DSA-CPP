#include<iostream>
using namespace std;

void toh(int n, char from, char to, char mid) {
    if (n == 1) {
        cout << from << "->" << to << endl;
        return;
    }
    else {
        toh(n-1, from, mid, to);
            cout << from  << "->" << to << endl;
            
        

        toh(n-1, mid, to, from) ;
    }
}

int main () {

    int n;

    cout << "enter the no of disks " << endl;
    cin >> n ;
    toh (n, 'A', 'C', 'B');
}