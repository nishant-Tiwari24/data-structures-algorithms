#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertHead(Node* &head, int val) {
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
}

void insertTail(Node* &tail, int val) {
    Node* temp  = new Node(val);
    tail->next = temp;
    tail = tail->next;
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(10);
}