#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int key;
        Node* next;
};

bool search(Node* &head, int x) {
    
    Node* current = head;
    while(current != NULL) {
        if(current->key == x)
            return true;
        current = current->next;
    }
    return false;
}

// TC = O(N), N = number of nodes in the linked list
// SC = O(1)