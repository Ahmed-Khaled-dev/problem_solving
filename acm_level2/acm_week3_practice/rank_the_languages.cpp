/**
*    author:  Akayiz
*    created: 2023-08-09 19:37:02
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

char grid[1000][1000];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
bool visited[1000][1000];
pair<int, char> char_state_count[30];

int height, width;

bool inBorders(int x, int y){
    return x >= 0 && y >= 0 && x < height && y < width;
}

void dfs(int x, int y){
    stack<pair<int, int>> dfs_stack;
    visited[x][y] = 1;
    dfs_stack.push({x, y});
    char language = grid[x][y];
    char_state_count[(int) language - 'a'].first++;
    char_state_count[(int) language - 'a'].second = -1 * language;

    while(!dfs_stack.empty()){
        tie(x, y) = dfs_stack.top();
        dfs_stack.pop();

        for (int i = 0; i < 4; ++i) {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            if(!visited[new_x][new_y] && inBorders(new_x, new_y) && grid[new_x][new_y] == language){
                dfs_stack.push({new_x, new_y});
                visited[new_x][new_y] = 1;
            }
        }
    }
}

int main() {
    Akayiz

    int tests;
    cin >> tests;

    for (int t = 1; t <= tests; ++t) {
        cin >> height >> width;
        memset(visited, 0, sizeof(visited));
        memset(char_state_count, 0, sizeof(char_state_count));

        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                cin >> grid[i][j];
            }
        }

        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                if(!visited[i][j])
                    dfs(i, j);
            }
        }

        sort(char_state_count, char_state_count + 30);
        reverse(char_state_count, char_state_count + 30);

        cout << "World #" << t << el;
        for (int i = 0; i <= 26; ++i) {
            if(char_state_count[i].first == 0)
                break;
            cout << (char) (-1 * char_state_count[i].second) << ": " << char_state_count[i].first << el;
        }
    }
    return 0;
}