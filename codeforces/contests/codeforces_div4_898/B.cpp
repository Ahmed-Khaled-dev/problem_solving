/**
*    author:  Akayiz
*    created: 2023-09-21 17:38:01
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int arr[10];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n;
    while(t--){
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll ans = -1;
        for (int i = 0; i < n; i++)
        {
            ll product = 1;
            arr[i]++;
            for (int j = 0; j < n; j++)
            {
                product *= arr[j];
            }
            ans = max(ans, product);
            arr[i]--;
        }

        cout << ans << el;
    }

    return 0;
}