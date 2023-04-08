/**
*    author:  Akayiz
*    created: 2023-02-12 18:21:40
**/

#include <iostream>
#include <cmath>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int n, a;
    double sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
    }

    //cout << sum << endl;
    cout << ceil(sum / 5);
    

    return 0;
}