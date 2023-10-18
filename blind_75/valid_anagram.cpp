/**
*    author:  Akayiz
*    created: 2023-10-18 20:31:47
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
        bool isAnagram(string s, string t) {
            if(s.size() != t.size())
                return false;

            sort(s.begin(), s.end());
            sort(t.begin(), t.end());

            for(int i = 0; i < s.size(); i++){
                if(s[i] != t[i])
                    return false;
            }
            return true;
        }
    };

    return 0;
}