/**
*    author:  Akayiz
*    created: 2023-12-21 23:14:31
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// day, activity
int days[200005][3];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n;
    while(t--){
        memset(days, 0, sizeof(days));
        int maxi[3][3] = {}, friends_cnt;

        cin >> n;

        for (int a = 0; a < 3; a++)
        {
            for (int d = 0; d < n; d++)
            {
                cin >> friends_cnt;
                days[d][a] = friends_cnt;

                if(friends_cnt > days[maxi[0][a]][a]){
                    maxi[0][a] = d;
                    maxi[1][a] = maxi[0][a];
                    maxi[2][a] = maxi[1][a];
                }
                else if(friends_cnt > days[maxi[1][a]][a]){
                    maxi[1][a] = d;
                    maxi[2][a] = maxi[1][a];
                }
                else if(friends_cnt > days[maxi[2][a]][a]){
                    maxi[2][a] = maxi[1][a];
                }
            }
        }

        int ans = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if(maxi[0][i] != maxi[1][j] != maxi[2][k]){
                        ans = max(ans, days[maxi[0][i]][0] + days[maxi[1][j]][1] + days[maxi[2][k]][2]);
                    }
                }
            }
        }

        cout << ans << el;
        
    }

    return 0;
}