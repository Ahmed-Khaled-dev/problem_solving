/**
*    author:  Akayiz
*    created: 2023-09-13 19:41:17
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int arr[105];

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
        
        cout << 5 << el;
        cout << 1 << " " << n << el;
        cout << 1 << " " << n << el;
        cout << 2 << " " << n << el;
        cout << 1 << " " << 2 << el;
        cout << 1 << " " << 2 << el;

        // int xor_sum = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     xor_sum ^= arr[i];
        // }
        // cout << xor_sum << endl;

        // for (int i = 0; i < n; i++)
        // {
        //     arr[i] = xor_sum;
        // }

        // xor_sum = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     xor_sum ^= arr[i];
        // }
        // cout << xor_sum << endl;

        // for (int i = 0; i < n; i++)
        // {
        //     arr[i] = xor_sum;
        // }

        // xor_sum = 0;
        // for (int i = 1; i < n; i++)
        // {
        //     xor_sum ^= arr[i];
        // }
        // cout << xor_sum << endl;

        // for (int i = 1; i < n; i++)
        // {
        //     arr[i] = xor_sum;
        // }

        // xor_sum = 0;
        // for (int i = 0; i < 1; i++)
        // {
        //     xor_sum ^= arr[i];
        // }
        // cout << xor_sum << endl;

        // for (int i = 0; i < n; i++)
        // {
        //     arr[i] = xor_sum;
        // }

        // xor_sum = 0;
        // for (int i = 0; i < 1; i++)
        // {
        //     xor_sum ^= arr[i];
        // }
        // cout << xor_sum << endl;
    }

    return 0;
}