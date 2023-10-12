/**
*    author:  Akayiz
*    created: 2023-10-02 19:15:34
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// States: dp[i]
// Definition: Returns the minimum m, when the MEX = i and i can see numbers from i -> first_mex;
// Base case: dp[5001] = 0, dp[5000] = (5000 * freq[5000] - 1) + i
// Transition: dp[i] = min(dp[i], dp[j] + j * (freq[i] - 1) + i)

int main() {
    Akayiz

    int t, n;
    cin >> t;

    ll a;

    ll dp[5005];

    while(t--){
        int freq[5005] = {};
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if(a < 5001)
                freq[a]++;
        }

        for (int i = 0; i < 5001; i++)
        {
            dp[i] = 1e18;
        }
        
        ll first_mex = 0;
 
        for (int i = 0; i < 5001; i++)
        {
            if(freq[i] == 0)
            {
                first_mex = i;
                break;
            }
        }

        dp[first_mex] = 0;

        for (int i = first_mex; i >= 1; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if(freq[j] > 0)
                    dp[j] = min(dp[j], dp[i] + (i * (freq[j] - 1)) + j);
                else
                    dp[j] = 0;
            }
        }
        
        cout << dp[0] << el;
    }

    return 0;
}