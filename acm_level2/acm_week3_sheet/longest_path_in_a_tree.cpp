/**
*    author:  Akayiz
*    created: 2023-08-01 18:32:09
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

vector<int> graph[10005];
vector<int> leafs;
bool visited[10005];

int ans = 0, path_length = 0, farthest_node = 1;

void dfs(int node){
    visited[node] = 1;

    for (auto child : graph[node])
    {
        if(!visited[child])
        {
            path_length++;
            dfs(child);
            if(path_length > ans){
                farthest_node = child;
                ans = path_length;
            }
            path_length--;
        }
    }
    
    visited[node] = 0;
}

int main() {
    Akayiz

    int nodes_count;
    cin >> nodes_count;

    int node1, node2;
    for (int i = 0; i < nodes_count - 1; i++)
    {
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }

    // for (int i = 1; i <= nodes_count; i++)
    // {
    //     if(graph[i].size() == 1)
    //         leafs.push_back(i);
    //     // cout << i << " :" << endl;
    //     // for (auto child : graph[i])
    //     //     cout << child << endl;   
    // }
    
    // for (int leaf : leafs)
    // {
    //     //cout << leaf << endl;
    //     dfs(leaf);
    // }

    dfs(1);
    dfs(farthest_node);
    
    cout << ans << el;
    
    return 0;
}