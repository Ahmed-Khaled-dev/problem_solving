/**
*    author:  Akayiz
*    created: 2023-08-05 18:50:30
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// States : dp[idx][remaining_operations]

// Definition : Returns the max elemenet that i see in the array
// from idx -> n, without exceeding the remaining_operations

// Base cases : (1-based) dp[n][remaining_operations] = a[n]

// Transition : dp[i][remaining_operations - max] = max(a[i], dp[i + 1][0], dp[i + 1][1])
//              dp[i][1] = max(a[i] + max elly 2a2dar a3melo, dp[i + 1][0])
//              dp[i][1] = max(a[i] + max elly 2a2dar a3melo, dp[i + 1][1])

int main() {
    Akayiz



    return 0;
}