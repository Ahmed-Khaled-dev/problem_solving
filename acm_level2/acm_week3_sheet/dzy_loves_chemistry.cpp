/**
*    author:  Akayiz
*    created: 2023-04-17 17:50:37
**/

#include <iostream>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int vis[100];
vector<int> adj[55];
long long ans = 1;

void dfs(int n){
    vis[n] = 1;
    
    for (int child : adj[n])
    {
        if (!vis[child])
        {
            ans *= 2;
            dfs(child);
        }        
    }
}

int main() {
    fast();

    int n, m;
    cin >> n >> m;

    int chem1, chem2;

    for (int i = 0; i < m; i++)
    {
        cin >> chem1 >> chem2;
        adj[chem1].push_back(chem2);
        adj[chem2].push_back(chem1);
    }

    for (int i = 1; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    
    cout << ans << endl;

    return 0;
}