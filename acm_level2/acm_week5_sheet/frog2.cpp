/**
*    author:  Akayiz
*    created: 2023-07-18 15:22:52
**/

#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int stones_height[100005];
int memo[100005];

int get_minimum_cost_to_jump_to_last_stone(int stones_count, int jumping_distance){
    memo[1] = 0;
    memo[2] = abs(stones_height[2] - stones_height[1]);

    for (int i = 3; i <= stones_count; i++)
    {
        for (int j = i - 1; j >= i - jumping_distance && j > 0; j--)
        {
            if (j == i - 1)
                memo[i] = memo[j] + abs(stones_height[i] - stones_height[j]);
            else
                memo[i] = min(memo[i], memo[j] + abs(stones_height[i] - stones_height[j]));
        }
    }
    
    return memo[stones_count];
}

int main() {
    fast();

    int stones_count;
    cin >> stones_count;

    int jumping_distance;
    cin >> jumping_distance;

    for (int i = 1; i <= stones_count; i++)
    {
        cin >> stones_height[i];
    }

    cout << get_minimum_cost_to_jump_to_last_stone(stones_count, jumping_distance);

    return 0;
}