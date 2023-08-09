/**
*    author:  Akayiz
*    created: 2023-08-07 17:43:19
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    int t, n, a;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int even_count = 0, odd_count = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            if(a % 2 == 0)
                even_count++;
            else
                odd_count++;
        }
        if(odd_count % 2 == 0)
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }
    

    return 0;
}