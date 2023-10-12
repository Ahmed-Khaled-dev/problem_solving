/**
*    author:  Akayiz
*    created: 2023-04-17 23:53:23
**/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int vis[200005];
vector<int> adj[200005];
int ans = 1;
bool found = 0;

void dfs(int n){
    if (found)
    {
        return;
    }
    vis[n] = 1;
    for (int child : adj[n])
    {
        if (!vis[child])
        {
            ans++;
            if (ans >= 1000000)
            {
                found = 1;
                break;
            }
            dfs(child);
        }
    }
    vis[n] = 0;
}

int main() {
    fast();

    int n, m, node1, node2;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> node1 >> node2;
        adj[node1].push_back(node2);
        adj[node2].push_back(node1);
    }
    
    dfs(1);
    
    cout << min(ans, 1000000) << endl;

    return 0;
}