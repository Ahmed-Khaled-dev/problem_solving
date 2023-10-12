/**
*    author:  Akayiz
*    created: 2023-10-08 13:18:02
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

    ll n, m, k;
    while(t--){
        cin >> n >> m >> k;
        
        if(k == 1)
            cout << 1 << el;
        else if(k == 2)
        {
            if(m / n > 0)
                cout << (n - 1) + (m / n) << el;
            else
                cout << m + (m / n) << el;
        }
        else if(k == 3 && m > n)
            cout << (m - n) - (m / n) + 1 << el;
        else
            cout << 0 << el;
    }

    return 0;
}