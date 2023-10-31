/**
*    author:  Akayiz
*    created: 2023-10-30 16:42:28
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int arr[25];
int main() {
    Akayiz

    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        bool wrong = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if(arr[i] > arr[i + 1]){
                if((float) log2(i + 1) != (int) log2(i + 1)){
                    cout << "NO" << el;
                    wrong = 1;
                    break;
                }
            }
        }
        if(!wrong)
            cout << "YES" << el;
    }

    return 0;
}