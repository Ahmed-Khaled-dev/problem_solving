/**
*    author:  Akayiz
*    created: 2023-02-14 21:36:14
**/

#include <iostream>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

vector<int> snacks;
int visited[100005];

int main() {
    fast();

    int n, snack, max;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> snack;
        snacks.push_back(snack);
    }

    max = n;
    for (int i = 0; i < n; i++)
    {
        visited[snacks[i]]++;
        if (snacks[i] == max)
        {
            for (int j = max; j >= 0; j--)
            {
                if (visited[j] == 1)
                {
                    cout << j << " ";
                }
                else
                {
                    max = j;
                    break;
                }
            }
        }
        cout << endl;
    }
    

    return 0;
}