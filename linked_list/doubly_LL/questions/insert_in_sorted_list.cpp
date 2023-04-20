#include<bits/stdc++.h>
using namespace std;

class Node {
    int data;
    Node* next;

    Node (int d) {
        data = d;
        next = NULL;
    }
};

Node* insert_in_sorted_list(Node* head, int x) {

    Node* temp = new Node(x);
    if(head == NULL)
        return temp;

    if(x<head->data) {
        temp->next = head;
        return temp;
    }

    Node* curr = head;
    while(!curr->next && curr->next->data < x) {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;

    return head;
}