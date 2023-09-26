/**
*    author:  Akayiz
*    created: 2023-09-26 14:33:57
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// empid, time, profit
map<ll, set<pair<ll, ll>>> emps;

int main() {
    Akayiz
    
    ll n;
    cin >> n;

    ll empid, time, profit;

    while(n--){
        cin >> empid >> time >> profit;
        emps[empid].insert({time, profit});
    }

    ll q;
    cin >> q;
    
    ll type, l, r;
    while(q--){
        cin >> type;
        switch (type)
        {
        case 1:
            cin >> empid >> time;
            if(emps[empid].lower_bound(make_pair(time, 0)) != emps[empid].end())
                cout << emps[empid].lower_bound(make_pair(time, 0))->second << el;
            else
                cout << -1 << el;
            break;
        case 2:
            cin >> empid >> l >> r;
            //cout << emps[empid].lower_bound(make_pair(l, 0))->first << " " << (emps[empid].upper_bound(make_pair(r, 1e7)))->first << el << el;
            if(emps[empid].lower_bound(make_pair(l, 0)) != emps[empid].end())
                emps[empid].erase(emps[empid].lower_bound(make_pair(l, 0)), emps[empid].upper_bound(make_pair(r, 1e10)));
            break;
        case 3:
            cin >> empid >> time >> profit;
            emps[empid].insert({time, profit});
            break;
        }
    }

    return 0;
}