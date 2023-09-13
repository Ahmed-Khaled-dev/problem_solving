/**
*    author:  Akayiz
*    created: 2023-07-15 23:28:36
**/

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int stones_cost[100005] = {};
int memo[100005] = {};

int minimum_cost_to_reach_stone(int stone){
    memo[0] = 0;
    memo[1] = abs(stones_cost[1] - stones_cost[0]);

    for (int i = 2; i < stone + 1; i++)
    {
        memo[i] = min(memo[i - 1] + abs(stones_cost[i] - stones_cost[i - 1]), memo[i - 2] + 
        abs(stones_cost[i] - stones_cost[i - 2]));
    }
    
    return memo[stone];
}

int main() {
    fast();

    int stones_count;
    cin >> stones_count;

    for (int i = 0; i < stones_count; i++)
    {
        cin >> stones_cost[i];
    }
    
    cout << minimum_cost_to_reach_stone(stones_count - 1);

    return 0;
}