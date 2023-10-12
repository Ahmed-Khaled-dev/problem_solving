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
unsigned long long Total=0 ,n,arr[100005];
int main() {
    fast();
    
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        Total+=arr[i];
    }

    long long final=0;
      for(int i =0;i<n;i++)
    {
        final+=( (Total - arr[i]) * arr[i]);
        Total -= arr[i]; 
    }  
    cout<<final;
}