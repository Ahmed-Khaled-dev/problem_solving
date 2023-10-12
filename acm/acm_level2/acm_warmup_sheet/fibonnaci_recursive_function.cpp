/**
*    author:  Akayiz
*    created: 2023-07-12 01:35:28
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int get_n_fib(int n){
    if (n == 1 || n == 2)
    {
        return 1;
    }
    
    return get_n_fib(n - 1) + get_n_fib(n - 2);
}

int main() {
    fast();

    int n;
    cin >> n;

    cout << get_n_fib(n);

    return 0;
}