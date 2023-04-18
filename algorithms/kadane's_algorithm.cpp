#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n) {
    long long sum = 0,maxi = LONG_MIN;

    for(int i=0; i<n; i++) {
        sum += arr[i];
        
        maxi = max(maxi,sum);

        sum = max(sum,0); // as it's useless to carry fwd a negative number as it will always reduce the sum
    }
    return maxi;
}