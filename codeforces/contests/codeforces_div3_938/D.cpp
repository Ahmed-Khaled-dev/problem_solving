/**
*    author:  Akayiz
*    created: 2024-04-08 18:18:35
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

bool visitedB[1000005], visitedBa[1000005];
int arrA[1000005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n, m, k, num;
    while(t--){
        memset(visitedB, 0, sizeof(visitedB));
        memset(visitedBa, 0, sizeof(visitedBa));
        cin >> n >> m >> k;

        for (int i = 0; i < n; i++)
        {
            cin >> arrA[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> num;
            visitedB[num] = 1;
        }
        
        int l = 0, r = m - 1, sum = 0;

        for (int i = l; i <= r; i++)
        {
            if(visitedB[arrA[i]]){
                sum++;
                visitedBa[arrA[i]] = 1;
                visitedB[arrA[i]] = 0;
            }
            
        }

        int ans = 0;
        while(r < n){
            if(sum >= k){
                ans++;
            }

            if(visitedBa[arrA[l]] == 1){
                sum--;
                visitedBa[arrA[l]] = 0;
                visitedB[arrA[l]] = 1;
            }
            l++;
            r++;
            if(visitedB[arrA[r]] == 1){
                sum++;
                visitedBa[arrA[r]] = 1;
                visitedB[arrA[r]] = 0;
            }
        }
        
        cout << ans << el;
    }

    return 0;
}