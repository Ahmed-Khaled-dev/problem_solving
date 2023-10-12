/**
*    author:  Akayiz
*    created: 2023-07-23 13:32:58
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

// Weight, Value
pair<long long, long long> items[105] = {};

long long items_count;

long long dp[105][100005] = {};

// States : dp[i][remaining_weight]

// Definition : It returns the maximum sum of values that can be taken from a[i] -> a[n - 1] 
// without exceeding the remaining weight

// Base cases : dp[i][0] = 0, dp[n][remaining_weight] = 0, dp[i][-ve] = -infinity

// Transition : dp[i][remaining_weight] = max(dp[i + 1][remaining_weight], dp[i + 1][remaining_weight - w[i]] + v[i])

// Answer : dp[0][initial_weight]

long long maximum_sum_of_values(long long idx, long long remaining_weight){
    for (long long i = items_count - 1; i >= 0; i--)
    {
        for (long long weight = 0; weight <= remaining_weight; weight++)
        {
            if (weight >= items[i].first)
                dp[i][weight] = max(dp[i + 1][weight], dp[i + 1][weight - items[i].first] + items[i].second);
            else
                dp[i][weight] = dp[i + 1][weight];
        }
    }

    return dp[idx][remaining_weight];
}

int main() {
    fast();

    long long initial_weight;
    cin >> items_count >> initial_weight;

    for (long long i = 0; i < items_count; i++)
    {
        cin >> items[i].first >> items[i].second;
    }
    
    cout << maximum_sum_of_values(0, initial_weight);

    // for (long long i = 0; i < items_count + 1; i++)
    // {
    //     for (long long w = 0; w <= initial_weight; w++)
    //     {
    //         cout << dp[i][w] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}