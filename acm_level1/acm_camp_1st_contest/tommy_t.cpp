/**
*    author:  Akayiz
*    created: 2023-02-12 18:55:05
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

char colors[100][100];

int main() {
    fast();

    int t;
    cin >> t;

    for (int k = 0; k < t; k++)
    {    
        bool found = 0;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> colors[i][j];
            }  
        }

        for (int i = 0; i < 8; i++)
        {
            int summation_red = 0;
            for (int j = 0; j < 8; j++)
            {
                //cout << "Row " << i;
                //cout << "Column " << j;
                //cout << "Blue sum = " << summation_blue;
                if (colors[i][j] == 'R')
                {
                    summation_red++;
                }
                else
                {
                   break; 
                }
            }
            //cout << endl;
            if (summation_red == 8)
            {
                cout << 'R' << endl;
                found = 1;
                break;
            }
        }

        if (!found)
        {
            for (int j = 0; j < 8; j++)
            {
                int summation_blue = 0;
                for (int i = 0; i < 8; i++)
                {
                    if (colors[i][j] == 'B')
                    {
                        summation_blue++;
                    }
                    else
                    {
                    break; 
                    }
                }
                if (summation_blue == 8)
                {
                    cout << 'B' << endl;
                    break;
                }
            }
        }   
    }

    return 0;
}