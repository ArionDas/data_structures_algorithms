#include<bits/stdc++.h>
#include "node.cpp"
#include "insert_at_head.cpp"
#include "insert_after_position.cpp"
#include "insert_at_end.cpp"
using namespace std;

void print(Node* node) {
    while(node != NULL) {
        cout << " " << node->data;
        node = node->next;
    }
    cout << endl;
}

int main() {
    
    Node* head = NULL;

    // operations
    insert_at_head(head, 6);
    insert_at_end(head, 7);
    insert_at_head(head, 1);
    insert_at_end(head, 4);
    insert_after_position(head->next, 8);

    print(head);
}

