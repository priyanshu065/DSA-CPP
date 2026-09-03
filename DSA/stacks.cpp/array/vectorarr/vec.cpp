#include<iostream>
#include<vector>
using namespace std;

// int main () {
//     vector<int> vec;
//     cout << vec[0] << endl; //error
// }

// int main () {
//     vector <int> vec = {1,2,3,4};
//     cout << vec[0];
//     return 0;
// }

int main () {
    vector <int> vec(5,1); // 5 size idx val 1
    cout << vec[0];
    cout << vec[1];
    cout << vec[2];
    cout << vec[3];
    cout << vec[4];
}