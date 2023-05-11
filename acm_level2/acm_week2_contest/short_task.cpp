/**
*    author:  Akayiz
*    created: 2023-04-11 00:05:41
**/

#include <iostream>
#include <map>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

void spf(int n, int spfs[]){
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

long long fast_Power(long long base, long long power){
    if (power == 1)
    {
        return base;
    }
    else if (power == 0)
    {
        return 1;
    }

    long long half_power = fast_Power(base, power/2);
    long long ret = half_power * half_power;
    if (power % 2 == 1)
    {
        ret = base * ret;
    }
    
    return ret;
}

int calc_factors_sum(int N, int spfs[])
{
    int ans = 1;
     
    int current_spf = spfs[N];
    int power = 1;
    
    // Prime factorization
    while (N > 1) {
        N /= spfs[N];
 
        if (current_spf == spfs[N]) {
            power++;
            continue;
        }
 
        long long sum = 0;
         
        for(long long i=0; i<=power; i++){
            long long f_power = fast_Power(current_spf , i);
            sum += f_power;
        }
         
        ans *= sum;

        current_spf = spfs[N];
        power = 1;
    }
 
    return ans;
}

const int N = 10000005;
int spfs[N];
map<long long, long long> factors_sum = {};

int main() {
    fast();
    
    spf(N, spfs);
    for (int i = 1; i <= N; i++)
    {
        factors_sum[calc_factors_sum(i, spfs)] = i;
        //cout << calc_factors_sum(i, spfs) << " " << i << endl;
    }

    int t;
    long long c;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> c;
        if (factors_sum[c] == 0)
        {
            cout << -1 << endl;
            continue;
        }
        cout << factors_sum[c] << endl;
    }

    return 0;
}