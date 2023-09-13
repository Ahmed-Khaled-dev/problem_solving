/**
*    author:  Akayiz
*    created: 2023-07-15 21:38:42
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

const long long mod = 1e9 + 7;

bool visited[1005][1005]  = {};
char grid[1005][1005] = {};

int dx[] = {0, 1};
int dy[] = {1, 0};

int grid_rows, grid_columns;

int number_of_ways = 0;

void get_numbers_of_ways_to_reach_cell(int current_row, int current_column){
    visited[current_row][current_column] = 1;

    //cout << current_row << " " << current_column << endl;
    
    if (current_row == grid_rows && current_column == grid_columns)
    {
        number_of_ways++;
    }
    
    for (int i = 0; i < 2; i++)
    {
        if (grid[current_row + dx[i]][current_column + dy[i]] == '.')
        {
            if (!visited[current_row + dx[i]][current_column] + dy[i])
            {
                get_numbers_of_ways_to_reach_cell(current_row + dx[i], current_column + dy[i]);
                visited[current_row + dx[i]][current_column + dy[i]] = 0;
            }
        }
    }
}

int main() {
    fast();
    cin >> grid_rows >> grid_columns;

    for (int i = 1; i <= grid_rows; i++)
    {
        for (int j = 1; j <= grid_columns; j++)
        {
            cin >> grid[i][j];
        }
    }
    
    get_numbers_of_ways_to_reach_cell(1, 1);

    cout << number_of_ways;

    return 0;
}