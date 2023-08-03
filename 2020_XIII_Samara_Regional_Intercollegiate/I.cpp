/**
*    author:  Akayiz
*    created: 2023-07-28 15:21:10
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
        fast();
    int n;
    cin>>n;
    pair<int,pair<int,int>> arr[200005];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].second.second>>arr[i].first;
        arr[i].second.first =i;
    }
    sort(arr,arr+n);
        for (int i = 0; i < n-1; i++)
        {
    
            if(arr[i].second.second > arr[i+1].second.second && arr[i].first == arr[i+1].first){
                cout<<"NO";return 0;
            }
        }
        
    
    
    cout<<"YES";
    return 0;
}