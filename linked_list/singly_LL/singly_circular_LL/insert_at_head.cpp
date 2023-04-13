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

Node* insert_at_head(Node* head, int x) {
    Node* temp = new Node(x);
    if(head == NULL)
        temp->next = temp;

    else {
        Node* curr = head;
        while(curr->next != head)
            curr = curr->next;
        
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}

// now we will optimize the code
// method 1 - we maintain a tail pointer so that we don't have to do the traversal to the tail pointer
//            and so we can insert it in O(1) time

// method 2 - insert the new node just after the head node and swap their values :)

Node* insert_at_head(Node* head, int x) {

    Node* temp = new Node(x);
    
    if(head == NULL) {
        temp->next = temp;
        return temp;
    }

    else {
        temp->next = head->next;
        head->next = temp;

        int t = head->data;
        head->data = temp->data;
        temp->data = t;

        return head;
    }
}