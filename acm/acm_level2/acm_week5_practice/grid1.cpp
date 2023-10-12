/**
*    author:  Akayiz
*    created: 2023-07-15 21:07:08
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}
// memo = memoization

const long long mod = 1e9 + 7;

int get_numbers_of_ways_to_reach_cell(int rows, int columns, char grid[1005][1005], int memo[1005][1005]){
    memo[1][1] = 1;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (grid[i][j] == '.')
            {
                memo[i][j] += (memo[i][j - 1] % mod  + memo[i - 1][j] % mod) % mod;
            }
        }
    }

    return memo[rows][columns];
}

char grid[1005][1005] = {};
int memo[1005][1005] = {};

int main() {
    fast();

    int rows, columns;

    cin >> rows >> columns;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cin >> grid[i][j];
        }
    }
    
    cout << get_numbers_of_ways_to_reach_cell(rows, columns, grid, memo);

    return 0;
}