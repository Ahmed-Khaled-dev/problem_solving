/**
*    author:  Akayiz
*    created: 2023-10-20 17:33:58
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
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            unordered_map<string, vector<string>> anagrams;

            for(int i = 0; i < strs.size(); i++){
                string sorted_anagram = strs[i];
                sort(sorted_anagram.begin(), sorted_anagram.end());
                anagrams[sorted_anagram].push_back(strs[i]);
            }
            
            vector<vector<string>> ans;

            for(auto anagram : anagrams){
                ans.push_back(anagram.second);
            }

            return ans;
        }
    };

    return 0;
}