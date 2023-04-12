#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

Node* reverse(Node* head) {

    if(!head || !(head->next))
        return head;

    Node* reverse_list = reverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return reverse_list;
}