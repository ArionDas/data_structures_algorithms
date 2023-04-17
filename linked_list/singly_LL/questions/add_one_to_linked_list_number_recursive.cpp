/*
steps:

>> recursively reach the last node and forward carry to previous nodes
    >> (recursive solution doesn't require reversing the linked list)
    >> we can also use stack to temporarily hold nodes in place of recursion
*/

#include<bits/stdc++.h>
using namespace std;

class Node {
    int data;
    Node* next;
};

// function to create the new node
Node* newNode(int data) {

    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;

}

// recursively add 1 from end to beginning and return carry after all nodes are processed
int addWithCarry(Node* head) {
    // in case list is empty
    if(head==NULL)
        return 1;
    
    // add carry returned be next node call
    int res = head->data + addWithCarry(head->next);

    // update data and return new carry
    head->data = res%10;
    return res/10;
}

Node* addOne(Node* head) {
    // reverse linked list
    head = reverse(head);

    // add one from left to right of reversed list
    head = addOneUtil(head);

    // reverse the modified list
    return reverse(head);
}
