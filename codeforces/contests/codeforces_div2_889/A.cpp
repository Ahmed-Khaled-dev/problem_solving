/**
*    author:  Akayiz
*    created: 2023-07-29 17:41:12
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

    int t, n, chair;
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        long long unsatisfied = 0;
        for (int j = 1; j <= n; j++)
        {
            cin >> chair;
            if (chair == j)
                unsatisfied++;
        }
        cout << ceil(unsatisfied / 2.0) << endl;
    }
    

    return 0;
}