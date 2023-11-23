/**
*    author:  Akayiz
*    created: 2023-11-22 13:48:38
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;
bool visited[200005];

int prey_dist[200005];

int bfs_find_a_node_in_nearest_cycle(int node, vector<vector<int>> &graph){
    memset(visited, 0, sizeof(visited));
    memset(prey_dist, 0, sizeof(prey_dist));

    visited[node] = 1;
    prey_dist[node] = 0;
    // node, parent
    queue<pair<int, int>> q;
    q.emplace(node, 0);

    int parent;
    while(!q.empty()){
        node = q.front().first;
        parent = q.front().second;
        q.pop();

        for(auto child : graph[node]){
            if(!visited[child]){
                visited[child] = 1;
                q.emplace(child, node);
                prey_dist[child] = prey_dist[node] + 1;
            }
            else{
                if(child != parent){
                    return child;
                }
            }
        }
    }
    return 0;
}

bool found = 0;
void dfs_find_nodes_in_cycle(int node, int parent, vector<vector<int>> &graph, vector<int> &cycle_nodes){
    if(found)
        return;

    cycle_nodes.push_back(node);
    visited[node] = 1;

    for(auto child : graph[node]){
        if(!visited[child]){
            dfs_find_nodes_in_cycle(child, node, graph, cycle_nodes);
            if(!found)
                cycle_nodes.pop_back();
        }
        else{
            if(child != parent){
                found = 1;
            }
        }
    }
}

int bfs_get_distance_from_predator(int node, int target, vector<vector<int>> &graph){
    memset(visited, 0, sizeof(visited));
    visited[node] = 1;

    // node, distance
    queue<pair<int, int>> q;
    q.emplace(node, 0);

    int distance;
    while(!q.empty()){
        node = q.front().first;
        distance = q.front().second;
        q.pop();

        for(auto child : graph[node]){
            if(!visited[child]){
                if(child == target)
                    return distance + 1;
                
                q.emplace(child, distance + 1);
                visited[node] = 1;
            }
        }
    }
    return 0;
}


int main() {
    Akayiz

    int t;
    cin >> t;

    int n, predator, prey;
    int node1, node2;
    
    while(t--){
        cin >> n >> predator >> prey;
        vector<vector<int>> graph(200005);
        
        for (int i = 0; i < n; i++)
        {
            cin >> node1 >> node2;
            graph[node1].push_back(node2);
            graph[node2].push_back(node1);
        }

        int a_node_in_closest_cycle = bfs_find_a_node_in_nearest_cycle(prey, graph);
        
        if(a_node_in_closest_cycle == 0)
        {
            cout << "NO" << el;
            continue;
        }

        memset(visited, 0, sizeof(visited));
        found = 0;
        vector<int> cycle_nodes;
        dfs_find_nodes_in_cycle(a_node_in_closest_cycle, 0, graph, cycle_nodes);

        int min_distance = INT_MAX, nearest_node_to_prey = 0;
        
        //cout << "Nodes in closest cycle to prey" << el;
        for (auto node : cycle_nodes)
        {
            //cout << node << " ";
            if(prey_dist[node] < min_distance){
                nearest_node_to_prey = node;
                min_distance = prey_dist[node];
            }
        }
        //cout << el;

        int distance_from_predator = bfs_get_distance_from_predator(predator, nearest_node_to_prey, graph);
        
        // cout << "A node in closest cycle  = " << a_node_in_closest_cycle << " Nearest node to prey = " << 
        // nearest_node_to_prey << " Distance to nearest node to prey from PREY = " << prey_dist[nearest_node_to_prey] 
        // << " Distance to nearest node to prey from PREDATOR = " << distance_from_predator << el;

        if(distance_from_predator > prey_dist[nearest_node_to_prey])
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }

    return 0;
}