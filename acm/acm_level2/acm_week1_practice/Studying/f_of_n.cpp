/**
*    author:  Akayiz
*    created: 2023-04-03 16:08:20
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int summ = 0;
int sum(int n){
    if (n == 1)
    {
        return 1;
    }
    summ = n + sum(n-1);
    return summ;
}

int main() {
    fast();

    int n;
    cin >> n;
    cout << sum(n);

    return 0;
}