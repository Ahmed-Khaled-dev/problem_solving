/**
*    author:  Akayiz
*    created: 2023-08-05 12:39:20
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// States : dp[sum]

// Definition : It returns the number of distinct **ordered/different** ways to produce the sum with the available coins

// Base cases : dp[0] = 1, dp[-ve] = +inf

// Transition : dp[sum] += dp[sum - coin[i]]

int coins[105];
ll dp[1000005];
const int mod = 1e9 + 7;

int main() {
    Akayiz

    int coins_count, desired_sum;
    cin >> coins_count >> desired_sum;

    for (int i = 0; i < coins_count; i++)
    {
        cin >> coins[i];
    }

    dp[0] = 1;

    for (int c = 0; c < coins_count; c++)
    {
        for (int i = 1; i <= desired_sum; i++)
        {
            if(coins[c] <= i)
                dp[i] = (dp[i] % mod + dp[i - coins[c]] % mod) % mod;
        }
    }
    
    cout << dp[desired_sum] % mod << el;

    return 0;
}