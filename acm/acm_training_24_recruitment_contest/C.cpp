/**
*    author:  Akayiz
*    created: 2023-09-26 14:01:44
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int weights[100005];
int values[100005];

// States: dp[idx][weight]
// Definition: Returns the maximum value that can be obtained while i can see from 1 -> idx, while not exceeding the weight
// Base cases: dp[-idx][weight] = 0, dp[idx][0] = -inf
// Transition: dp[idx][weight] = max(dp[idx - 1][weight], dp[idx - 1][weight - w[i]] + v[i])

int dp[100005][1005];

int main() {
    Akayiz

    int types, max_weight;
    cin >> types >> max_weight;

    int boxes, weight, value;
    int items = 1;
    while(types--)
    {
        cin >> boxes >> weight >> value;
        while(boxes--){
            weights[items] = weight;
            values[items] = value;
            items++;
        }
    }
    
    for (int w = 1; w < 1002; w++)
    {
        dp[0][w] = 0;
    }
    
    items--;
    for (int i = 1; i <= items; i++)
    {
        for (int w = 0; w <= max_weight; w++)
        {
            if(w - weights[i] >= 0)
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i]] + values[i]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    
    cout << dp[items][max_weight] << el;

    return 0;
}