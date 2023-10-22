/**
*    author:  Akayiz
*    created: 2023-10-22 14:25:20
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

    int n, k;
    string s;
    while(t--){
        cin >> n >> k;
        cin >> s;

        map<char, int> freq = {};

        for (int i = 0; i < n; i++)
        {
            freq[s[i]]++;
        }

        int odd = 0;
        for (auto c : freq)
        {
            if(c.second % 2 != 0)
                odd++;
        }

        if(k >= odd - 1 && k <= n){
            cout << "YES" << el;
        }
        else
            cout << "NO" << el;
    }

    return 0;
}