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

Node* delete_head(Node* head) {
    if(head == NULL) return NULL;

    if(head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    delete (temp);
    return head;
}