/*
>> number of open braces = number of closing braces
>> every close brace should have a open brace before it

>> now we have to flip braces to make the string valid in min cost
    >> ofc odd length is not possible
*/

int findMinimumCost(string str) {

    // odd length
    if(str.length()%2!=0) return -1;

    stack<char> s;

    for(int i=0; i<str.length(); i++) {
        char ch = str[i];

        if(ch=='{') s.push(ch);
        else {
            if(!s.empty() && s.top()=='{') {
                s.pop();
            }
            else {
                s.push(ch);
            }
        }

        // stack contains invalid expression
        int a=0, b=0;
        while(!s.empty()) {
            if(s.top()=='{') {
                b++;
            }
            else {
                a++;
            }
            s.pop();
        }
        int ans = (a+1)/2 + (b+1)/2;
        return ans;
    }
}



