#include<bits/stdc++.h>
using namespace std;

bool isConsonant(char ch) {
    return !(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') && (ch>=97 && ch<=122);
}

int totalConsonants(string str, int n) {
    if(n==1) return isConsonant(str[0]);

    return totalConsonants(str, n-1) + isConsonant(str[n-1]);
}


