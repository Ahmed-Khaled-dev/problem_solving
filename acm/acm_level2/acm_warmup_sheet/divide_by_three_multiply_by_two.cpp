/**
*    author:  Akayiz
*    created: 2023-07-11 03:57:11
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

map<unsigned long long, vector<unsigned long long>> graph;
unsigned long long elements[105];
map<unsigned long long, bool> is_child = {};
vector<unsigned long long> correct_sequence;
map<unsigned long long, bool> visited = {};
int elements_count;

void dfs(unsigned long long node, int visited_nodes_count = 0){
    visited[node] = 1;
    visited_nodes_count++;
    //cout << node << endl;
    correct_sequence.push_back(node);
    
    if (visited_nodes_count == elements_count)
    {
        exit;
    }

    for (auto child : graph[node])
    {
        if (!visited[child])
        {
            dfs(child, visited_nodes_count);
            correct_sequence.pop_back();
            visited[child] = 0;
            visited_nodes_count--;
        }    
    }
}

int main() {
    fast();

    cin >> elements_count;

    for (int i = 0; i < elements_count; i++)
    {
        cin >> elements[i];
    }
    
    for (int i = 0; i < elements_count; i++)
    {
        for (int j = 0; j < elements_count; j++)
        {
            if (elements[i] != elements[j])
            {
                //cout << (elements[i] / 3.0) << " " << elements[i] / 3 << " " << elements[j] << " " << (float) elements[j] << endl;
                if (((elements[i] % 3 == 0) && (elements[i] / 3) == elements[j]) || elements[i] * 2 == elements[j])
                {
                    graph[elements[i]].push_back(elements[j]);
                    is_child[elements[j]] = 1;
                }
            } 
        } 
    }

    unsigned long long starting_number;
    for (int i = 0; i < elements_count; i++)
    {
        if (is_child[elements[i]] == 0)
        {
            starting_number = elements[i];
        }
    }

    // cout << starting_number << endl;
    
    // for (int i = 0; i < elements_count; i++)
    // {
    //     cout << elements[i] << " : ";
    //     for (auto child : graph[elements[i]])
    //     {
    //         cout << child << " ";
    //     }
    //     cout << endl;
    // }

    dfs(starting_number);
    
    for (int i = 0; i < elements_count; i++)
    {
        cout << correct_sequence[i] << " ";
    }
    
    return 0;
}