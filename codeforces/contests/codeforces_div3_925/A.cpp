/**
*    author:  Akayiz
*    created: 2024-02-13 15:52:56
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
    while(t--){
        cin >> n;
        if(n - (26 * 2) > 0){
            cout << (char) ('a' + ((n - 26*2) - 1)) << 'z' << 'z' << el;
            continue;
        }
        else
            cout << 'a';

        if(n - 26 > 1)
            cout << (char) ('a' + ((n - 26) - 2)) << 'z' << el;
        else
            cout << 'a' << (char) ('a' + (n - 3)) << el;
    }

    return 0;
}