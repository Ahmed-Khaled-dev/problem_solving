/**
*    author:  Akayiz
*    created: 2023-11-26 16:43:15
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        
        char cells[105] = {};
        cin >> cells;

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(cells[i] == '.'){
                if(cells[i + 1] == '.' && cells[i + 2] == '.'){
                    ans = 2;
                    break;
                }
                else
                    ans++;
            }
        }

        cout << ans << el;
        
    }

    return 0;
}