#include<bits/stdc++.h> 
using namespace std;

int main() {

    // creating the stack
    stack <int> s;

    // push operation
    s.push(2);
    s.push(3);

    // pop operation
    s.pop();

    cout << s.top() << endl;

    if(s.empty()) cout << "stack is empty" << endl;
    else cout << "stack is not empty" << endl;

    cout << s.size() << endl;
}