#include<iostream>
using namespace std;

class wall {
    private:
    double length;
    double breadth;

    public:
    void setwall() {
        length = 5.5;
        breadth = 6.5;
        cout << "length is : " << length << endl;
        cout << "breadth is : " << breadth << endl;
    }
    // cout << "length is : " << length << endl;
    // cout << "breadth is : " << breadth << endl;
};

int main () {
    wall w1;
    w1.setwall();
    return 0;
}