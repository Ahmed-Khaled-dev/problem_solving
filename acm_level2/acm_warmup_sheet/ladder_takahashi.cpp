/**
*    author:  Akayiz
*    created: 2023-07-11 15:40:25
**/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

map<long long, vector<long long>> graph;
map<long long, bool> visited = {};

long long max_floor = 1;

long long dfs(long long node){
    visited[node] = 1;

    for (long long child : graph[node])
    {
        if (!visited[child])
        {
            visited[child] = 1;
            dfs(child);
            max_floor = max(child, max_floor);
        }
    }
    //cout << child << " " << max_floor << endl;
    return max_floor;
}

int main() {
    fast();

    int ladders_count;
    cin >> ladders_count;

    long long node1, node2;
    for (int i = 0; i < ladders_count; i++)
    {
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }
    
    cout << dfs(1);

    return 0;
}