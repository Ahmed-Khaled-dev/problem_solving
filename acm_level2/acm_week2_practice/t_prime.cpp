/**
*    author:  Akayiz
*    created: 2023-04-08 02:18:35
**/

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

const int MAX = 1e5;
int spf[MAX];

void seive_spf(int n){
    for (int i = 0; i <= n; i++)
    {
        spf[i] = i;
    }

    for (int i = 2; i <= n; i+=2)
    {
        spf[i] = 2;
    }

    for (int i = 3; i*i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i*i; j <= n; j+=i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
}

vector<int> prime_factors;

void prime_fact_optimized(int n){
    while (n != 1)
    {
        prime_factors.push_back(spf[n]);
        //cout << "True prime factor: " << spf[n] << endl;
        n /= spf[n];
    }
}

int main() {
    fast();

    int n;
    cin >> n;
    seive_spf(n);
    prime_fact_optimized(n);

    for (int i = 0; i < prime_factors.size(); i++)
    {
        cout << prime_factors[i] << endl;
    }
    

    return 0;
}