#include<bits/stdc++.h>
using namespace std;

int find(int dec_num) {
    if(dec_num==0) return 0;
    else
        return (dec_num%2 + 10*(find(dec_num/2));
}

