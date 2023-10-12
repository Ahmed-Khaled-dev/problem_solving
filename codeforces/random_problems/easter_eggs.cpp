/**
*    author:  Akayiz
*    created: 2023-10-08 21:27:38
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

//                0    1    2    3    4    5    6
char colors[] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};

int main() {
    Akayiz

    int n;
    cin >> n;

    for (int i = 0; i < 7; i++)
    {
        cout << colors[i];
    }
    
    for (int i = 8; i <= n; i++)
    {
        cout << colors[((i % 4) + 3)];
    }

    return 0;
}