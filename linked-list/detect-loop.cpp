#include <iostream>
using namespace std;

class Node {
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

bool detectLoop(Node* head) {
    if(!head || !head->next) return false;
    Node* temp = head;
    map<Node*,bool> mp;
    while(temp) {
        if(mp[temp]) return true;
        mp[temp] = true;
        temp = temp->next;
    }
    return false;
}