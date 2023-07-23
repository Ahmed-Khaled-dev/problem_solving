/**
*    author:  Akayiz
*    created: 2023-07-21 19:19:03
**/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

long long frogs_hops[200005];
long long spf[200005];

void sieve()
{
    int MAXN = 200005;
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
        spf[i] = i;
 
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (int j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

int main() {
    fast();

    sieve();

    int t;
    cin >> t;

    int frogs_count;

    for (int i = 0; i < t; i++)
    {
        cin >> frogs_count;
        int visited_1[2] = {};
        for (int j = 0; j < frogs_count; j++)
        {
            cin >> frogs_hops[j];
            if (frogs_hops[j] == 1)
            {
                visited_1[1]++;
            }
        }
        
        int primes_freq[200005] = {};
        for (int j = 0; j < frogs_count; j++)
        {
            long long hop = frogs_hops[j];
            if (hop <= frogs_count)
            {
                bool number_visited[200005] = {};
                while (hop != 1)
                {
                    if (!number_visited[spf[hop]])
                    {
                        number_visited[spf[hop]] = 1;
                        primes_freq[spf[hop]]++;
                    }
                    hop /= spf[hop];
                }
            }
        }
        
        int answer = 0;
        
        for (int j = 0; j < frogs_count; j++)
        {
            answer = max(answer, primes_freq[j]);
        }

        answer += visited_1[1];
        
        cout << answer << endl;
    }

    return 0;
}