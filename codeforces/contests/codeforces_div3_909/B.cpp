/**
*    author:  Akayiz
*    created: 2023-11-17 16:42:05
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll weights[150005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n;
    while(t--){
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> weights[i];
        }

        for (int i = 2; i <= n; i++)
        {
            weights[i] += weights[i - 1];
        }

        ll ans = 0;
        for (int i = 1; i*i <= n; i++)
        {
            if(n % i == 0){
                ll mini = 1e17, maxi = -1;
                int divisor = i;
                for (int j = 1; j <= n; j += divisor)
                {
                    maxi = max(maxi, weights[j + divisor - 1] - weights[j - 1]);
                    mini = min(mini, weights[j + divisor - 1] - weights[j - 1]);
                }
                //cout << maxi << " " << mini << el;
                ans = max(ans, maxi - mini);

                mini = 1e17, maxi = -1;
                divisor =  n / i;
                for (int j = 1; j <= n; j += divisor)
                {
                    maxi = max(maxi, weights[j + divisor - 1] - weights[j - 1]);
                    mini = min(mini, weights[j + divisor - 1] - weights[j - 1]);
                }
                //cout << maxi << " " << mini << el;
                ans = max(ans, maxi - mini);
            }
        }
        
        cout << ans << el;
    }

    return 0;
}