//default constructor = not pass parameter
#include<iostream>
using namespace std;

class student {
    int rollNumber;

    public :
    student () {
        rollNumber = 241;
        cout << rollNumber;
    }
};

int main () {
    student s1;
    return 0;
}