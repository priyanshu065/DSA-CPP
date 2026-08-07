#include <iostream>
#include <vector>
using namespace std;

vector<int> stack;

// Push Operation
void push(int x)
{
    stack.push_back(x);
    cout << x << " inserted into stack." << endl;
}

// Pop Operation
void pop()
{
    if(stack.empty())
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        cout << stack.back() << " deleted from stack." << endl;
        stack.pop_back();
    }
}

// Peek Operation
void peek()
{
    if(stack.empty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Top element = " << stack.back() << endl;
    }
}

// Display Operation
void display()
{
    if(stack.empty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack Elements: ";
        for(int i = stack.size() - 1; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();

    display();

    return 0;
}