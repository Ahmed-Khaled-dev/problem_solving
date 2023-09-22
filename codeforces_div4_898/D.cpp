/**
*    author:  Akayiz
*    created: 2023-09-21 17:56:59
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

char paper[200005];

int main() {
    Akayiz

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            cin >> paper[i];
        }
        
        int ans = 0;
        for (int i = 0; i < n;)
        {
            if(paper[i] == 'B')
            {
                ans++;
                i += k;
            }
            else
                i++;
        }

        cout << ans << el;
    }

    return 0;
}