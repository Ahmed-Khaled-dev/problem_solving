/**
*    author:  Akayiz
*    created: 2023-04-10 17:32:30
**/

#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    unsigned long long l, r;

    cin >> l >> r;

    if (r - l >= 2)
    {
        for (unsigned long long i = l; i <= r - 2; i++)
        {
            for (unsigned long long j = i + 1; j <= r - 1; j++)
            {
                for (unsigned long long k = i + 2; k <= r; k++)
                {
                    if (gcd(i, j) == 1 && gcd(j, k) == 1 && gcd(i, k) != 1)
                    {
                        cout << i << " " << j << " " << k;
                        return 0;
                    }
                } 
            } 
        }
    }
    
    cout << -1;
}