/**
*    author:  Akayiz
*    created: 2023-09-15 21:13:30
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        int first_prime_factor = -1;
        for (int i = 2; i*i <= n; i++)
            if(n % i == 0){
                first_prime_factor = i;
                break;
            }
        
        if(first_prime_factor == -1){
            cout << n - 1 << " " << 1 << el;
        }
        else
            cout << n / first_prime_factor << " " << n - (n / first_prime_factor) << el;
    }

    // while(true){
    //     int n;
    //     cin >> n;

    //     for (int i = 1; i <= n / 2; i++)
    //     {
    //         cout << i << " " << n - i << " " << (i * (n - i)) / __gcd(i, n - i) << endl;
    //     }   
    // }

    return 0;
}