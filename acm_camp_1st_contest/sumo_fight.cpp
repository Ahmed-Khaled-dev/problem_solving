/**
*    author:  Akayiz
*    created: 2023-02-12 18:38:18
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

long long sumo_strengths[200005];

int main() {
    fast();

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long int max = 0, after_max = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> sumo_strengths[j];
            if (sumo_strengths[j] > max)
            {
                after_max = max;
                max = sumo_strengths[j];
            }
            else if (sumo_strengths[j] > after_max)
            {
                after_max = sumo_strengths[j];
            }     
        }
        
        for (int j = 0; j < n; j++)
        {
            if (sumo_strengths[j] == max)
            {
                cout << max - after_max << " ";
            }
            else
            {
                cout << sumo_strengths[j] - max << " ";
            }   
        }
        cout << endl;
    }
    

    return 0;
}