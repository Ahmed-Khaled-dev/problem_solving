/**
*    author:  Akayiz
*    created: 2023-09-12 22:05:10
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int b[200005];

int main() {
    Akayiz

    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        
        vector<int> a = {};
        a.push_back(b[0]);

        for (int i = 1; i < n; i++)
        {
            if(b[i] >= b[i - 1])
                a.push_back(b[i]);
            else
            {
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }
        
        cout << a.size() << el;
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << el;
    }

    return 0;
}