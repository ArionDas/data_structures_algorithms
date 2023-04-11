#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

bool isSorted(Node* head) {
    
    if(head == NULL || head->next == NULL)
        return true;

    return(head->data > head->next->data && isSorted(head->next));
}

// TC = O(N)
// SC = O(N)