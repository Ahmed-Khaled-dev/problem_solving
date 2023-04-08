/**
*    author:  Akayiz
*    created: 2023-04-03 20:19:36
**/

#include <iostream>
#include <cmath>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}
int x, n, i, combinations = 0;

int powerSum(int i, int sum){
    if (i == 32)
    {
        if (sum == x)
        {
            combinations++;
        }
        return 0;
    }
    
    
    if (sum + pow(i, n) <= x)
    {
        powerSum(i + 1, sum + pow(i, n));
    }
    powerSum(i + 1, sum);

    return combinations;
}

int main() {
    fast();

    cin >> x >> n;
    cout << powerSum(1, 0);
    return 0;
}