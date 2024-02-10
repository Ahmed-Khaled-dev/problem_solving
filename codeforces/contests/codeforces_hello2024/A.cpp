/**
*    author:  Akayiz
*    created: 2024-01-06 16:40:20
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

    ll a, b;
    while(t--){
        cin >> a >> b;

        if(((a + b) - 1) % 2 == 0){
            cout << "Alice" << el;
        }
        else
            cout << "Bob" << el;
    }

    return 0;
}