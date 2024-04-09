/**
*    author:  Akayiz
*    created: 2024-02-23 18:19:34
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll prefix[300005];
ll prefix_sum[300005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n, q, num;
    while(t--){
        cin >> n >> q;
        cin >> num;
        if(num == 1)
            prefix[0] = 1;
        else
            prefix[0] = 0;
        
        prefix_sum[0] = num;
        for (int i = 1; i < n; i++)
        {
            cin >> num;
            if(num == 1)
                prefix[i] = prefix[i - 1] + 1;
            else
                prefix[i] = prefix[i - 1];

            prefix_sum[i] = prefix_sum[i - 1] + num;
        }
        
        // for (int i = 0; i < n; i++)
        // {
        //     cout << prefix[i] << " ";
        // }
        // cout << endl;
        
        ll l, r;
        while(q--){
            cin >> l >> r;
            // << prefix[r - 1] << " " << prefix[l - 2] << endl;
            if(prefix[r - 1] - prefix[l - 2] >= r - l && prefix_sum[r - 1] - prefix_sum[l - 2] - (prefix[r - 1] - prefix[l - 2]) - 1 == 1)
                cout << "NO" << endl;
            else if(r == l)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }

    return 0;
}