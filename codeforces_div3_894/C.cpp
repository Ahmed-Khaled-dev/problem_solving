/**
*    author:  Akayiz
*    created: 2023-09-12 22:55:41
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll heights[200005];

int main() {
    Akayiz

    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        map<ll, int> freq = {};
        for (int i = 0; i < n; i++)
        {
            cin >> heights[i];
            freq[heights[i]]++;
        }
        
        ll current_width = n;
        bool sym = 1;
        for (int i = 0; i < n; i++)
        {
            if(current_width != heights[i] - i)
                sym = 0;
            else
            {
                current_width -= 1;
                current_width -= freq[i + 1];
            }
        }

        if(sym)
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }

    return 0;
}