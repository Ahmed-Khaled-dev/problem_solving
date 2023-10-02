/**
*    author:  Akayiz
*    created: 2023-09-28 23:13:25
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int rows, columns;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool inBorders(int x, int y){
    return x < rows - 1 && y < columns - 1 && x > 0 && y > 0;
}

bool visited[55][55];
char berland[55][55];
set<pair<int, pair<int, int>>> lakes;

void bfs(int x, int y, bool state){
    visited[x][y] = 1;
    pair<int, int> lake_begin = {x, y};
    
    queue<pair<int, int>> q = {};
    q.push(lake_begin);

    bool lake = 1;
    int water_cells = 1;
    
    if(state == 1)
        berland[x][y] = '*';

    while(!q.empty()){
        tie(x, y) = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            
            if(berland[new_x][new_y] == '.'){
                if(state == 1){
                    q.push({new_x, new_y});
                    berland[new_x][new_y] = '*';
                }
                else
                {
                    if(!visited[new_x][new_y]){
                        if(!inBorders(new_x, new_y))
                            lake = 0;
                    
                        water_cells++;
                        q.push({new_x, new_y});
                        visited[new_x][new_y] = 1;
                    }
                }
            }
        }
    }

    if(lake && state == 0){
        lakes.insert({water_cells, lake_begin});
    }
}

int main() {
    Akayiz

    int lakes_left;
    cin >> rows >> columns >> lakes_left;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> berland[i][j];
        }
    }

    for (int i = 1; i < rows - 1; i++)
    {
        for (int j = 1; j < columns - 1; j++)
        {
            if(berland[i][j] == '.' && !visited[i][j])
                bfs(i, j, 0);
        }
    }

    int cnt = 0, minimum_cells = 0;
    // for (auto lake : lakes)
    // {
    //     cout << lake.first << " " << lake.second.first << " " << lake.second.second << el;
    // }

    for (auto lake : lakes)
    {
        if(cnt == lakes.size() - lakes_left)
            break;

        minimum_cells += lake.first;
        cnt++;
        bfs(lake.second.first, lake.second.second, 1);
    }
    
    cout << minimum_cells << el;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << berland[i][j];
        }
        cout << el;
    }
    
    return 0;
}