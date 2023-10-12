/**
*    author:  Akayiz
*    created: 2023-09-30 17:52:05
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

    ll n, m, k, x;
    while(t--){
        cin >> n >> m >> k;

        ll min_j = 1e16, max_g = -1, max_j = -1, min_g = 1e16, sum_j = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            min_j = min(min_j, x);
            max_j = max(max_j, x);
            sum_j += x;
        }
        
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            min_g = min(min_g, x);
            max_g = max(max_g, x);
        }

        ll ans1, ans2;
        if(min_j < max_g)
        {
            ans1 = sum_j - min_j + max_g;
            ans2 = ans1 - max(max_j, max_g) + min(min_g, min_j);
        }
        else
        {
            ans1 = sum_j;
            ans2 = ans1 - max_j + min_g;
        }

        if(k % 2 == 0)
            cout << ans2 << el;
        else
            cout << ans1 << el;
    }

    return 0;
}