/**
*    author:  Akayiz
*    created: 2024-01-06 16:49:08
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
        cin >> n;
        cin >> s;

        map<char, int> freq = {};
        
        for(auto c : s){
            freq[c]++;
        }

        cout << abs(freq['+'] - freq['-']) << el;
    }

    return 0;
}