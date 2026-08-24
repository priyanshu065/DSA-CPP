#include<iostream>
using namespace std;

class wall {
    private:
    double length;
    double breadth;

    public:
    wall(double l , double b) {
        length = l;
        breadth = b;
        cout << "length is : " << length << endl;
        cout << "breadth is : " << breadth << endl;
    }
    
};

int main () {
    wall w1(5.5, 6.5);
    wall w2(2.5, 3.5);
    return 0;
}