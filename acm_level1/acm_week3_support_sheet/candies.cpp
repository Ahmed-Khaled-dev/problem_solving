#include <iostream>
#include <cmath>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    unsigned long long n;
    cin >> n;

    cout << (unsigned long long) (-1 + sqrt(1 + (4 * n * 2))) / 2;
}