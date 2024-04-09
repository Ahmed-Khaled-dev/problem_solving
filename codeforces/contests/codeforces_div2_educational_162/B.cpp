/**
*    author:  Akayiz
*    created: 2024-02-23 16:43:53
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll health[3000005];
ll position[3000005];

int main() {
    Akayiz

    ll t;
    cin >> t;

    ll n, k;

    while(t--){
        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            cin >> health[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            cin >> position[i];
        }

        // Distance, Health
        vector<pair<ll, ll>> monsters = {};

        for (int i = 0; i < n; i++)
        {
            monsters.emplace_back(abs(position[i]), health[i]);
        }
        
        sort(monsters.begin(), monsters.end());
        
        ll current_distance = 0, total_bullets = 0;
        bool alive = 1;
        for(auto monster : monsters){
            if(current_distance != monster.first){
                total_bullets += k * (monster.first - current_distance);
                //cout << "INFO---- " << total_bullets << " " << monster.first << " " << current_distance << endl;
                current_distance = monster.first;
            }
            total_bullets -= monster.second;
            //cout << total_bullets << el;
            if(total_bullets < 0){
                alive = 0;
                break;
            }
        }
        
        if(alive)
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }

    return 0;
}