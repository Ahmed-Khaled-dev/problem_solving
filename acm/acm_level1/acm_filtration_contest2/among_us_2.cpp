#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();

    unsigned long long x, y;
    cin >> x >> y;
    cout << x * y;
}