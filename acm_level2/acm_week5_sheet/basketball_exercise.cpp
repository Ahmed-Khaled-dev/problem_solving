/**
*    author:  Akayiz
*    created: 2023-08-01 15:35:38
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// States : dp[idx][state]

// Definition : Returns the maximum total height of players that can be choosen
// from 0 -> idx depending on the state given, either (1 = taken player from first row, 2 = taken player from second row
// 3 = didn't take any player)

// Base case : dp[n][state] = 0, dp[0][1] = v(1), dp[0][2] = v(2), dp[0][3] = 0

// Transition/Backward formula : 
// dp[i][1] = max(dp[i - 1][2], dp[i - 1][20]) + v1(i);
// dp[i][2] = max(dp[i - 1][1], dp[i - 1][10]) + v2(i);
// dp[i][3] = max(dp[i - 1][1], dp[i - 1][2]);

ll dp[100005][4] = {};
ll row1_heights[100005] = {};
ll row2_heights[100005] = {};

int main() {
    Akayiz

    ll row_students_count;
    cin >> row_students_count;

    for (int i = 0; i < row_students_count; i++)
    {
        cin >> row1_heights[i]; 
    }

    for (int i = 0; i < row_students_count; i++)
    {
        cin >> row2_heights[i]; 
    }

    dp[0][1] = row1_heights[0], dp[0][2] = row2_heights[0], dp[0][3] = 0;

    for (int i = 1; i < row_students_count; i++)
    {
        dp[i][1] = max(dp[i - 1][2], dp[i - 1][3]) + row1_heights[i];
        dp[i][2] = max(dp[i - 1][1], dp[i - 1][3]) + row2_heights[i];
        dp[i][3] = max(dp[i - 1][1], dp[i - 1][2]);
    }

    cout << max(dp[row_students_count - 1][1], dp[row_students_count - 1][2]) << el;
    
    return 0;
}