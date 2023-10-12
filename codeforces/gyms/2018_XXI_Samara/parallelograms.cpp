/**
*    author:  Crispy time limit
        Abraam Ahmed Rehab
**/

#include <bits/stdc++.h>

#define el '\n'
#define Crispy ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int sticks_len[200005],freq[200005];
ll ans,rem;
int main() {
    Crispy

    int sticks_count;
    cin >> sticks_count;

    for (int i = 0; i < sticks_count; ++i) {
        cin >> sticks_len[i];
        freq[sticks_len[i]]++;
    }
    for (int i = 0; i < 200001; ++i) {
        ans +=(freq[i]/4);
        if(freq[i]%4==3||freq[i]%4==2)
            rem+=2;
    }
    ans +=(rem/4);
    cout<<ans<<"\n";


    return 0;
}