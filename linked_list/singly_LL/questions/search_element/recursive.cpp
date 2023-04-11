#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int key;
        Node* next;
};

bool search(Node* &head, int x) {

    if(head == NULL)
        return false;

    if(head->key == x)
        return true;

    return search(head->next, x);
}

// TC = O(N)
// SC = O(N) - stack space used by recursive calls