/**
*    author:  Akayiz
*    created: 2023-10-08 16:26:03
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

map<int, int> presents;

int main() {
    Akayiz

    int n, num;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        presents[num] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << presents[i] << " ";
    }
    
    return 0;
}