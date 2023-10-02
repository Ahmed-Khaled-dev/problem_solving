/**
*    author:  Akayiz
*    created: 2023-09-30 17:42:41
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

    ll a, b, n, x;
    while(t--){
        ll ans = 0;
        cin >> a >> b >> n;
        ans += b;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if(x >= a)
                ans += a - 1;
            else
                ans += x;
        }

        cout << ans << el;
    }

    return 0;
}