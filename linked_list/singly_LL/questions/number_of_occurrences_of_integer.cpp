#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

// iterative
int count(Node* head, int key) {

    Node* current = head;
    int count = 0;

    while(current != NULL) {
        if(current->data == key)
            count++;

        current = current->next;
    }
    return count;
}
// TC = O(N)
// SC = O(1)

// recursive
int frequency = 0;
int count(Node* head, int key) {
    if(head == NULL)
        return frequency;
    if(head->data == key)
        frequency++;
    return count(head->next, key);
}
// TC = O(N)
// SC = O(N)