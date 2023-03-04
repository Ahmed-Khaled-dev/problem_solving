/**
*    author:  Akayiz
*    created: 2023-02-26 18:02:47
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

    int n, k;
    cin >> n >> k;

    cout << n * k;

    return 0;
}