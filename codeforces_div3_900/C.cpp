/**
*    author:  Akayiz
*    created: 2023-09-26 17:48:53
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    ll t;
    cin >> t;

    ll n, k, x;
    while(t--){
        cin >> n >> k >> x;
        if(k > n)
        {
            cout << "NO" << el;
        }
        else
        {
            ll min_sum = (k * (k + 1)) / 2, max_sum = ((n * (n + 1)) / 2) - (((n - k) * (n - k + 1)) / 2);
            if(x >= min_sum && x <= max_sum)
                cout << "YES" << el;
            else
                cout << "NO" << el;
        }
    }

    return 0;
}