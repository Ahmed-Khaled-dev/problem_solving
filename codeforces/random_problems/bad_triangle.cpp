/**
*    author:  Akayiz
*    created: 2023-10-18 15:32:44
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int arr[50005];

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
        if(arr[0] + arr[1] <= arr[n - 1])
            cout << 1 << " " << 2 << " " << n << el;
        else
            cout << -1 << el;
    }

    return 0;
}