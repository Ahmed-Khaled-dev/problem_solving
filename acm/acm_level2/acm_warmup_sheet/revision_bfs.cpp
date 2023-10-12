/**
*    author:  Akayiz
*    created: 2023-07-10 23:48:12
**/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

vector<int> graph[7] = {{1, 2}, {0, 3, 4}, {0, 5}, {}, {}, {2, 6}, {}};
bool visited[7];
vector<int> bfs_order;

void bfs(int start_node){
    queue<int> bfs_queue;
    bfs_queue.push(start_node);

    while (!bfs_queue.empty())
    {
        int current_node = bfs_queue.front();
        visited[current_node] = 1;
        bfs_order.push_back(current_node);
        bfs_queue.pop();
        
        for (auto child : graph[current_node])
        {
            if (!visited[child])
            {
                bfs_queue.push(child);
            } 
        }
    }
}

int main() {
    fast();
    
    bfs(0);

    for (int i = 0; i < 7; i++)
    {
        cout << bfs_order[i] << endl;
    }
    

    return 0;
}