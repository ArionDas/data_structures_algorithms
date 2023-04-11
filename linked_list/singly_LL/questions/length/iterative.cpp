#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int key;
        Node* next;
};

int get_length(Node* head) { // call by reference

    int length = 0;
    Node* current = head;

    while(current != NULL) {
        length++;
        current = current->next;
    }

    return length;
}