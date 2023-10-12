/**
*    author:  Akayiz
*    created: 2023-06-26 01:46:41
**/

#include <iostream>
#include <cmath>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t;
    cin >> t;
    
    int n;
    int moves_count;
    string moves;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int wheels_states[105] = {};

        for (int j = 0; j < n; j++)
        {
            cin >> wheels_states[j];
        }

        for (int j = 0; j < n; j++)
        {
            cin >> moves_count >> moves;
            for (int k = 0; k < moves_count; k++)
            {
                if (moves[k] == 'D')
                {
                    wheels_states[j]++;
                }
                else
                {
                    wheels_states[j]--;
                    if (wheels_states[j] < 0)
                    {
                        wheels_states[j] += 10;
                    }
                }
            }
        }
        
        for (int j = 0; j < n; j++)
        {
            cout << wheels_states[j] % 10 << " ";
        }
        cout << endl;
        
    }
    

    return 0;
}