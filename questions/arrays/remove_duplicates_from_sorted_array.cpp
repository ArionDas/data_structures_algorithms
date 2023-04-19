/*
input: {10,20,20,30,30,30,30,30}
output: 3  ({10,20,30})
*/

int remDups(int arr[], int n) {
    int res = 1;
    for(int i=1; i<n; i++) {
        if(arr[i]!=arr[res-1]) {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}