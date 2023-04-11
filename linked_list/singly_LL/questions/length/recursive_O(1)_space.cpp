#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int key;
        Node* next;
};

int get_length(Node* head, int length = 0) { // default value of length is made 0

    if(head == NULL)
        return length;

    return (1 + get_length(head->next, length+1));
}