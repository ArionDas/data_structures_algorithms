#include<bits/stdc++.h>
#include "node.cpp"
using namespace std;

void insert_at_head(Node* &head, int data) {

    // allocating a new node
    Node* new_node = new Node();

    // putting in the value
    new_node->data = data;

    // making new node point to current head i.e. ultimately the second node
    new_node->next = head;

    // updating head
    head = new_node;
}

// TC = O(1)
// SC = O(1)