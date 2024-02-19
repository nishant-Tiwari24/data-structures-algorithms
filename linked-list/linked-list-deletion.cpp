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

    ~Node() {
        int val = this -> data;
        if(this -> next != NULL) {
            delete next;
            next = NULL;
        } 
    }
};

void deletenode(int pos, Node* &head) {
    if(pos == 1) {
        Node* temp = head;
        head = head->next;
        delete (head);
    }

    else {
        Node* curr = head;
        Node* prev = NULL;
        int i=1;
        while(i<pos) {
            prev = curr;
            curr = curr -> next;
            i++;
        }
    }

}