#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int d){
            this->data = int d;
            this->next = NULL;
        }
};

Node* insert_at_end(Node* head, int d) {
    Node* new_node = new Node(d);

    if(head == NULL) {
        //head = new_node;
        new_node->next = new_node;
        return new_node;
    }
    else {
        Node* curr = head;
        while(curr->next != head)
            curr = curr->next;

        curr->next = new_node;
        new_node->next = head;

        return head;
    }
}

// TC = O(1)
// SC = O(1)

// now we will optimize this code to O(1) time
        // one way is to pass a tail pointer to the function and do proper operations

Node* insert_at_end(Node* head, int d) {
    Node* new_node = new Node(d);

    if(head == NULL) {
        new_node->next = new_node;
        return new_node;
    }
    else {
        temp->next = head->next;
        head->next = temp;

        int temp = head->data;
        head->data = new_node->data;
        new_node->data = temp;

        return new_node;
    }
}