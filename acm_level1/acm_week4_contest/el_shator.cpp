#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();

    long long N;
    cin >> N;

    cout << N / 2 << " " << N / 2;
}