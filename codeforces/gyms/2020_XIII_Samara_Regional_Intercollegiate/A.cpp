/**
*    author:  Akayiz
*    created: 2023-07-28 15:34:37
**/

#include <iostream>
#include <cmath>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

long long arr[500005] = {};
long long vas_hash[500005] = {};

int main() {
    fast();

    long long n, q;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 1)
        {
            vas_hash[i] = arr[i] - arr[i - 1];
        }
        else if (i > 1)
        {
            vas_hash[i] = arr[i] - vas_hash[i - 1];
        }
        else
            vas_hash[i] = arr[i];
    }

    cin >> q;
    long long l, r, v;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r >> v;
        if (n % 2 == 0)
        {
            if (((r - l) + 1) % 2 != 0)
            {
                if (r % 2 == 0)
                {
                    vas_hash[n - 1] += v;
                }
                else
                    vas_hash[n - 1] -= v;
            }
        }
        else
        {
            if (((r - l) + 1) % 2 != 0)
            {
                if (r % 2 == 0)
                {
                    vas_hash[n - 1] -= v;
                }
                else
                    vas_hash[n - 1] += v;
            }
        }
        
        
    
        cout << vas_hash[n - 1] << endl;
    }

    return 0;
}