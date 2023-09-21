/**
*    author:  Akayiz
*    created: 2023-09-20 18:13:07
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int points[100005];

int main() {
    Akayiz

    int brands;
    cin >> brands;
    for (int i = 1; i <= brands; i++)
    {
        cin >> points[i];
    }

    for (int i = 2; i <= brands; i++)
    {
        points[i] += points[i - 1];
    }
    
    int boxes;
    cin >> boxes;

    int l, r;
    ll ans = 0;
    for (int i = 0; i < boxes; i++)
    {
        cin >> l >> r;
        if(points[r] - points[l - 1] > 0)
            ans += points[r] - points[l - 1];
    }
    
    cout << ans << endl;
    return 0;
}