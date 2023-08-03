/**
*    author:  Akayiz
*    created: 2023-07-25 11:25:11
**/

#include <iostream>
#include <cmath>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}
unsigned long long sum ,n,a[100005];
int main() {
    fast();
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%5==0)
    cout<<sum/5<<'\n';
    else
    cout<<sum/5+1<<"\n";

    return 0;
}