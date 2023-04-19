/*
input: {1,2,3,4,5}
output: {2,3,4,5,1}
*/

void left_rotate_by_one(int arr[], int n) {
    int temp = arr[0];
    for(int i=1; i<n; i++)
        arr[i-1] = arr[i];

    arr[n-1] = temp;
}

// TC = O(N)
// SC = O(1)