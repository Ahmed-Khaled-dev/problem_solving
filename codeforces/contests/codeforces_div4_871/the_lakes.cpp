/**
*    author:  Akayiz
*    created: 2023-05-11 23:12:47
**/

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int lakes_depths[1005][1005];
bool depth_visited[1005][1005];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int rows, columns, lake_depth = 0;

bool inBorders(int i, int j) {
   return i >= 0 && i < rows && j >= 0 && j < columns;
}

void dfs(int node_x, int node_y){
    depth_visited[node_x][node_y] = 1;
    lake_depth += lakes_depths[node_x][node_y];
    for (int i = 0; i < 4; i++) 
    {
        int new_x = node_x + dx[i];
        int new_y = node_y + dy[i];
        if (inBorders(new_x, new_y) && !depth_visited[new_x][new_y] && lakes_depths[new_x][new_y] != 0) {
            dfs(new_x, new_y);
        }
    }
}

int main() {
    fast();

    int t;
    cin >> t;

    for (int k = 0; k < t; k++)
    {
        cin >> rows >> columns;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cin >> lakes_depths[i][j];
            }    
        }

        int answer = 0;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                lake_depth = 0;
                if (lakes_depths[i][j] != 0 && depth_visited[i][j] == 0)
                {
                    dfs(i, j);
                    answer = max(lake_depth, answer);
                }
            }    
        }
        memset(depth_visited, 0, sizeof(depth_visited));
        cout << answer << endl;
    }
    
    return 0;
}