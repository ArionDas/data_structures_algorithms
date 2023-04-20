#include<bits/stdc++.h>
using namespace std;

class Node {
    int data;
    Node* prev;
    Node* next;

    Node(int d) {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

Node* delete_end(Node* head) {
    if(head == NULL) return NULL;

    if(head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* curr = head->next;
    while(curr->next) 
        curr = curr->next;

    curr->prev->next = NULL;
    delete (curr);

    return head;
}