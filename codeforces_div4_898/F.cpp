/**
*    author:  Akayiz
*    created: 2023-09-21 18:17:15
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll fruits[200010];
ll heights[200010];

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

        ll ans = 0, current_fruits = 0, current_length = 0, first_in_sub_array_idx = 2e5 + 5;
        heights[n] = 1;

        for (int i = 0; i < n; i++)
        {
            if(heights[i] % heights[i + 1] == 0){
                while(current_fruits + fruits[i] > max_fruits && current_length > 0)
                {
                    current_length--;
                    current_fruits -= fruits[first_in_sub_array_idx];
                    first_in_sub_array_idx++;
                }
                if(current_fruits + fruits[i] <= max_fruits)
                {
                    if(current_length == 0)
                        first_in_sub_array_idx = i;
                    current_length++;
                    current_fruits += fruits[i];
                    ans = max(ans, current_length);
                }
            }
            else
            {
                if(current_fruits + fruits[i] <= max_fruits)
                    current_length++;
                
                ans = max(ans, current_length);
                current_fruits = 0;
                current_length = 0;
                first_in_sub_array_idx = 2e5 + 5;
            }
        }
        
        ans = max(ans, current_length);
        cout << ans << el;
    }
    return 0;
}