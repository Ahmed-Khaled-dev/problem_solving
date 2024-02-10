/**
*    author:  Akayiz
*    created: 2024-01-05 04:19:54
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// This is just me applying the well known solution to the problem after watching neetcode's video

int main() {
    Akayiz

    class Solution {
    public:

        string encode(vector<string>& strs) {
            string encoded = "";

            for(auto s : strs){
                encoded += to_string(s.size()) + "#" + s;
            }

            return encoded;

            //4#neet4#code4#love3#you
        }

        vector<string> decode(string s) {
            vector<string> decoded;
            string word_length = "";

            for(int i = 0; i < s.size() - 1; i++){
                char c = s[i];

                if(c == '#'){
                    int curr_word_len = stoi(word_length);
                    string curr_word = "";

                    for(int j = i + 1; j < (i + 1 + curr_word_len); j++){
                        curr_word += s[j];
                    }
                    decoded.push_back(curr_word);
                    i += curr_word_len;
                    word_length = "";
                }
                else{
                    word_length += c;
                }  
            }

            return decoded;
        }
    };

    return 0;
}