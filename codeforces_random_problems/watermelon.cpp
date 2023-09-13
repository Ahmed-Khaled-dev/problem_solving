/**
*    author:  Akayiz
*    created: 2023-09-10 23:28:39
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    int weight;
    cin >> weight;

    if(weight % 2 == 0 && weight != 2)
        cout << "YES" << el;
    else
        cout << "NO" << el;

    return 0;
}