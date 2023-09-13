/**
*    author:  Akayiz
*    created: 2023-07-18 17:33:43
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cerr.tie(0);
     cout.tie(0);
}

// States : dp[sum]

// Definition : Returns the number of distinct ways to produce the sum, using the available coins

// Base cases : dp[0] = 1, dp[-ve] = 0

// Transition : dp[sum] += for(auto coin : coins) {dp[sum - coin]}

long long coins[102] = {};
const int mod = 1e9 + 7;
long long dp[1000001] = {};

int main() {
    fast();

    long long coins_count, desired_sum;
    cin >> coins_count >> desired_sum;

    for (int i = 0; i < coins_count; i++)
    {
        cin >> coins[i];
    }

    dp[0] = 1;
    //sort(coins, coins + coins_count);
    for (int i = 1; i <= desired_sum; i++)
    {
        for (int c = 0; c < coins_count; c++)
        {
            if (coins[c] <= i)
                dp[i] += dp[i - coins[c]] % mod;
        }
    }

    cout << dp[desired_sum] % mod;
    
    return 0;
}