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

Node* insert_at_end(Node* head, int data) {

    Node* new_node = new Node(data);

    if(!head)
        return new_node;

    Node* curr = head;
    while(curr->next) {
        curr = curr->next;
    }

    curr->next = new_node;
    new_node->prev = curr;

    return head;
}