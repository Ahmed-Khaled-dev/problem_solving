/**
*    author:  Akayiz
*    created: 2023-08-05 17:54:52
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    ll t, n, element;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        long double sum = 0, ones = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> element;
            if(element == 1)
                ones++;
            else
                sum += element - 1;
        }

        if((sum >= ones) && n != 1)
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }
    
    return 0;
}