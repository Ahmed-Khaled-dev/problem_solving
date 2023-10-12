/**
*    author:  Akayiz
*    created: 2023-08-04 16:39:02
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;


// States : dp[idx][value]

// Definition: It returns the minimum weight needed to achieve the given value,
// while i see items from a[1] -> a[idx] (1- based) without exceeding the given weight

// Base cases : dp[0][value] = +inf, dp[idx][0] = 0, dp[idx][value > max_value] = None,
// dp[idx][value to be reached needs weight > max weight] = None

// Transition : dp[idx][value] = min(dp[idx - 1][value], dp[idx - 1][value + v[i]] + w[i]);

// Answer -> max(dp[items_count][value[i]])

ll items_weight[105] = {};
int items_value[105] = {};

ll dp[105][100005] = {};

int main() {
    Akayiz

    ll items_count, knapsack_capacity;

    cin >> items_count >> knapsack_capacity;

    for (int i = 1; i <= items_count; i++)
    {
        cin >> items_weight[i] >> items_value[i];
    }
    
    for (int i = 1; i <= 10000; i++)
    {
        dp[0][i] = 1005;
    }

    for (int i = 1; i <= items_count; i++)
    {
        for (int v = 0; v <= 10000; v++)
        {
            if(v - items_value[i] >= 0)
                dp[i][v] = min(dp[i - 1][v], dp[i - 1][v - items_value[i]] + items_weight[i]);
            else
                dp[i][v] = dp[i - 1][v];
        }
    }

    for (int i = 1; i <= items_count; i++)
    {
        cout << i << " : " << el << "----------------------" << el;
        for (int v = 1; v <= 10; v++)
        {
            cout << dp[i][v] << " ";
        }
        cout << el;
    }


    ll low = 1, high = 10000, mid, ans;
    
    while (low <= high)
    {
        mid = low + ((high - low) / 2);
        if(dp[items_count][mid] <= knapsack_capacity)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    
    cout << ans << el;

    return 0;
}