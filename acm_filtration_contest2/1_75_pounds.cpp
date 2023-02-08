#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    unsigned long long product = 1;
    long long mod = 1e9 + 7;
    for (int i = 0; i < 288; i++)
    {
        product = ((product % mod) * (6 % mod)) % mod;
    }

    cout << product + (unsigned long long) (6 * 96);
}