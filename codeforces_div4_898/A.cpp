/**
*    author:  Akayiz
*    created: 2023-09-21 17:36:50
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

    while(t--){
        string s;
        cin >> s;

        if(s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }

    return 0;
}