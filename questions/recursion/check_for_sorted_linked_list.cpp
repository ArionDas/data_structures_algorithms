/*
check if linked list is sorted in decreasing order
*/

#include<bits/stdc++.h>
using namespace std;

bool isSortedDesc(struct Node* head) {

    if(!head || !head->next) return true;

    return ((head->data >= head->next->data) && isSorted(head->next));
}