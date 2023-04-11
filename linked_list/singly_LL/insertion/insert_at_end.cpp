#include<bits/stdc++.h>
#include "node.cpp"
using namespace std;

void insert_at_end(Node* &head, int data) {

    // allocating the new node
    Node* new_node = new Node();

    // pointing 'last' pointer to head
    Node* last = head;

    // putting the data
    new_node->data = data;

    // since the new node is going to be the last node, so it will pointing to NULL
    new_node->next = NULL;

    // there might be a case where linked list was empty
    if(head == NULL) {
        head = new_node;
        return;
    }

    // traversing till the end of the linked list
    while(last->next != NULL) {
        last = last->next;
    }

    // appending the new node as the last one
    last->next = new_node;

    return;
}

// TC = O(N) - since there is a loop traversing from beginning to end of the linked list
// SC = O(1)