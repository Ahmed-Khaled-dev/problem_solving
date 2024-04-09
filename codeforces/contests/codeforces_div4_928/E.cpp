/**
*    author:  Akayiz
*    created: 2024-02-19 18:28:33
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz
    
    int t;
    cin >> t;

    long n, k;
    while(t--){
        cin >> n >> k;
        if(k <= ceil((double) n / 2)){
            cout << 1 + (k - 1)*2 << el;
            continue;
        }
        for (int i = 1; i < 32; i++)
        {
            if(k <= ceil((double) n - (double) n / (1 << i))){
                long diff = k - (ceil((double) n - (double) n / (1 << (i - 1))) + 1);
                //cout << "k = " << k << " meow = " << ceil(n - (double) n / (1 << (i - 1))) + 1 << " diff = " << diff << endl;
                cout << (1 << i - 1) + diff * (1 << i) << el;
                break;
            }
        }
    }

    return 0;
}