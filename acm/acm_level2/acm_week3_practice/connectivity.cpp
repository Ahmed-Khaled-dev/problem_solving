/**
*    author:  Akayiz
*    created: 2023-08-09 17:44:58
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

vector<int> graph[105];
bool visited[105];

void dfs(int node){
    visited[node] = 1;

    for (auto child : graph[node])
    {
        if(!visited[child])
            dfs(child);
    }
    
}

int main() {
    Akayiz

    int nodes_count, edges_count;
    cin >> nodes_count >> edges_count;
    
    int node1, node2;
    while (edges_count--)
    {
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }
    
    dfs(1);
    for (int i = 1; i <= nodes_count; i++)
    {
        if(!visited[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    

    return 0;
}