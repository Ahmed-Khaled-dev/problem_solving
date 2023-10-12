/**
*    author:  Akayiz
*    created: 2023-09-26 18:04:16
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int l[200005], r[200005];

int main() {
    Akayiz

    int t, n, k, q, x;
    cin >> t;

    string s;

    while(t--){
        cin >> n >> k;
        cin >> s;

        for (int i = 0; i < k; i++)
        {
            cin >> l[i];
        }
        
        for (int i = 0; i < k; i++)
        {
            cin >> r[i];
        }

        cin >> q;
        int last_a = -1, last_b = -1;
        for (int i = 0; i < q; i++)
        {
            cin >> x;
            int idx = lower_bound(r, r + k, x) - r;
            int a = min(x, r[idx] + l[idx] - x);
            int b = max(x, r[idx] + l[idx] - x);
            if(a != last_a || b != last_b)
            {
                reverse(s.begin() + a - 1, s.begin() + b);   
                last_a = a, last_b = b;
            }
        }
        
        cout << s << el;
    }

    return 0;
}