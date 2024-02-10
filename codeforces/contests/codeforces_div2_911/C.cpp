/**
*    author:  Akayiz
*    created: 2023-11-26 17:15:33
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int graph[300005][2];

bool visited[300005];

int min_replace = INT_MAX;

void dfs(int node, string &moves, int replacements){
    visited[node] = 1;
    //cout << node << " ";

    if((graph[node][0] == 0 && graph[node][1] == 0) || replacements >= min_replace){
        //cout << node << " " << min_replace << " " << replacements << el;
        min_replace = min(min_replace, replacements);
        return;
    }
    char original = moves[node - 1];

    for(int i = 0; i <= 1; i++){
        if(!visited[graph[node][i]] && graph[node][i] != 0){
            if(i == 0){
                if('L' != original){
                    dfs(graph[node][i], moves, replacements + 1);
                }
                else
                    dfs(graph[node][i], moves, replacements);
            }
            else{
                if('R' != original){
                    dfs(graph[node][i], moves, replacements + 1);
                }
                else
                    dfs(graph[node][i], moves, replacements);
            }   
        }
    }
}

int main() {
    Akayiz

    int t;
    cin >> t;

    int n;
    string moves;
    int node1, node2;
    while(t--){
        memset(graph, 0, sizeof(graph));
        memset(visited, 0, sizeof(visited));
        cin >> n;

        cin >> moves;
        for (int i = 1; i <= n; i++)
        {
            cin >> node1 >> node2;
            graph[i][0] = node1;
            graph[i][1] = node2;
        }

        min_replace = INT_MAX;
        int replacements = 0;
        dfs(1, moves, replacements);

        // for(auto v : all_paths){
        //     int replacements = 0;
        //     for (int i = 0; i < v.first.size(); i++)
        //     {
        //         if(v.first[i] != v.second[i])
        //             replacements++;
        //     }

        //     min_replace = min(min_replace, replacements);
        // }

        cout << min_replace << el;
    }

    return 0;
}