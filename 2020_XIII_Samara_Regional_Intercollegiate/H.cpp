/**
*    author:  Akayiz
*    created: 2023-07-28 18:40:32
**/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

vector<long long> graph[200005] = {};
vector<long long> leafs = {};

map <pair<long long, long long>, bool> edge_vis = {};
long long operations_count = 0;

void dfs(int node){
    for (auto child : graph[node])
    {
        if (!edge_vis[{node, child}] && !edge_vis[{child, node}])
        {
            edge_vis[{node, child}] = 1;
            edge_vis[{child, node}] = 1;
            //cout << node << " " << child << endl;
            for (auto leaf : leafs)
            {
                if(node == leaf){
                    operations_count++;
                }
            }
            dfs(child);
            //cout << "exit : " << child << endl;
            break;
        }
    }
}

int main() {
    fast();

    long long nodes_count;
    cin >> nodes_count;

    long long node1, node2;

    for (long long i = 0; i < nodes_count - 1; i++)
    {
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }

    for (long long i = 1; i <= nodes_count; i++)
    {
        if (graph[i].size() == 1)
        {
            leafs.push_back(i);
        }      
    }

    // for (auto leaf : leafs)
    // {
    //     cout << leaf << endl;
    // }

    for (auto leaf : leafs)
    {
        //cout << "start : " << leaf << endl;
        dfs(leaf);
    }

    cout << operations_count << endl;
    return 0;
}