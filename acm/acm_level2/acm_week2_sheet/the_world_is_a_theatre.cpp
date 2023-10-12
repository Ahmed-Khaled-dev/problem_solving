/**
*    author:  Akayiz
*    created: 2023-04-09 00:11:43
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

const long long MOD = 1e9 + 7;

long long multiply(long long n, long long m){
    return ((n % MOD) * (m % MOD)) % MOD;
}

long long fastPower(long long base, long long power){
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

long long modInverse(int n) {
   return fastPower(n, MOD - 2);
}

long long fact(long long n){
    if (n == 1 || n == 0)
    {
        return 1;
    }
    
    return multiply(n, fact(n - 1));
}

// long long nCr(long long n, long long r){
//     return (multiply(fact(n), modInverse(multiply(fact(n - r), fact(r)))));
// }

long long nPr(long long n, long long r){
    return (multiply(fact(n), modInverse(fact(n - r))));
}

long long nCr(long long n, long long r){
    long long ans=1;
    for (long long i = 0; i < r ; i++) {
        ans*=n-i;
        ans/=i+1;
    }
    return ans;
}

int main() {
    fast();

    long long n, m, t;
    cin >> n >> m >> t;
    long long sum = 0;
    long long girls_r = 1;
    long long boys_r = t - 1;
    while (boys_r >= 4){
      sum += nCr(n, boys_r) * nCr(m, girls_r);
      girls_r++;
      boys_r--;
    }
    cout << sum;

    // long long min_actors_ways = nCr(n, 4) * nCr(m, 1);
    // long long total_ways = min_actors_ways * nCr((n - 4) + (m - 1), t - 5);

    // cout << total_ways;

    // int n, m;
    // cin >> n >> m;
    // cout << fastPower(n, m);
    return 0;
}