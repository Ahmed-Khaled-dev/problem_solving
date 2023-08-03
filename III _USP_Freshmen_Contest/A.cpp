/**
*    author:  Akayiz
*    created: 2023-07-25 11:19:13
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();
    long long n;
    cin>>n;
    cout<<n*(n-1)/2 +1;

    return 0;
}