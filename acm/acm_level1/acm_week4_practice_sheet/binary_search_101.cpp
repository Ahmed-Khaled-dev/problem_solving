#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();

    long long a, b, k;
    cin >> a >> b >> k;

    long long first = a, last = b;

    long long counter = 0;
    while (first <= last)
    {
        long long mid = (first + last) / 2;
        counter++;

        if (mid < k)
        {
            first = mid + 1;
        }
        else if (mid > k)
        {
            last = mid - 1;
        }
        else
        {
            cout << counter;
            break;
        }
    }
}