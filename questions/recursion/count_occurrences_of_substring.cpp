#include<bits/stdc++.h>
using namespace std;

int countSubstring(string str1, string str2) {
    int n1 = str1.length();
    int n2 = str2.length();

    if(n1==0 || n1<n2) return 0;

    if(str1.substr(0,n2).compare(str2)==0) return countSubstring(str1.substr(n2-1), str2)+1;
    return countSubstring(str1.substr(n2-1), str2);
}


