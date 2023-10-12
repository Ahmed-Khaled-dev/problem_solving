/**
*    author:  Akayiz
*    created: 2023-09-13 19:57:13
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

pair<ll, ll> cities[200005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int cities_cnt, major_cnt, start, end;
    while(t--){
        cin >> cities_cnt >> major_cnt >> start >> end;
        for (int i = 1; i <= cities_cnt; i++)
        {
            cin >> cities[i].first >> cities[i].second;
        }
        
        ll ans;
        if(start <= major_cnt && end <= major_cnt)
        {
            ans = 0;
        }
        else if(start <= major_cnt){
            ans = abs(cities[start].first - cities[end].first) + abs(cities[start].second - cities[end].second);
            for (int i = 1; i <= major_cnt; i++)
            {
                ans = min(ans, abs(cities[i].first - cities[end].first) + abs(cities[i].second - cities[end].second));
            }       
        }
        else if(end <= major_cnt){
            ans = abs(cities[start].first - cities[end].first) + abs(cities[start].second - cities[end].second);
            for (int i = 1; i <= major_cnt; i++)
            {
                ans = min(ans, abs(cities[i].first - cities[start].first) + abs(cities[i].second - cities[start].second));
            }       
        }
        else
        {
            ans = abs(cities[start].first - cities[end].first) + abs(cities[start].second - cities[end].second);
            //cout << ans << el;
            ll going = 1e15, returning = 1e15;
            for (int i = 1; i <= major_cnt; i++)
            {
                going = min(going, abs(cities[i].first - cities[start].first) + abs(cities[i].second - cities[start].second));
            }
            //cout << going << el;
            for (int i = 1; i <= major_cnt; i++)
            {
                returning = min(returning, abs(cities[i].first - cities[end].first) + abs(cities[i].second - cities[end].second));
            }
            //cout << returning << el;
            ans = min(ans, going + returning);
        }

        cout << ans << el;
    }

    return 0;
}