#include<bits/stdc++.h>
using namespace std;

class solution {

    public:
        int longestConsecutive(vector<int> &nums) {
            // putting all the elements in the hashset
            set<int> hashset;
            for(int num:nums)
                hashset.insert(num);

            int longestStreak = 0;

            for(int num:nums) {
                if(!hashset.count(num-1)){ // taking the 'num' to the minimum value of the sequence present
                    int currentNum = num;
                    int currentStreak = 1;

                    while(hashset.count(currentNum+1)) {
                        currentNum += 1;
                        currentStreak += 1;
                    }

                    longestStreak = max(longestStreak, currentStreak);
                }
            }
            return longestStreak;
        }
};