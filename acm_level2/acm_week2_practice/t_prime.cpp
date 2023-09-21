/**
*    author:  Akayiz
*    created: 2023-09-19 16:14:45
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll arr[100005];
int spf[1000005];

void seive_spf(int n){
    spf[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }
    
    for (int i = 2; i*i <= n; i++)
    {
        if(spf[i] == i){
            for (int j = i*i; j <= n; j+=i)
            {
                if(spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

int main() {
    Akayiz

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    seive_spf(1000002);

    // for (int i = 2; i < n; i++)
    // {
    //     cout << i << " " << spf[i] << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        if((sqrt(arr[i]) == (int) sqrt(arr[i])) && arr[i] != 1)
        {
            if(spf[(int) sqrt(arr[i])] == sqrt(arr[i]))
                cout << "YES" << el;
            else
                cout << "NO" << el;
        }
        else
            cout << "NO" << el;
    }
    
    return 0;
}