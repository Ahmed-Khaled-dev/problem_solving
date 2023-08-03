/**
*    author:  Akayiz
*    created: 2023-07-28 17:18:12
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

    int n;
    cin >> n;

    int shots;

    if (n % 2 == 0)
        shots = (n / 2) + 1;
    else
        shots = ceil(n / 2.0);
    
    cout << shots << endl;

    long long i = -1;

    while (shots > 0)
    {
        if (shots == 1 && n % 2 == 0)
            i += 1;
        else
            i += 2;
        
        cout << i << " ";
        shots--;
    }

    return 0;
}