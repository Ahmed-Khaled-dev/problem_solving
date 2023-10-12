/**
*    author:  Akayiz
*    created: 2023-08-09 19:37:02
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

char grid[30][30];
bool visited[30][30];
int dx[] = {1, -1, 0, 0, 1, -1, 1, -1};
int dy[] = {0, 0, 1, -1, 1, 1, -1, -1};
int dimension;

bool inBorders(int x, int y){
    return x >= 0 && y >= 0 && x < dimension && y < dimension;
}

void dfs(int x, int y){
    visited[x][y] = 1;

    for (int i = 0; i < 8; ++i) {
        int new_x = x + dx[i];
        int new_y = y + dy[i];

        if (!visited[new_x][new_y] && inBorders(new_x, new_y) && grid[new_x][new_y] == '1')
            dfs(new_x, new_y);
    }
}

int main() {
    Akayiz

    int cnt = 1;
    while(cin >> dimension){

        memset(visited, 0, sizeof(visited));

        for (int i = 0; i < dimension; ++i) {
            for (int j = 0; j < dimension; ++j) {
                cin >> grid[i][j];
            }
        }

        int war_eagle_count = 0;
        for (int i = 0; i < dimension; ++i) {
            for (int j = 0; j < dimension; ++j) {
                if(!visited[i][j] && grid[i][j] == '1') {
                    war_eagle_count++;
                    dfs(i, j);
                }
            }
        }

        cout << "Image number " << cnt++ << " contains " << war_eagle_count << " war eagles." << el;
    }

    return 0;
}