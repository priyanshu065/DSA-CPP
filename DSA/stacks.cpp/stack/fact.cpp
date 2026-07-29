#include<iostream>
using namespace std;

const int size = 100;

int top = -1;
int stack[size];

void push(int x) {
    if (top == size - 1) {
        cout << "Stack Overflow";
    }
    else {
        top++;
        stack[top] = x;
    }
}

int pop() {
    if (top == -1) {
        cout << "Stack Underflow";
        return -1;
    }

    int x = stack[top];
    top--;
    return x;
}

int main() {
    int i, n;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        push(i);
    }

   for (i = 1; i <= n; i++) {
        fact = fact * pop();
    }

    cout << "Factorial = " << fact;
}