#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

// method 1
void printList(Node* head) {
    
    if(head == NULL)
        return ;

    cout << head->data << " ";
    for(Node* p = head->next; p!=head; p=p->next)
        cout << p->data << " ";

    return ;
}

// method 2
void printList(Node* head) {
    
    if(head == NULL)
        return ;

    Node* p = head;
    do {
        cout << p->data << " ";
        p = p->next;
    } while(p != head)

    return ;
}