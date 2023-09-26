/**
*    author:  Akayiz
*    created: 2023-09-25 17:25:17
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll arr[105];

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
        
        ll num = 1;
        for (int i = 0; i < n; i++)
        {
            if(num != arr[i])
                num++;
            else
                num = arr[i] + 2;
        }

        cout << num - 1 << el;
    }

    return 0;
}