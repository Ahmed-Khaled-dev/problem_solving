/**
*    author:  Akayiz
*    created: 2024-01-28 10:31:13
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

char arr[10005][10005];
bool visited[10005][10005];

int rows, cols;

bool inBounds(int x, int y){
    return x >= 0 && y >= 0 && x < rows && y < cols;
}

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0 ,0};

void bfs(int x, int y){
    queue<pair<int, int>> q;
    q.emplace(x, y);

    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        visited[x][y] = 1;

        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            if(arr[x][y] == arr[new_x][new_y] && inBounds(new_x, new_y) && !visited[new_x][new_y]){
                q.emplace(new_x, new_y);
            }
        }  
    }
}

bool vector_comparator(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main() {
    Akayiz

    int t;
    cin >> t;

    int test_count = 0;
    while(t--){
        test_count++;
        cin >> rows >> cols;

        string row;
        for (int i = 0; i < rows; i++)
        {
            cin >> row;
            for (int j = 0; j < cols; j++)
            {
                arr[i][j] = row[j];
            }
        }

        memset(visited, 0, sizeof(visited));
        
        map<char, int> states = {};

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if(!visited[i][j]){
                    bfs(i, j);
                    states[arr[i][j]]++;
                }
            }
        }

        vector<pair<char, int>> ans;
        for(auto state : states){
            ans.push_back(state);
        }       
        sort(ans.begin(), ans.end(), vector_comparator);

        cout << "World #" << test_count << el;
        for(auto state : ans){
            cout << state.first << ": " << state.second << el;
        }
    }

    return 0;
}