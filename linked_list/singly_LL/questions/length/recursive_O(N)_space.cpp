#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int key;
        Node* next;
};

int get_length(Node* head) {

    if(head == NULL)
        return 0;

    return (1 + get_length(head->next));
}