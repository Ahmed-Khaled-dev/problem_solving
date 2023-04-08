/**
*    author:  Akayiz
*    created: 2023-04-03 16:45:19
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

void S(int n){
    if (n == 1)
    {
        cout << 1;
        return;
    }
    S(n - 1);
    cout << " " << n << " ";
    S(n - 1);
}

int main() {
    fast();

    int n;
    cin >> n;
    S(n);

    return 0;
}