#include<bits/stdc++.h>
using namespace std;

int findSumMaxSubarrayOfSizeK(vector<int> &a, int k) {
    if(k==0 || a.size()==0)
        return 0;

    int maxSum = INT_MIN;
    int windowStart = 0;
    int windowSum = 0;

    for(int windowEnd = 0; windowEnd<a.size(); windowEnd++) {

        windowSum += a[windowEnd];

        if(windowEnd - (windowStart) + 1 == k) {
            maxSum = max(maxSum, windowSum);
            windowSum -= a[windowStart];
            windowStart++;
        }
    }
    return maxSum;
}