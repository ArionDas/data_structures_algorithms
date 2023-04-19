/*
input: {1,2,3,4,5}
       d = 2

output: {3,4,5,1,2}

assume d <= number of elements in the array
*/

// naive solution
// simply call left rotate by one d times

void left_rotate_by_one(int arr[], int n) {
    int temp = arr[0];
    for(int i=1; i<n; i++)
        arr[i-1] = arr[i];
    arr[n-1] = temp;
}

void left_rotate(int arr[], int n, int d) {
    for(int i=0; i<d; i++)
        left_rotate_by_one(arr,n);
}
