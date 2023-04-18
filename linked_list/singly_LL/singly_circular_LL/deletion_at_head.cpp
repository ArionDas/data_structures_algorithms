#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int d){
            this->data = d;
            this->next = NULL;
        }
};

// naive solution
Node* delete_at_head(Node* head) {
    
    if(head == NULL) return NULL;
    if(head->next == NULL) {delete head; return NULL;}

    Node* curr = head;
    while(curr->next != head)
        curr = curr->next;

    curr->next = head->next;
    delete head;
    return (curr->next);
}

// optimised solution
/*
copy the second node's data onto the first one, then delete the second one
*/
Node* delete_at_head(Node* head) {

    if(head == NULL) return NULL;
    if(head->next == NULL) {delete head; return NULL;}

    head->data = head->next->data;
    Node* temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
}

