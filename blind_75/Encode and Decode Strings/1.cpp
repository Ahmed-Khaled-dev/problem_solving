/**
*    author:  Akayiz
*    created: 2024-01-05 04:19:39
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// This was my initial solution to this problem when i thought about it myself

int main() {
    Akayiz

    class Solution {
    public:

        string encode(vector<string>& strs) {
            string encoded = "";
            string original = "";

            int curr_len = 0;

            for(auto s : strs){
                curr_len += s.size();
                encoded += "-" + to_string(curr_len);
                original += s;
            }

            encoded += "/";
            encoded += original;
            return encoded;

            //"-4-8-12-15/neetcodeloveyou"
        }

        vector<string> decode(string s) {
            string current_word = "";
            string current_idx;
            vector<int> seperate_idxs;
            vector<string> decoded;
            bool found_slash = 0;
            int words_idx = 0;

            for(int i = 1; i < s.size(); i++){
                if(!found_slash){
                    if(s[i] == '-' || s[i] == '/'){
                        seperate_idxs.push_back(stoi(current_idx));
                        current_idx = "";
                        if(s[i] == '/'){
                            found_slash = 1;
                        }
                    }
                    else{
                        current_idx += s[i];
                    }
                }
                else{ 
                    if(words_idx == seperate_idxs[decoded.size()]){
                        decoded.push_back(current_word);
                        current_word = "";
                    }
                    current_word += s[i];
                    words_idx++;
                }
            }

            decoded.push_back(current_word);

            return decoded;
        }
    };

    return 0;
}