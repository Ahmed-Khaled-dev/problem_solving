/**
*    author:  Akayiz
*    created: 2023-10-12 10:01:18
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

vector<int> graph[200005];
int color[200005];
map<pair<int, int>, int> edge_direction;

int n, m;

bool bfs(int node){
    for (int i = 1; i <= n; i++)
        color[i] = -1;
    
    color[node] = 1;
    edge_direction[{node, node}] = 0;

    //Parent, Child
    queue<pair<int, int>> q;
    q.push({node, node});

    while(!q.empty()){
        int parent = q.front().first;
        node = q.front().second;
        q.pop();

        for (auto child : graph[node])
        {
            if(color[child] == color[node])
                return 0;
            
            if(color[child] == -1){
                color[child] = !color[node];
                q.push({node, child});
            }
            edge_direction[{node, child}] = !edge_direction[{parent, node}];
            edge_direction[{child, node}] = edge_direction[{parent, node}];
        }
    }

    return 1;
}

int main() {
    Akayiz

    cin >> n >> m;

    int node1, node2;
    vector<pair<int, int>> input;
    for (int i = 0; i < m; i++)
    {
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
        input.emplace_back(node1, node2);
    }
    
    if(bfs(1)){
        cout << "YES" << el;
        for (auto edge : input)
            cout << edge_direction[edge];
    }
    else
        cout << "NO" << el;

    return 0;
}