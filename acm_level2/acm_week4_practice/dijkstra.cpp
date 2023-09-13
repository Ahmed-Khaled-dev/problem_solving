/**
*    author:  Akayiz
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

vector<pair<int, ll>> graph[100005];
vector<ll> min_cost(100005, 1e18);
vector<int> prev_node(100005);
bool visited[100005];

void dijkstra(int node){
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<>> pq; // current_cost, node (top element is smallest current_cost)
    min_cost[node] = 0;
    prev_node[node] = 0;
    pq.push({min_cost[node], node});

    while(!pq.empty()){
        ll current_cost = pq.top().first;
        node = pq.top().second;
        visited[node] = 1;
        pq.pop();

        for (auto child : graph[node]) {
            if(!visited[child.first])
            {
                if(current_cost + child.second < min_cost[child.first])
                {
                    min_cost[child.first] = current_cost + child.second;
                    prev_node[child.first] = node;
                    pq.push({min_cost[child.first], child.first});
                }
            }
        }
    }
}

int main() {
    Akayiz

    int nodes_count, edges_count;
    cin >> nodes_count >> edges_count;

    int node1, node2;
    ll weight;

    for (ll i = 0; i < edges_count; ++i) {
        cin >> node1 >> node2 >> weight;
        graph[node1].emplace_back(node2, weight);
        graph[node2].emplace_back(node1, weight);
    }

    dijkstra(1);

    //cout << min_cost[nodes_count] << endl;
    vector<int> ans;

    int current_node = nodes_count;
    while(current_node != 0)
    {
        ans.push_back(current_node);
        current_node = prev_node[current_node];
    }

    if(ans.size() == 1){
        cout << -1;
    }
    else{
        reverse(ans.begin(), ans.end());
        for (auto node : ans) {
            cout << node << " ";
        }
    }

    return 0;
}