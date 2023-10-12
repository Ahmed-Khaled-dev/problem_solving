/**
*    author:  Akayiz
*    created: 2023-09-15 20:23:12
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll strengths[100005];
ll prefix[100005];

int main() {
    Akayiz

    int aliens;
    cin >> aliens;

    for (int i = 0; i < aliens; i++)
    {
        cin >> strengths[i];
    }

    sort(strengths, strengths + aliens);
    
    prefix[0] = strengths[0];
    for (int i = 1; i < aliens; i++)
    {
        prefix[i] = strengths[i] + prefix[i - 1];
    }

    ll rounds, power;
    cin >> rounds;

    for (int i = 0; i < rounds; i++)
    {
        cin >> power;

        ll ans;
        ans = lower_bound(strengths, strengths + aliens, power) - strengths;
        
        if(strengths[ans] > power || ans == aliens)
            ans--;

        if(ans < 0)
            cout << -1;
        else
            cout << ans + 1 << " " << prefix[ans] << el;
    }
    
    
    return 0;
}