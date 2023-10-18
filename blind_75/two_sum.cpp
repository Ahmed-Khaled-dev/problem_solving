/**
*    author:  Akayiz
*    created: 2023-10-18 19:35:47
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    int n, target;
    cin >> n >> target;

    int val;
    unordered_map<int, int> idx;
    bool found = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> val;
        if(idx.find(target - val) != idx.end())
        {
            found = 1;
            cout << i << " " << idx[target - val] << el;
            break;
        }
        idx[val] = i;
    }

    if(!found)
        cout << -1 << el;
    
    return 0;
}