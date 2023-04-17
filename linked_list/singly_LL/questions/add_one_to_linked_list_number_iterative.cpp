/*
steps:

>> reverse given linked list
>> start traversing linked list from leftmost node and add 1 to it
        >> if there is a carry, move to the next node, keep moving to the next node till there is a carry
>> reverse modified linked list and return it's head
*/

#include<bits/stdc++.h>
using namespace std;

class Node {
    int data;
    Node* next;
};

// function to create the new node
Node* newNode(int data) {

    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;

}

// function to reverse a linked list
Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next;

    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
} 

// function which adds one to the linked list and returns the modified head
Node* addOneUtil(Node* head) {
    
    // res is head node of the resultant list
    Node* res = head;
    Node* temp, *prev = NULL;
    int carry = 1,sum=0;

    while(head != NULL) {
        /*calculate value of next digit in resultant list
        the next digit is sum of following things:
            >> carry
            >>next digit of head list*/

        sum = carry + head->data;

        // update carry for next calculation
        carry = (sum >= 10)? 1:0;

        // update sum if it is greater then 10
        sum %= 10;

        // create a new node with sum as data
        head->data = sum;

        // moving head and second pointers to next nodes
        temp = head;
        head = head->next;
    }

    // if carry is still left, add another new node
    if(carry > 0)
        temp->next = newNode(carry);

    // return head of the new list
    return res;
}

Node* addOne(Node* head) {
    // reverse linked list
    head = reverse(head);

    // add one from left to right of reversed list
    head = addOneUtil(head);

    // reverse the modified list
    return reverse(head);
}
