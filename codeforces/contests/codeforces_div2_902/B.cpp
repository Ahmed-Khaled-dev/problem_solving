/**
*    author:  Akayiz
*    created: 2023-10-08 12:15:00
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int costs[100005], maxs[100005];

int main() {
    Akayiz

    int t, n, pak_cost;
    cin >> t;

    while(t--){
        cin >> n >> pak_cost;
        vector<pair<int, int>> res = {};

        for (int i = 0; i < n; i++)
        {
            cin >> maxs[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> costs[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            res.emplace_back(costs[i], maxs[i]);
        }
        sort(res.begin(), res.end());

        ll ans = 0, taken = 0;
        ans += pak_cost;
        taken++;

        for (auto item : res)
        {
            if(taken == n || item.first >= pak_cost)
                break;
            
            if(item.second >= (n - taken))
            {
                ans += (n - taken) * item.first;
                taken += (n - taken);
            }
            else
            {
                ans += item.second * item.first;
                taken += item.second;
            }
        }
        
        if(taken != n)
            ans += pak_cost * (n - taken);

        cout << ans << el;
    }

    return 0;
}