/**
*    author:  Akayiz
*    created: 2023-09-27 23:46:40
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    int n, t;
    cin >> n >> t;

    string q;
    cin >> q;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if(q[j] == 'B' && q[j + 1] == 'G'){
                q[j] = 'G';
                q[j + 1] = 'B';
                j++;
            }
        }
    }

    cout << q << el;
    return 0;
}