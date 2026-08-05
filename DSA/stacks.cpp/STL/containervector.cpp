#include<iostream>
#include<vector>
using namespace std;



int main () {
    vector <int> vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(65);
    vec.emplace_back(56);


    cout << "size is " << vec.size()<<endl; 
    cout << vec.capacity() << endl; //8 capacity always make double like 1,2,4,8
    
    for (int val : vec) {
    cout << val << endl;
    }

    cout << vec.at(0) << endl;
    cout << vec[0] << endl;

    cout << vec.front() << endl;
    cout << vec.back() << endl;

    return 0;
}