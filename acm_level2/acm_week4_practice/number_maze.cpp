/**
*    author:  Akayiz
*    created: 2023-08-09 19:37:02
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

void file_io(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int grid[1005][1005];

int visited[1005][1005];
// No need for "previous" array, we only cout the minimum cost
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};

int rows, columns;
bool inBorders(int x, int y){
    return x >= 0 && y >= 0 && x < rows && y < columns;
}

int dijkstra(int x, int y){
    memset(visited, 0, sizeof(visited));
    vector<vector<int>> min_cost(1005, vector<int>(1005, 1e9));

    min_cost[x][y] = grid[x][y];
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq; // current cost, x, y
    pq.push({min_cost[x][y], {x, y}});

    while(!pq.empty()){
        tie(x, y) = pq.top().second;
        int current_cost = pq.top().first;
        visited[x][y] = 1;
        pq.pop();

        for (int i = 0; i < 4; ++i) {
            int newx = x + dx[i];
            int newy = y + dy[i];

            if(inBorders(newx, newy) && !visited[newx][newy])
                if(current_cost + grid[newx][newy] < min_cost[newx][newy]){
                    min_cost[newx][newy] = current_cost + grid[newx][newy];
                    pq.push({min_cost[newx][newy], {newx, newy}});
            }
        }
    }

    return min_cost[rows - 1][columns - 1];
}

int main() {
    Akayiz
    //file_io();

    int tests;
    cin >> tests;

    while(tests--){
        cin >> rows >> columns;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cin >> grid[i][j];
            }
        }

        cout << dijkstra(0, 0) << el;
    }

    return 0;
}