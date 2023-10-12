/**
*    author:  Akayiz
*    created: 2023-09-07 17:49:41
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

    int traps, position, time;

    while(t--){
        cin >> traps;
        int traps_time[500] = {};
        for (int i = 0; i < traps; i++)
        {
            cin >> position >> time;
            if(traps_time[position] == 0)
                traps_time[position] = time + (position - 1);
            else
                traps_time[position] = min(traps_time[position], time + (position - 1));
        }
        
        bool found = 0;
        int i = 1;
        for (; i < 400; i++)
        {
            for (int j = i; j > 0; j--)
            {
                if(traps_time[j] != 0){
                    if(((i - 1) + (i - j)) >= traps_time[j])
                    {
                        found = 1;
                        break;
                    }
                }
            }
            if(found)
                break;
        }

        cout << i - 1 << el;
    }

    return 0;
}