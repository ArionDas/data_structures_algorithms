#include<bits/stdc++.h>
using namespace std;

vector<int> findfirstNegative(vector<int> a, int k) {

    int n = a.size();
    vector<int> firstNegative(n-k+1);
    int idx = 0;

    queue<int> q;

    int windowStart = 0;
    for(int windowEnd=0; windowEnd<n; windowEnd++) {
        if(a[windowEnd]<0)
            q.push(a[windowEnd]);

        if(windowEnd - windowStart + 1 == k) {
            if(q.empty())
                firstNegative[idx++] = 0;
            else {
                int num = q.front();
                firstNegative[idx++] = num;

                if(num == a[windowStart])
                    q.pop();
            }
            windowStart++;
        }
    }
    return firstNegative;
}