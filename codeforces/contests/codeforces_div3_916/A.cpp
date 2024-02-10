/**
*    author:  Akayiz
*    created: 2023-12-21 21:08:10
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    int t;
    cin >> t;

    int n;
    string s;
    while(t--){
        map<char, int> freq = {};
        cin >> n;
        cin >> s;

        for(auto c : s){
            freq[c]++;
        }

        int problems_solved = 0;
        for(char c = 'A'; c <= 'Z'; c++){
            if(freq[c] >= (int) (c - 'A') + 1){
                problems_solved++;
            }
        }

        cout << problems_solved << el;
    }

    return 0;
}