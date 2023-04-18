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

// assumption
    // number of nodes is greater than equal to k
Node* delete_kth_node(Node* head, int k) {

    if(k==1) {
        head->data = head->next->data;
        Node* temp = head->next;
        head->next = head->next->next;
        delete temp;
        return head;
    }
    else {
        Node* curr = head;
        for(int i=1; i<k-1; i++)
            curr->next = curr;

        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        return head;  
    }
    
}