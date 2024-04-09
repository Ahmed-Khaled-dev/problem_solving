/**
*    author:  Akayiz
*    created: 2024-02-13 17:06:24
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

        int low = arr[n - 1], high = 2e9, mid;
        bool found = 0;
        long long sum;
        while(low <= high){
            mid = (low + high) / 2;
            sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += arr[i] - mid;
                if(sum < 0){
                    high = mid - 1;
                    break;
                }
            }
            if(sum == 0){
                found = 1;
                break;
            }
            else if(sum > 0){
                low = mid + 1;
            }
        }

        if(found)
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }

    return 0;
}