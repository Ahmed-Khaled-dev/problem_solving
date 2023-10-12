/**
*    author:  Akayiz
*    created: 2023-04-17 20:39:41
**/

#include <iostream>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int vis[100005];
vector<int> adj[100005];

void dfs(int n){
    vis[n] = 1;
    for (int child : adj[n])
    {
        if (!vis[child])
        {
            dfs(child);
        }
    }
}

vector<int> roads;

int main() {
    fast();

    int n, m, city1, city2;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> city1 >> city2;
        adj[city1].push_back(city2);
        adj[city2].push_back(city1);
    }

    int components = 0, roads_count = 0, last_parent_node;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            components++;
            dfs(i);
            if (components > 1)
            {
                roads_count++;
                roads.push_back(last_parent_node);
                roads.push_back(i);
            }  
        }
        last_parent_node = i;
    }

    cout << roads_count << endl;
    for (int i = 0; i < roads_count * 2; i+=2)
    {
        cout << roads[i] << " " << roads[i + 1] << endl;
    }
    
    return 0;
}