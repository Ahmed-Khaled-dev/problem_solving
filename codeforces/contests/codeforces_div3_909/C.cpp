/**
*    author:  Akayiz
*    created: 2023-11-17 17:14:58
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll arr[200005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n;
    while(t--){
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<pair<int, int>> subs = {};
        
        bool found = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if(j != i){
                    if(abs(arr[j]) % 2 == abs(arr[j - 1]) % 2){
                        subs.emplace_back(i, j - 1);
                        i = j - 1;
                        found = 1;
                        break;
                    }
                }
            }
            if(!found)
            {
                subs.emplace_back(i, n - 1);
                break;
            }
            found = 0;
        }
        
        ll ans = INT_MIN;
        for(auto s : subs){
            ll curr_max = arr[s.first], maxi = arr[s.first];
            //cout << s.first << " " << s.second << el; 
            for (int i = s.first + 1; i <= s.second; i++)
            {
                if(arr[i] >= arr[i] + curr_max)
                    curr_max = arr[i];
                else
                    curr_max = arr[i] + curr_max;
                maxi = max(maxi, curr_max);
            }
            ans = max(ans, maxi);
        }

        cout << ans << el;
    }

    return 0;
}