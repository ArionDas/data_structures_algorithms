#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

bool isSorted(Node* head) {

    if(head == NULL)
        return true;

    for(Node* t = head; t->next != NULL; t=t->next) {
        if(t->data <= t->next->data)
            return false;
    }
    return true;
}

// TC = O(N)
// SC = O(1)