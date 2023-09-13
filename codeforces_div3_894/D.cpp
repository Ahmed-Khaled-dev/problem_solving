/**
*    author:  Akayiz
*    created: 2023-09-12 23:04:36
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    long long t;
    cin >> t;

    long long n;
    while(t--){
        cin >> n;

        long long low = 2, high = 3000000000, mid, ans = -1;
        while(low <= high){
            mid = (low + high) / 2;
            
            //cout << (ll)mid << " " << (ll) (mid * mid) << el;

            if(((mid * mid) - mid) / 2 <= n)
            {
                ans = max(ans, mid);
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        
        //cout << (ll) ans << el;
        cout << (ll)(ans + (n - ((ans * ans) - ans) / 2)) << el;
    }

    return 0;
}