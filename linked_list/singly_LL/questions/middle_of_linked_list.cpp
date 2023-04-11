#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int key;
        Node* next;
};

class Node_operation {
    public:
        void print_middle(Node* head) {
            Node* slow_ptr = head;
            Node* fast_ptr = head;

            if(head!=NULL) {
                while(fast_ptr != NULL && fast_ptr->next != NULL) {
                    fast_ptr = fast_ptr->next->next;
                    slow_ptr = slow_ptr->next;
                }
            }
        }
};