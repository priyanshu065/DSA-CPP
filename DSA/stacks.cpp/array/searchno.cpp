#include<iostream>
#include <climits>
using namespace std;

int main() {

int arr[] = {5, 8, -1, -10, 44};
int i;
int search = 8;

for ( i = 0; i < 5; i++ ) {
    if(arr[i] == search) {
    cout << "the searching element is found at index : " << i << endl;
    break;
    }
}
return 0;

}