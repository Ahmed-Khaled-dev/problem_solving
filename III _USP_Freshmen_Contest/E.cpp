/**
*    author:  Akayiz
*    created: 2023-07-25 13:44:16
**/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}
vector<pair<long long, long long>> v;
long long start,upstart,p,x,y,n;


int main() {
    fast();
    cin>>n>>start;
    for(int i =0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back({y,x});

    }
    sort(v.begin(),v.end());
    upstart=start;
    for(int i = 0;i<n;i++)
    {
        upstart += ( v[i].second);
        p +=(upstart- v[i].first);
    }
    cout<<p<<"\n";


    return 0;
}