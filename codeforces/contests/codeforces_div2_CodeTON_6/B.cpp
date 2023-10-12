/**
*    author:  Akayiz
*    created: 2023-09-18 18:13:54
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll a[200005], b[200005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n, m;
    while(t--){
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll largest_in_b = -1, smallest_in_b = 1e10;
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            largest_in_b = max(largest_in_b, b[i]);
            smallest_in_b = min(smallest_in_b, b[i]);
        }
        
        ll ans1 = 0;
        for (int i = 0; i < n; i++)
        {
            ans1 ^= a[i];
        }

        for (int i = 0; i < n; i++)
        {
            b[i] = a[i] | largest_in_b;
        }

        ll ans2 = 0;
        for (int i = 0; i < n; i++)
        {
            ans2 ^= b[i];
        }

        for (int i = 0; i < n; i++)
        {
            a[i] |= smallest_in_b;
        }

        ll ans3 = 0;
        for (int i = 0; i < n; i++)
        {
            ans3 ^= a[i];
        }

        cout << min({ans1, ans2, ans3}) << " " << max({ans1, ans2, ans3}) << el;
    }
    
    

    return 0;
}