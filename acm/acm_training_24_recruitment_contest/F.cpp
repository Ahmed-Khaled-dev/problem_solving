/**
*    author:  Akayiz
*    created: 2023-09-20 20:03:21
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

const int MAX_N = 1000005;
int spf[MAX_N];

void seive_spf(){
    for (int i = 1; i < MAX_N; i++)
    {
        spf[i] = i;
    }
    
    for (int i = 2; i*i <= MAX_N; i++)
    {
        if(spf[i] == i){
            for (int j = i*i; j <= MAX_N; j+=i)
            {
                if(spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
    
}

int main() {
    Akayiz

    int t;
    cin >> t;

    int n, sum;

    seive_spf();

    while(t--){
        cin >> n >> sum;

        if(n > sum / spf[sum]){
            cout << 1 << " " << endl;
        }
        else{
            if((int) (sum / n) == (double) sum / n)
                cout << sum / n << endl;
            else
                cout << spf[sum] << endl;
        }
    }

    return 0;
}