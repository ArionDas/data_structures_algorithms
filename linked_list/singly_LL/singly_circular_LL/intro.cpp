// it's node is same as that of a singly linkes list
// A simple singly circular linked list

#include<bits/stdc++.h>
using namespace std;

class Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = int data;
        this->next = NULL;
    }
};

int main() {
    Node* head = new Node(10);
    head->next = newNode(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);

    head->next->next->next->next = head; // this step makes the linked list circular

    // ofc this way of making a circular linked list is not correct, this is just for a basic idea
}

// for empty circular linked list, head = NULL
// for a single node circular linked list, head->next = head