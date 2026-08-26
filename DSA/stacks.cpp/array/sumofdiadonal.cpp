//print sum of diagonal of a matrix
#include <iostream>
using namespace std;

int main () {

     int i,j;
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
   
    int sum = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {

             if (i==j) {
        sum = sum + arr[i][j];
    }
        }
    }

   

    cout << sum <<endl ;
}