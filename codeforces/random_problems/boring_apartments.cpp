/**
*    author:  Akayiz
*    created: 2023-10-20 23:36:24
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

    string s;
    while(t--){
        cin >> s;
        cout << (((s[0] - '0') - 1) * 10) + ((s.size()) * (s.size() + 1) / 2) << el;
    }

    return 0;
}