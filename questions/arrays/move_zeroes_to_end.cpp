/*
example
-------

input: {8,5,0,10,0,20}
output: {8,5,10,20,0,0}
*/

#include<bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[], int n) {
    int count = 0;

    for(int i=0; i<n; i++) {
        if(arr[i]!=0) {
            swap(arr[i],arr[count]);
            count++;
        }
    }
}