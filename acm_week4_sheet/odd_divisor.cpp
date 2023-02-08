#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();

    int t;
    long long n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        bool found_odd_divisor = 1;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << "YES" << endl;
            continue;
        }
        while (n % 2 == 0)
        {
            n /= 2;
            if (n == 1)
            {
                found_odd_divisor = 0;
            }
        }
        if (found_odd_divisor)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
}