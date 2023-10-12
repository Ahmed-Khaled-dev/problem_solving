/**
*    author:  Akayiz
*    created: 2023-07-10 18:13:39
**/

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

vector<int> graph[10] = {{1, 2}, {2, 3, 4}, {0, 1}, {1, 5}, {}, {3, 6, 7, 8}, {5}, {5, 8}, {5, 7, 9}, {8}};
bool visited[10] = {};
vector<int> pre_order = {};

void dfs_pre(int node){
    visited[node] = 1;
    pre_order.push_back(node);
    for (auto child : graph[node])
    {
        if (!visited[child])
        {
            dfs_pre(child);
        }
    }
}

void dfs_post(int node){
    visited[node] = 1;
    for (auto child : graph[node])
    {
        if (!visited[child])
        {
            dfs_pre(child);
        }
    }
    pre_order.push_back(node);
}

int main() {
    fast();

    dfs_post(0);
    for (int i = 0; i < 10; i++)
    {
        cout << pre_order[i] << endl;
    }
    return 0;
}