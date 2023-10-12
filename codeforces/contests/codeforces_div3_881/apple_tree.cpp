/**
*    author:  Akayiz
*    created: 2023-06-20 18:39:16
**/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

bool visited[200005] = {};
vector<long long> tree[200005] = {};
long long possibilities = 0;

long long dfs(long long node){
    visited[node] = 1;
    //cout << node << " " << tree[node].size() << endl;
    if (tree[node].size() == 0)
    {
        possibilities++;
        //cout << "in node " << node << " possibilities = " << possibilities << endl;
    }

    for (long long child : tree[node])
    {
        if (!visited[child])
            dfs(child);
    }
    return possibilities;
}

int main() {
    fast();

    long long t, node_count, node1, node2, assumptions_count, x, y;
    cin >> t;

    for (long long i = 0; i < t; i++)
    {   
        cin >> node_count;
        memset(tree, 0, sizeof(tree));
        for (long long j = 0; j < node_count - 1; j++)
        {
            cin >> node1 >> node2;
            tree[min(node1, node2)].push_back(max(node1, node2));
        }
        
        cin >> assumptions_count;
        for (long long j = 0; j < assumptions_count; j++)
        {
            cin >> x >> y;
            long long x_possibilities = dfs(x);
            memset(visited, 0, sizeof(visited));
            possibilities = 0;
            long long y_possibilities = dfs(y);
            memset(visited, 0, sizeof(visited));
            possibilities = 0;
            cout << (x_possibilities * y_possibilities) << endl;
        }
    }

    return 0;
}