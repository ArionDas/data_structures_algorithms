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

Node* insert_at_head(Node* head, int data) {

    Node* new_node = new Node(data);

    new_node->next = head;

    if(!head)
        head->prev = new_node;
        
    return new_node;
}