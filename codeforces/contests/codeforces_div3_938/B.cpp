/**
*    author:  Akayiz
*    created: 2024-04-08 16:56:15
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

    int n, d, r, num;
    while(t--){
        map<ll, ll> freq = {};
        cin >> n >> d >> r;

        for (int i = 0; i < n * n; i++)
        {
            cin >> num;
            freq[num]++;
        }

        bool canBeConstructed = 1;
        int currElementInFirstCol = (freq.begin())->first;
        for (int i = 1; i <= n; i++)
        {
            if(freq[currElementInFirstCol] == 0){
                canBeConstructed = 0;
                break;
            }
            freq[currElementInFirstCol]--;
            //cout << "Curr first element = " << currElementInFirstCol << el;
            int currElementInRow = currElementInFirstCol;
            for (int j = 1; j < n; j++)
            {
                currElementInRow += r;
                //cout << "Curr iterating element = " << currElementInRow << el;
                if(freq[currElementInRow] == 0){
                    canBeConstructed = 0;
                    break;
                }
                else{
                    freq[currElementInRow]--;
                }
            }
            if(!canBeConstructed){
                break;
            }
            currElementInFirstCol += d;
        }

        if(canBeConstructed){
            cout << "YES" << el;
        }
        else{
            cout << "NO" << el;
        }
    }

    return 0;
}