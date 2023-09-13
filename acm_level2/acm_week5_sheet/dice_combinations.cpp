/**
*    author:  Akayiz
*    created: 2023-07-18 17:30:40
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int coins[] = {1, 2, 3, 4, 5, 6};
long long dp[1000005] = {};
long long mod = 1e9 + 7;

int main() {
    fast();

    int sum;
    cin >> sum;
    
    dp[0] = 1;
    for (int i = 1; i <= sum; i++)
    {
        for (auto coin : coins)
        {
            if (i >= coin)
                dp[i] = (dp[i] % mod + dp[i - coin] % mod) % mod;
        } 
    }

    cout << dp[sum] % mod;

    return 0;
}