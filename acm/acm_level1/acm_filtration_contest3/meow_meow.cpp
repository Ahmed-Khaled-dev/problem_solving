#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();

    long long n, meow, max = -1;
    long long min = 10000000000;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> meow;
        if (meow > max)
        {
            max = meow;
        }
        if (meow < min)
        {
            min = meow;
        }
    }

    cout << max - min;
}