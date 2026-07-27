#include<iostream>
using namespace  std;

const int size = 5;
int x;

int top = -1;
int stack[size];
void push (int x) {
if (top == size - 1) {
    cout<<"stack over flow" << endl;
}
else {
    top = top + 1;
    stack[top] = x;
    cout<<"the insert no. is" << x << endl;

  }
}
void pop() {
    if (top == -1) {
        cout<<"stack underflow"<<endl;
        
    }
    else {
        x = stack[top];
        top = top - 1;
        cout<<x<<endl;
    }
}
void display () {
    int i;
    if (top == -1) {
        cout<<"stack isempty"<<endl;
    }


    else {
        for (i = top; i >= 0; i--) {
            cout<<stack[i]<<endl;
        }
    }
}
    int main ()
{
    push(10);
    push(20);
    display();
    pop();
    pop();
    display();
}