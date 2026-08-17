#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main () {

    //creating nodes
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    //connecting the nodes
    first -> next = second;
    second -> next = third;
    third -> next = NULL;

    //head points to the first node
    Node* head = first;

    //traversing the linkedlist
    Node* temp = head;

    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    return  0;
}