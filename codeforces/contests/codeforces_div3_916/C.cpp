/**
*    author:  Akayiz
*    created: 2023-12-21 21:29:36
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll prefix[200005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int quests, max_quests;
    while(t--){
        memset(prefix, 0, sizeof(prefix));
        vector<pair<ll, ll>> xp = {};
        
        cin >> quests >> max_quests;

        ll first, second;
        ll max_second = INT_MIN;
        for (int i = 1; i <= quests; i++)
        {
            cin >> first;
            xp.emplace_back(first, 0);
            prefix[i] = prefix[i - 1] + first;   
        }

        for (int i = 0; i < quests; i++)
        {
            cin >> second;
            xp[i].second = second;
            max_second = max(max_second, second);
        }
        
        ll ans;
        if(max_quests > quests)
        {
            ans = prefix[quests];
            ans += (max_quests - quests) * max_second;
        }
        else
            ans = prefix[max_quests];
        
        max_second = INT_MIN;
        for (int i = 0; i < quests - 1; i++)
        { 
            max_second = max(max_second, xp[i].second);
            //cout << max_second << " " << xp[i].second << el;
            if(i == max_quests)
                break;

            //cout << xp[i + 1].first << "---" << el;
            if(xp[i + 1].first < max_second){
                ans = max(ans, prefix[i + 1] + (max_quests - (i + 1)) * max_second);
            } 
        }

        cout << ans << el;
    }

    return 0;
}