#include <iostream>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

unsigned long long int mod = 1e9 + 7;

unsigned long long int cap(int c) {
    //cout << c << "\n";
    unsigned long long int sum = 1;
    for (int i = 1; i <= c; i++)
    {
        sum = ((sum % mod) * (i % mod)) % mod;
        //cout << sum << "\n";
    }
    return sum;
}

int main() {
    fast();
    char a, b;
    cin >> a >> b;
    //cout << a << "\n" << b << "\n";

    unsigned long long int difference = (((cap(b) % mod) - (cap(a) % mod)) + mod) % mod;
    cout << difference;
    return 0;
}