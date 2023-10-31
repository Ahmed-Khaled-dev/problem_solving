/**
*    author:  Akayiz
*    created: 2023-10-31 21:41:57
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
        vector<int> topKFrequent(vector<int>& nums, int k) {
            // Value, Frequency
            unordered_map<int, int> freq;
            vector<int> ans;

            for(auto n : nums)
                freq[n]++;
            
            int n = nums.size();

            vector<vector<int>> freq_elements(n + 5);

            for(auto f : freq)
                freq_elements[f.second].push_back(f.first);
            
            int cnt = 0;
            for(int i = nums.size(); i > 0; i--){
                if(!empty(freq_elements[i]))
                {
                    for(auto e : freq_elements[i])
                    {
                        ans.push_back(e);
                        cnt++;
                        if(cnt == k)
                            return ans;
                    }
                }
            }

            return ans;
        }
    };

    return 0;
}