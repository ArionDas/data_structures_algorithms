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

// we will have to swap the next & previous pointers

Node* reverseDLL(Node* head) {

    if(!head || !head->next) return head;

    Node* pr = NULL;
    Node* curr = head;

    while(curr) {
        pr = curr->prev;
        curr->prev = curr->next;
        curr->next = pr;
        curr = curr->prev;
    }
    return prev->prev;
}