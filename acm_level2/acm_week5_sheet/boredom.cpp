/**
*    author:  Akayiz
*    created: 2023-08-01 21:51:13
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// States : dp[number][state]

// Definition : Returns the maximum points that could be earned from the start of the numbers till this number
// by either taking (state = 0) or leaving this number (state = 1)

// Base case : dp[0][state] = 0

// Transition : 
// dp[i][0] = dp[i - 1][1] + v(i);
// dp[i][1] = dp[i - 1][0];

ll number_sum[100005];
ll dp[100005][3];

int main() {
    Akayiz

    int numbers_count;
    cin >> numbers_count;

    ll number;
    for (int i = 0; i < numbers_count; i++)
    {
        cin >> number;
        number_sum[number] += number;
    }
    
    dp[0][0] = 0, dp[0][1] = 0;

    for (int i = 1; i <= 100001; i++)
    {
        dp[i][0] = dp[i - 1][1] + number_sum[i];
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][1]);
    }
    
    cout << max(dp[100001][0], dp[100001][1]) << el;

    return 0;
}