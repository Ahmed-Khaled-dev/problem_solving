/**
*    author:  Akayiz
*    created: 2023-02-21 18:25:59
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    unsigned long long int w, x, n, y = 1;
    cin >> w >> x >> n;

    unsigned long long int z = ((n / (w * x)) - (1 / x) - 2);
    cout << 1 << " " << z;

    return 0;
}