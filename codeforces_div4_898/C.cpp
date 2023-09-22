/**
*    author:  Akayiz
*    created: 2023-09-21 17:44:31
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

char grid[15][15];

int main() {
    Akayiz

    int t;
    cin >> t;

    while(t--){
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> grid[i][j];
            }
        }

        int points = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if(grid[i][j] == 'X'){
                    if(i == 0 || i == 9 || j == 0 || j == 9)
                    {
                        points += 1;
                    }
                    else if(i == 1 || i == 8 || j == 1 || j == 8)
                    {
                        points += 2;
                    }
                    else if(i == 2 || i == 7 || j == 2 || j == 7)
                    {
                        points += 3;
                    }
                    else if(i == 3 || i == 6 || j == 3 || j == 6)
                    {
                        points += 4;
                    }
                    else if(i == 4 || i == 5 || j == 4 || j == 5)
                    {
                        points += 5;
                    }
                }
            }
        }

        cout << points << el;
    }
    return 0;
}