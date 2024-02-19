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

void insertPosition(Node* &head, int val, int k) {
    Node* temp = head;
    int i=1;
    while(i < k-1) {
        temp = temp->next;
        i++;
    }
    Node* nodeInsert = new Node(val);
    nodeInsert->next = temp->next;
    temp->next = nodeInsert;
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