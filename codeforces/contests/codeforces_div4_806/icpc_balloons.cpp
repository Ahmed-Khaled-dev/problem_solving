/**
*    author:  Akayiz
*    created: 2023-06-26 01:35:02
**/

#include <iostream>

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
    string problems;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> problems;
        bool visited[500] = {0};
        
        long long total = 0;

        for (int j = 0; j < n; j++)
        {
            if (visited[(int) problems[j]])
            {
                total += 1;
            }
            else
            {
                total += 2;
                visited[(int) problems[j]] = 1;
            }
        }

        cout << total << endl;
        
    }
    

    return 0;
}