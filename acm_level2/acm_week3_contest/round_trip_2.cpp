/**
*    author:  Akayiz
*    created: 2023-04-17 22:00:01
**/

#include <iostream>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

vector<int> adj[100005];
vector<int> path;
int vis[100005], nodes[100005];
bool found = 0;

void dfs(int node, int parent){
    vis[node] = 1;
    for (int child : adj[node])
    {
        if (!vis[child] && !found)
        {
            path.push_back(child);
            dfs(child, node);
            path.pop_back();
        }
        else if(child != parent && !found){
            found = 1;
            path.push_back(child);
            path.push_back(child);
            cout << child << endl;
        }
    }
}

int main() {
    fast();

    int n, m, city1, city2;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> city1 >> city2;
        adj[city1].push_back(city2);
    }

    for (int i = 1; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, i);
        }
    }

    cout << path.size() << endl;

    return 0;
}