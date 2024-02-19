#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d) {
        this -> data = d;
        Node* next = NULL;
        Node* prev = NULL;
    }
};

void insertHead(Node* &head,int d) {
    Node* temp = head;
    Node* newnode = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = newnode;
}