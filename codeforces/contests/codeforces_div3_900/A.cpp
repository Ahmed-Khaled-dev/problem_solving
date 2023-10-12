/**
*    author:  Akayiz
*    created: 2023-09-26 17:37:04
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int arr[10000];

int main() {
    Akayiz

    int t;
    cin >> t;
    int n, k;
    bool yes;
    while(t--){
        cin >> n >> k;
        yes = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if(arr[i] == k)
            {
                cout << "YES" << el;
                yes = 1;
                break;
            }
        }
        
        if(!yes)
            cout << "NO" << el;
    }

    return 0;
}