/**
*    author:  Akayiz
*    created: 2023-04-10 23:00:35
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

const unsigned long long MOD = 1e9 + 7;

unsigned long long multiply(long long n, long long m){
    return ((n % MOD) * (m % MOD)) % MOD;
}

unsigned long long fastPower(long long base, long long power){
    if (power == 1)
    {
        return base;
    }
    

    long long half_power = fastPower(base, power/2);
    long long ret = multiply(half_power, half_power);
    if (power % 2 == 1)
    {
        ret = multiply(base, ret);
    }
    
    return ret;
    
}

unsigned long long modInverse(int n) {
   return fastPower(n, MOD - 2);
}

unsigned long long fact(long long n){
    if (n == 1 || n == 0)
    {
        return 1;
    }
    
    return multiply(n, fact(n - 1));
}

int main() {
    fast();

    unsigned long long t;
    cin >> t;

    unsigned long long n, m;
    for (long long i = 0; i < t; i++)
    {
        cin >> n >> m;
        unsigned long long zero_count = n;
        unsigned long long one_count = m - 1;

        unsigned long long ans = multiply(fact(zero_count + one_count), modInverse(multiply(fact(zero_count), fact(one_count))));
        cout << ans << endl;
    }

    return 0;
}