/*
>> Naive approach:
-----------------
O(n^2)

>> Better:
-----------
we will take a hash map
but this will take extra SC = O(n)

>> optimal:
-------------
Floyd's loop detecting algorithm
*/

#include<bits/stdc++.h>
using namespace std;

bool isloop(Node* head) {
    Node* slow_p = head;
    Node* fast_p = head;

    while(fast_p!=NULL && fast->next!=NULL) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;

        if(slow_p == fast_p)
            return true;
    }
    return false;
}

// inside the loop, the distance between them increases by 1 on every iteration, so a point will come 
// when the distance b/w. them will become equal to cycle length i.e. they meet