#include<bits/stdc++.h>
#include "node.cpp"
using namespace std;

void insert_after_position(Node* &prev, int data) {

    // checking if the previous node is NULL
    if(prev == NULL) {
        cout << "previous node can't be NULL" << endl;
        return ;
    }

    // allocating the new node
    Node* new_node = new Node();

    // putting the data
    new_node->data = data;

    // making next of new_node as next of previous node i.e. ultimately the next node
    new_node->next = prev->next;

    // updating the previous node
    prev->next = new_node;
}

// TC = O(1)
// SC = O(1)