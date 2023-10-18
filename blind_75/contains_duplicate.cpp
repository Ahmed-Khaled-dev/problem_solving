/**
*    author:  Akayiz
*    created: 2023-10-18 20:15:00
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            unordered_map<int, int> freq;
            for(int i = 0; i < nums.size(); i++){
                freq[nums[i]]++;
                if(freq[nums[i]] == 2)
                    return true;
            }
            return false;
        }
    };

    return 0;
}