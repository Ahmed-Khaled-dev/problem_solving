/**
*    author:  Akayiz
*    created: 2023-04-03 19:32:37
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

void rec(string comb, int k = 3){
    if (comb.length() == k)
    {
        cout << comb << endl;
        return;
    }
    rec(comb + 'a');
    rec(comb + 'b');
}

int main() {
    fast();

    rec("");

    return 0;
}