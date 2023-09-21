/**
*    author:  Akayiz
*    created: 2023-09-20 18:07:51
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// Weight, Value
pair<int, int> boxes[100005] = {};

int total_boxes_count = 0;

int dp[100005][1005] = {};

// States : dp[i][remaining_weight]

// Definition : It returns the maximum sum of values that can be taken from a[i] -> a[n - 1] 
// without exceeding the remaining weight

// Base cases : dp[i][0] = 0, dp[n][remaining_weight] = 0, dp[i][-ve] = -infinity

// Transition : dp[i][remaining_weight] = max(dp[i + 1][remaining_weight], dp[i + 1][remaining_weight - w[i]] + v[i])

// Answer : dp[0][initial_weight]

int maximum_sum_of_values(int idx, int remaining_weight){
    for (int i = total_boxes_count - 1; i >= 0; i--)
    {
        for (int weight = 0; weight <= remaining_weight; weight++)
        {
            if (weight >= boxes[i].first)
                dp[i][weight] = max(dp[i + 1][weight], dp[i + 1][weight - boxes[i].first] + boxes[i].second);
            else
                dp[i][weight] = dp[i + 1][weight];
        }
    }

    return dp[idx][remaining_weight];
}

int main() {
    Akayiz

    int initial_weight, items_count;
    cin >> items_count >> initial_weight;

    int boxes_count, weight, value;
    while(items_count--){
        cin >> boxes_count;
        cin >> weight >> value;
        for (int i = total_boxes_count; i < total_boxes_count + boxes_count; i++)
        {
            boxes[i].first = weight;
            boxes[i].second = value;
        }
        total_boxes_count += boxes_count;
    }
    
    cout << maximum_sum_of_values(0, initial_weight);

    return 0;
}