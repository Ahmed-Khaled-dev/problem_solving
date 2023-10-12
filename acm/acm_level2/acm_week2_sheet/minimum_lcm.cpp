/**
*    author:  Akayiz
*    created: 2023-04-08 13:18:02
**/

#include <iostream>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    long long t;
    cin >> t;

    long long n;
    for (long long i = 0; i < t; i++)
    {
        cin >> n;
        long long a = 1;
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << endl;
        }
        else
        {
            for (int i = 2; i*i <= n; i++)
            {
                if (n % i == 0)
                {
                    a = n / i;
                    break;
                }
            }
            cout << a << " " << n - a << endl;
        }
    }
    return 0;
}