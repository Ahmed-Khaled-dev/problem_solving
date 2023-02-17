/**
*    author:  Akayiz
*    created: 2023-02-14 18:06:49
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

string blowfish, twofish;

int main() {
    fast();

    cin >> blowfish >> twofish;
    reverse(twofish.begin(), twofish.end());
    if (blowfish == twofish)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }
    

    return 0;
}