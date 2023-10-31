/**
*    author:  Akayiz
*    created: 2023-10-30 17:21:06
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int arr[200005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n;
    while(t--){
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        
        ll cur = 0, end = n - 1, x = 0, ans = 0;
        while(cur <= end){
            if(x == arr[end])
            {
                ans++;
                end--;
                x = 0;
            }
            else{
                if(cur == end){
                    ans += ceil((arr[end] - x) / 2.0);
                    if(arr[cur] != 1)
                        ans++;
                    break;
                }
                if(x + arr[cur] > arr[end])
                {
                    arr[cur] -= (arr[end] - x);
                    ans += (arr[end] - x);
                    x += (arr[end] - x);
                }
                else
                {
                    ans += arr[cur];
                    x += arr[cur];
                    cur++;
                }
            }
        }
        cout << ans << el;
    }

    return 0;
}