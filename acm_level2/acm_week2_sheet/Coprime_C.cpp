/**
*    author:  Akayiz
*    created: 2023-04-08 14:55:58
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

const long long SIZE = 1000005;
long long spfs[SIZE];
long long arr[SIZE];
long long prime_freq[SIZE];
void spf(long long n);
void prime_fact_improved(long long n);

int main() {
    fast();

    long long n;
    cin >> n;
    
    bool pairwise = 1, setwise = 1;

    spf(SIZE);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        prime_fact_improved(arr[i]);
    }

    for (long long i = 0; i < SIZE; i++)
    {
        if (prime_freq[i] > 1)
        {
            pairwise = 0;
            if (prime_freq[i] == n)
            {
                setwise = 0;
                break;
            }
        }
    }
    
    if (pairwise)
    {
        cout << "pairwise coprime";
    }
    else if (setwise)
    {
        cout << "setwise coprime";
    }
    else
    {
        cout << "not coprime";
    }
    

    return 0;
}

void spf(long long n){
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

void prime_fact_improved(long long n){
    long long current_spf = 1;
    //cout << "n = " << n << endl;
    while (n != 1)
    {
        if (current_spf != spfs[n])
        {
            current_spf = spfs[n];
            prime_freq[spfs[n]]++;
        }
        n /= spfs[n];
    }
}