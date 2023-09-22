/**
*    author:  Akayiz
*    created: 2023-09-21 18:06:00
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll columns[200005];

int main() {
    Akayiz

    ll t;
    cin >> t;

    while(t--){
        ll columns_count, max_water;
        cin >> columns_count >> max_water;

        for (ll i = 0; i < columns_count; i++)
        {
            cin >> columns[i];
        }
        
        ll low = 1, high = 1e10, mid, ans = -1;
        while(low <= high){
            mid = (low + high) / 2;

            ll used_water  = 0;
            for (ll i = 0; i < columns_count; i++)
            {
                if(columns[i] <= mid)
                {
                    used_water += mid - columns[i];
                }
            }
            
            if(used_water > max_water)
                high = mid - 1;
            else
            {
                ans = max(ans, mid);
                low = mid + 1;
            }
        }

        cout << ans << el;
    }

    return 0;
}