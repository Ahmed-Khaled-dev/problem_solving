/**
*    author:  Akayiz
*    created: 2023-08-09 19:37:02
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

vector<pair<int, int>> first_burning_trees;
bool tree_on_fire[2005][2005];
int minutes_till_fire_reached_tree[2005][2005];
int dx[] = {1, -1, 0, 0, 1, 1, -1, -1}, dy[] = {0, 0, 1, -1, 1, -1, -1, 1};
int forest_x, forest_y;

void file_io(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

bool inBorders(int x, int y){
    return x >= 0 && y >= 0 && x < forest_x && y < forest_y;
}

void bfs(int x, int y){
    tree_on_fire[x][y] = 1;
    queue<pair<pair<int, int>, int>> q;
    q.push({{x, y}, 0});

    while(!q.empty()){
        tie(x, y) = q.front().first;
        int minutes = q.front().second;
        q.pop();

        minutes_till_fire_reached_tree[x][y] = min(minutes_till_fire_reached_tree[x][y], minutes);

        for (int i = 0; i < 4; ++i) {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            if (inBorders(new_x, new_y) && !tree_on_fire[new_x][new_y])
            {
                tree_on_fire[new_x][new_y] = 1;
                q.push({{new_x, new_y}, minutes + 1});
            }
        }
    }
}

int main() {
    Akayiz
    file_io();

    cin >> forest_x >> forest_y;

    int burning_trees_count;
    cin >> burning_trees_count;

    int tree_x, tree_y;
    for (int i = 0; i < burning_trees_count; ++i) {
        cin >> tree_x >> tree_y;
        first_burning_trees.emplace_back(tree_x - 1, tree_y - 1);
    }

    for (int i = 0; i < forest_x; ++i) {
        for (int j = 0; j < forest_y; ++j) {
            minutes_till_fire_reached_tree[i][j] = 1e8;
        }
    }

    for (int i = 0; i < burning_trees_count; ++i) {
        bfs(first_burning_trees[i].first, first_burning_trees[i].second);
        memset(tree_on_fire, 0, sizeof(tree_on_fire));
    }

    int ans = -1, ans_x = 1, ans_y = 1;
    for (int i = 0; i < forest_x; ++i) {
        for (int j = 0; j < forest_y; ++j) {
            if (ans < minutes_till_fire_reached_tree[i][j]){
                ans = minutes_till_fire_reached_tree[i][j];
                ans_x = i + 1;
                ans_y = j + 1;
            }
        }
    }

    cout << ans_x << " " << ans_y << el;

    return 0;
}