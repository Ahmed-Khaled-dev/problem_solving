/**
*    author:  Akayiz
*    created: 2023-07-18 22:56:50
**/

#include <iostream>
#include <cmath>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

long long memo[10000005];
long long mod = 1e9 + 7;

long long calculate_num_of_ways(long long steps_count){
    memo[1] = 1;
    memo[2] = 3;
    
    long long d_num_of_ways = 3;

    for (int i = 3; i <= steps_count; i++)
    {   
        memo[i] = (2 % mod * memo[i - 1] % mod) % mod;
        if (i % 2 == 0)
        {
            d_num_of_ways = (d_num_of_ways % mod * 3 % mod) % mod;
            memo[i] = (memo[i] % mod + d_num_of_ways % mod) % mod;
        }
    }

    return memo[steps_count];
}

int main() {
    fast();

    long long steps_count;
    cin >> steps_count;

    cout << calculate_num_of_ways(steps_count);

    return 0;
}