/**
*    author:  Akayiz
*    created: 2023-07-24 00:56:51
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

// Definition : Returns minimum coins used to produce sum

int coins[105] = {};
long long dp[1000005] = {};

long long mod = 1e9 + 7;

int main() {
    fast();

    int coins_count, desired_sum;
    cin >> coins_count >> desired_sum;

    for (int i = 0; i < coins_count; i++)
    {
        cin >> coins[i];
    }
    
    dp[0] = 0;
    for (int i = 1; i <= desired_sum; i++)
    {
        dp[i] = 1e7;
        for (int j = 0; j < coins_count; j++)
        {
            if (i >= coins[j])
                dp[i] = min(dp[i], (dp[i - coins[j]] + 1));
            // else if (i > coins[j])
            //     if (dp[i - coins[j]] != 0)
            //         dp[i] = min(dp[i], (dp[i - coins[j]] + 1));
        }
    }

    if (dp[desired_sum] == 1e7)
        cout << -1 << endl;
    else
        cout << dp[desired_sum] << endl;
    
    return 0;
}