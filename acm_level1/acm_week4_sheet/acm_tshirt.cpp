/**
*    author:  Akayiz
*    created: 2023-09-15 23:05:09
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll sizes[100005];
ll sizes_negative[100005];

int main() {
    Akayiz

    ll list_size, members_size;
    cin >> list_size >> members_size;

    for (int i = 0; i < list_size; i++)
    {
        cin >> sizes[i];
    }

    sort(sizes, sizes + list_size);

    for (int i = 0; i < list_size; i++)
    {
        sizes_negative[list_size - i - 1] = -sizes[i];
    }

    ll size;
    while(members_size--){
        cin >> size;
        ll ans1 = sizes[lower_bound(sizes, sizes + list_size, size) - sizes];
        ll ans2 = -sizes_negative[lower_bound(sizes_negative, sizes_negative + list_size, -size) - sizes_negative];

        //cout << ans1 << " " << ans2 << el;
        
        if((abs(ans1 - size) < abs(ans2 - size) && ans1 != 0) || ans2 == 0)
            cout << ans1 << el;
        else if((abs(ans1 - size) > abs(ans2 - size) && ans2 != 0) || ans1 == 0)
            cout << ans2 << el;
        else
            cout << min(ans1, ans2) << el;
    }
    

    return 0;
}