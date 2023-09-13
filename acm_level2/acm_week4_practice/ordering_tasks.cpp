/**
*    author:  Akayiz
*    created: 2023-08-09 19:37:02
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

vector<int> graph[105];
bool visited[105];
stack<int> top_sort;

void dfs(int node){
    visited[node] = 1;

    for (auto child : graph[node]) {
        if(!visited[child])
        {
            dfs(child);
        }
    }
    top_sort.push(node);
}

int main() {
    Akayiz

    int nodes, edges;
    while(cin >> nodes >> edges)
    {
        if(nodes == 0 && edges == 0)
            break;
        int node1, node2;

        for (int i = 0; i < edges; ++i) {
            cin >> node1 >> node2;
            graph[node1].push_back(node2);
        }

        memset(visited, 0, sizeof(visited));
        for (int i = 1; i <= nodes; ++i) {
            if(!visited[i])
                dfs(i);
        }

        while(!top_sort.empty())
        {
            cout << top_sort.top() << " ";
            top_sort.pop();
        }
        cout << el;
    }

    return 0;
}