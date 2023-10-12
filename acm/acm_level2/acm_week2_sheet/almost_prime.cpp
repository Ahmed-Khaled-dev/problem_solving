/**
*    author:  Akayiz
*    created: 2023-04-08 13:30:12
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

const int n = 3005;
int spfs[n];

void spf(int n){
    for (int i = 1; i <= n; i++)
    {
        spfs[i] = i;
    }

    for (int i = 2; i <= n; i+=2)
    {
        spfs[i] = 2;
    }

    for (int i = 3; i*i <= n; i++)
    {
        if (spfs[i] == i)
        {
            for (int j = i*i; j <= n; j+=i)
            {
                if (spfs[j] == j)
                {
                    spfs[j] = i;
                }
            }   
        }
    }
}

int prime_fact_improved(int n){
    int distinct_prime_factors = 0;
    int current_spf = 1;
    //cout << "n = " << n << endl;
    while (n != 1)
    {
        if (current_spf != spfs[n])
        {
            distinct_prime_factors++;
            current_spf = spfs[n];
            //cout << spfs[n] << " " << distinct_prime_factors << endl;
        }
        n /= spfs[n];
    }
    return distinct_prime_factors;
}

int main() {
    fast();

    int n;
    cin >> n;

    spf(n);
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        if (prime_fact_improved(i) == 2)
        {
            result++;
        }
        //cout << "i = " << i << " prime factors count = " << prime_fact_improved(i) << endl;
    }
    cout << result;

    return 0;
}