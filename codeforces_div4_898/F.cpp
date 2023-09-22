/**
*    author:  Akayiz
*    created: 2023-09-21 18:17:15
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int fruits[200005];
ll heights[200005];

int main() {
    Akayiz

    ll t;
    cin >> t;

    ll n, max_fruits;
    while(t--){
        cin >> n >> max_fruits;
        for (ll i = 0; i < n; i++)
        {
            cin >> fruits[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> heights[i];
        }

        ll ans = 0, current_fruits = 0, current_length = 0, first_in_sub_array_idx = 2e5 + 1;

        for (ll i = 0; i < n - 1; i++)
        {
            //cout << ans << " " << current_fruits << " " << current_length << el;
            if((heights[i] % heights[i + 1] == 0))
            {
                if(current_fruits + fruits[i] <= max_fruits)
                {
                    if(current_fruits == 0)
                        first_in_sub_array_idx = i;
                    current_fruits += fruits[i];
                    current_length++;
                }
                else
                {
                    if((current_fruits - fruits[first_in_sub_array_idx] + fruits[i]) <= max_fruits)
                    {
                        current_fruits -= fruits[first_in_sub_array_idx];
                        current_fruits += fruits[i];
                        first_in_sub_array_idx = first_in_sub_array_idx + 1;
                    }
                }
            }
            else
            {
                if(fruits[i] + current_fruits <= max_fruits){
                    current_length++;
                }
                ans = max(ans, current_length);
                current_length = 0;
                current_fruits = 0;
                first_in_sub_array_idx = 2e5 + 1;
            }
        }

        if(current_fruits != 0){
            if(fruits[n - 1] + current_fruits <= max_fruits)
                current_length++;
        }
        else
        {
            if(fruits[n - 1] <= max_fruits)
                current_length++;
        }

        ans = max(ans, current_length);

        cout << ans << el;
    }

    return 0;
}