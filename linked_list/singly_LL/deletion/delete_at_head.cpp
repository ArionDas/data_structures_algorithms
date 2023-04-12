#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

Node* delHead(Node* head) {

    if(head == NULL)
        return NULL;
    
    Node* temp = head->next;
    delete head;
    return temp;
}