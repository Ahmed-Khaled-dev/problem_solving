/**
*    author:  Akayiz
*    created: 2023-07-24 19:55:52
**/

#include <iostream>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

vector<int> graph[105];
int state[105] = {};
bool cycle = 0;

void check_cycle(int node){
    // Visited and in current path
    state[node] = 2;

    for (auto child : graph[node])
    {
        // Not visited
        if (state[child] == 0)
        {
            check_cycle(child);
        }
        else if (state[child] == 2)
        {
            cycle = 1;
            exit;
        }
    }
    // Visited and it's tree contains no cycles, or it doesn't have a tree
    state[node] = 1;
}

int main() {
    fast();

    int nodes_count, edges_count, node1, node2;
    cin >> nodes_count >> edges_count;

    for (int i = 0; i < edges_count; i++)
    {
        cin >> node1 >> node2;
        graph[node1].emplace_back(node2);
    }
    
    for (int i = 0; i < nodes_count; i++)
    {
        if (state[i] == 0)
        {
            check_cycle(i);
            if (cycle)
            {
                cout << 1 << endl;
                return 0;
            } 
        }
    }
    
    cout << 0 << endl;
    return 0;
}