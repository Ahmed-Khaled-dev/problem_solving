/**
*    author:  Akayiz
*    created: 2023-09-29 16:27:06
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

const int N = 1e5 + 5;

// node, weight
vector<pair<int, int>> graph[N];
vector<ll> dist(N, 1e18);
int prev_node[N];
bool visited[N];

void dijkstra(int node){
    dist[node] = 0;
    prev_node[node] = 0;

    // cost, node
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, node});

    int cur_cost;
    while(!pq.empty()){
        cur_cost = pq.top().first;
        node = pq.top().second;
        visited[node] = 1;
        pq.pop();
        
        if(cur_cost > dist[node])
            continue;
        for (auto child : graph[node])
        {
            if(!visited[child.first])
            {
                if(cur_cost + child.second < dist[child.first]){
                    dist[child.first] = cur_cost + child.second;
                    prev_node[child.first] = node;
                    pq.push({dist[child.first], child.first});
                }
            }
        }
    }
}

int main() {
    Akayiz

    int nodes, edges;
    cin >> nodes >> edges;

    int node1, node2, weight;
    for (int i = 0; i < edges; i++)
    {
        cin >> node1 >> node2 >> weight;
        graph[node1].emplace_back(node2, weight);
        graph[node2].emplace_back(node1, weight);
    }
    
    dijkstra(1);

    vector<int> ans;
    int cur_node;
    if(prev_node[nodes] == 0)
        cout << -1 << el;
    else{
        cur_node = nodes;
        ans.push_back(cur_node);
        while(prev_node[cur_node] != 0){
            ans.push_back(prev_node[cur_node]);
            cur_node = prev_node[cur_node];
        }
        reverse(ans.begin(), ans.end());

        for (auto node : ans)
        {
            cout << node << " ";
        }
        
    }

    return 0;
}