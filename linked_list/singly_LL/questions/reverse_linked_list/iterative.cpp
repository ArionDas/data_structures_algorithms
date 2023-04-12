/*
We basically need three pointers

prev = NULL
curr = head
temp = NULL

while(curr) {

    temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;

}
*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void reverse(Node* &head) {

    Node *prev = NULL, *curr = head, *temp = NULL;
    while(curr) {

        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;

    }
    head = prev;
    return ;
}