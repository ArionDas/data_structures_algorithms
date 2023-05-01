#include<bits/stdc++.h>
using namespace std;

int countWaysrecur(int x, int n, int num) {

    // base case
    int val = (x-pow(num,n));
    if(val==0) return 1;
    if(val<0) return 0;

    // there are 2 possibilities - either sum is included or not
    return countWaysrecur(val,n,num+1) + countWaysrecur(x,n,num+1);
}

int countWays(int x, int n) {
    countWaysrecur(x,n,1);
}


