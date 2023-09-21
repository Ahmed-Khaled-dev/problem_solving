/**
*    author:  Akayiz
*    created: 2023-09-20 18:46:21
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

vector<int> graph[200005];
bool visited[200005];
vector<int> node_in_distance[200005];
int sub_nodes[200005];

void dfs(int node, int distance){
    visited[node] = 1;
    node_in_distance[distance].push_back(node);

    sub_nodes[node] = 1;
    for (auto child : graph[node])
    {
        if(!visited[child])
        {   
            dfs(child, distance + 1);
            visited[child] = 1;
            sub_nodes[node] += sub_nodes[child];
        }
    }
    
}

int main() {
    Akayiz

    int nodes;
    cin >> nodes;

    int node1, node2;
    for (int i = 0; i < nodes - 1; i++)
    {
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }

    if(nodes == 1)
    {
        cout << "yes" << endl;
        return 0;
    }
    dfs(1, 0);
    sub_nodes[1]--;

    bool beautiful = 1;
    for (int i = 0; i < 200005; i++)
    {   
        if(node_in_distance[i].empty())
            break;
        for(auto node : node_in_distance[i]){
            //cout << node << " " << sub_nodes[node] << " " << node_in_distance[i].size() << endl;
            if(sub_nodes[node] != node_in_distance[i].size())
            {
                beautiful = 0;
                break;
            }
        }
        if(beautiful)
        {
            cout << "yes" << endl;
            return 0;
        }
        else
            beautiful = 1;
    }
    
    cout << "no" << endl;

    return 0;
}