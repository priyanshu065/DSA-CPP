#include<iostream>
#include<vector>
using namespace std;



int main () {
    vector <int> vec = {1,2,3,4,5};

   //for forward loop

    //vector<int> :: iterator it;

   for (auto it = vec.begin(); it != vec.end(); it++) {
    cout << *(it) << " ";
   }

   cout << endl;


//for reverse loop
 vector<int> :: reverse_iterator it;

   for (it = vec.rbegin(); it != vec.rend(); it++) {
    cout << *(it) << " ";
   }

   cout << endl;

//OR

    for (auto it = vec.rbegin(); it != vec.rend(); it++) {
    cout << *(it) << " ";
   }

    return 0;
}